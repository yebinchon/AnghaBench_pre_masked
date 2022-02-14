
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u16 ;
struct mem_ctl_info {struct amd64_pvt* pvt_info; } ;
struct mce {int status; } ;
struct err_info {int syndrome; } ;
struct amd64_pvt {TYPE_1__* ops; } ;
typedef int err ;
struct TYPE_2__ {int (* map_sysaddr_to_csrow ) (struct mem_ctl_info*,int ,struct err_info*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (struct mem_ctl_info*,struct err_info*,scalar_t__) ;
 struct mem_ctl_info* FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct amd64_pvt*,struct mce*) ;
 int FUNC_7 (struct err_info*,int ,int) ;
 int FUNC_8 (struct mem_ctl_info*,int ,struct err_info*) ;

__attribute__((used)) static inline void FUNC_9(int VAR_2, struct mce *VAR_3)
{
 struct mem_ctl_info *VAR_4;
 struct amd64_pvt *VAR_5;
 u8 VAR_6 = (VAR_3->status >> 45) & 0x3;
 u8 VAR_7 = FUNC_2(VAR_3->status, 0x1f);
 u16 VAR_8 = FUNC_0(VAR_3->status);
 u64 VAR_9;
 struct err_info VAR_10;

 VAR_4 = FUNC_4(VAR_2);
 if (!VAR_4)
  return;

 VAR_5 = VAR_4->pvt_info;


 if (FUNC_1(VAR_8) == VAR_1)
  return;


 if (VAR_7 && VAR_7 != VAR_0)
  return;

 FUNC_7(&VAR_10, 0, sizeof(VAR_10));

 VAR_9 = FUNC_6(VAR_5, VAR_3);

 if (VAR_6 == 2)
  VAR_10.syndrome = FUNC_5(VAR_3->status);

 VAR_5->ops->map_sysaddr_to_csrow(VAR_4, VAR_9, &VAR_10);

 FUNC_3(VAR_4, &VAR_10, VAR_6);
}
