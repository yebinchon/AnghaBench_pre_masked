
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int ctl_name; int mod_name; int mc_idx; int work; scalar_t__ edac_check; int op_state; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mem_ctl_info* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct mem_ctl_info*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct mem_ctl_info*) ;
 int * VAR_3 ;
 int FUNC_4 (int ,int ,char*,int ,int ,int ,int ) ;
 int FUNC_5 (struct mem_ctl_info*) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

struct mem_ctl_info *FUNC_9(struct device *VAR_5)
{
 struct mem_ctl_info *VAR_6;

 FUNC_2(0, "\n");

 FUNC_7(&VAR_4);


 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 == ((void*)0)) {
  FUNC_8(&VAR_4);
  return ((void*)0);
 }


 VAR_6->op_state = VAR_2;

 if (FUNC_1(VAR_6))
  VAR_3 = ((void*)0);

 FUNC_8(&VAR_4);

 if (VAR_6->edac_check)
  FUNC_6(&VAR_6->work);


 FUNC_5(VAR_6);

 FUNC_4(VAR_1, VAR_0,
  "Removed device %d for %s %s: DEV %s\n", VAR_6->mc_idx,
  VAR_6->mod_name, VAR_6->ctl_name, FUNC_3(VAR_6));

 return VAR_6;
}
