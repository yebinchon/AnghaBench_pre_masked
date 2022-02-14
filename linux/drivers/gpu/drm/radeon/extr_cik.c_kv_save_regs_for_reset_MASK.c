
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct kv_reset_save_regs {int gmcon_reng_execute; int gmcon_misc; void* gmcon_misc3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_6,
       struct kv_reset_save_regs *VAR_7)
{
 VAR_7->gmcon_reng_execute = FUNC_0(VAR_2);
 VAR_7->gmcon_misc = FUNC_0(VAR_0);
 VAR_7->gmcon_misc3 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_7->gmcon_reng_execute & ~VAR_3);
 FUNC_1(VAR_0, VAR_7->gmcon_misc & ~(VAR_4 |
      VAR_5));
}
