
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int wait_loop; } ;
union dce_dmcu_psr_config_data_wait_loop_reg1 {scalar_t__ u32; TYPE_1__ bits; } ;
struct dmcu {unsigned int cached_wait_loop_number; int ctx; } ;
struct dce_dmcu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int,int) ;
 struct dce_dmcu* FUNC_3 (struct dmcu*) ;
 int FUNC_4 (struct dmcu*) ;
 int FUNC_5 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(
 struct dmcu *VAR_6,
 unsigned int VAR_7)
{
 struct dce_dmcu *VAR_8 = FUNC_3(VAR_6);
 union dce_dmcu_psr_config_data_wait_loop_reg1 VAR_9;

 if (VAR_6->cached_wait_loop_number == VAR_7)
  return;


 if (!FUNC_4(VAR_6))
  return;


 FUNC_2(VAR_2, VAR_4, 0, 1, 10000);

 VAR_9 = 0;
 VAR_9 = VAR_7;
 VAR_6->cached_wait_loop_number = VAR_7;
 FUNC_5(VAR_6->ctx, FUNC_0(VAR_3), VAR_9);


 FUNC_1(VAR_0, VAR_1, VAR_5);


 FUNC_1(VAR_2, VAR_4, 1);
}
