
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct mem_ctl_info {struct amd64_pvt* pvt_info; } ;
struct mce {int status; int synd; int addr; } ;
struct err_info {int syndrome; int csrow; int err_code; int channel; } ;
struct amd64_pvt {int mc_node_id; } ;
typedef int err ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mem_ctl_info*,struct err_info*,int) ;
 struct mem_ctl_info* FUNC_2 (int) ;
 int FUNC_3 (int ,struct err_info*) ;
 int FUNC_4 (struct mce*) ;
 int FUNC_5 (struct err_info*,int ,int) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_7(int VAR_5, struct mce *VAR_6)
{
 u8 VAR_7 = (VAR_6->status >> 45) & 0x3;
 struct mem_ctl_info *VAR_8;
 struct amd64_pvt *VAR_9;
 struct err_info VAR_10;
 u64 VAR_11;

 VAR_8 = FUNC_2(VAR_5);
 if (!VAR_8)
  return;

 VAR_9 = VAR_8->pvt_info;

 FUNC_5(&VAR_10, 0, sizeof(VAR_10));

 if (VAR_6->status & VAR_3)
  VAR_7 = 3;

 VAR_10.channel = FUNC_4(VAR_6);

 if (!(VAR_6->status & VAR_4)) {
  VAR_10.err_code = VAR_2;
  goto log_error;
 }

 if (VAR_7 == 2) {
  u8 VAR_12 = (VAR_6->synd >> 18) & 0x3f;

  if (VAR_12)
   VAR_10.syndrome = (VAR_6->synd >> 32) & FUNC_0(VAR_12 - 1, 0);
  else
   VAR_10.err_code = VAR_0;
 }

 VAR_10.csrow = VAR_6->synd & 0x7;

 if (FUNC_6(VAR_6->addr, VAR_9->mc_node_id, VAR_10.channel, &VAR_11)) {
  VAR_10.err_code = VAR_1;
  goto log_error;
 }

 FUNC_3(VAR_11, &VAR_10);

log_error:
 FUNC_1(VAR_8, &VAR_10, VAR_7);
}
