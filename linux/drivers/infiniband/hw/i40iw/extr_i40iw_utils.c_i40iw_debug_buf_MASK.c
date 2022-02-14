
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct i40iw_sc_dev {int debug_mask; } ;
typedef enum i40iw_debug_flag { ____Placeholder_i40iw_debug_flag } i40iw_debug_flag ;


 int FUNC_0 (struct i40iw_sc_dev*,int,char*,...) ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2(struct i40iw_sc_dev *VAR_0,
       enum i40iw_debug_flag VAR_1,
       char *VAR_2,
       u64 *VAR_3,
       u32 VAR_4)
{
 u32 VAR_5;

 if (!(VAR_0->debug_mask & VAR_1))
  return;
 FUNC_0(VAR_0, VAR_1, "%s\n", VAR_2);
 FUNC_0(VAR_0, VAR_1, "starting address virt=%p phy=%llxh\n", VAR_3,
      (unsigned long long)FUNC_1(VAR_3));

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += 8)
  FUNC_0(VAR_0, VAR_1, "index %03d val: %016llx\n", VAR_5, VAR_3[VAR_5 / 8]);
}
