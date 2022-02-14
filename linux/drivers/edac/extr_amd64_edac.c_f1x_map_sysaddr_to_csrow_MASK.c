
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mem_ctl_info {struct amd64_pvt* pvt_info; } ;
struct err_info {int syndrome; int channel; int err_code; int csrow; } ;
struct amd64_pvt {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct amd64_pvt*) ;
 int FUNC_1 (int ,struct err_info*) ;
 int FUNC_2 (struct amd64_pvt*,int ,int *) ;
 int FUNC_3 (struct mem_ctl_info*,int ) ;

__attribute__((used)) static void FUNC_4(struct mem_ctl_info *VAR_1, u64 VAR_2,
         struct err_info *VAR_3)
{
 struct amd64_pvt *VAR_4 = VAR_1->pvt_info;

 FUNC_1(VAR_2, VAR_3);

 VAR_3->csrow = FUNC_2(VAR_4, VAR_2, &VAR_3->channel);
 if (VAR_3->csrow < 0) {
  VAR_3->err_code = VAR_0;
  return;
 }






 if (FUNC_0(VAR_4))
  VAR_3->channel = FUNC_3(VAR_1, VAR_3->syndrome);
}
