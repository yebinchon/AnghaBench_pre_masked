
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kv_reset_save_regs {int gmcon_reng_execute; int gmcon_misc; void* gmcon_misc3; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_6,
       struct kv_reset_save_regs *VAR_7)
{
 VAR_7->gmcon_reng_execute = FUNC_0(VAR_5);
 VAR_7->gmcon_misc = FUNC_0(VAR_3);
 VAR_7->gmcon_misc3 = FUNC_0(VAR_4);

 FUNC_1(VAR_5, VAR_7->gmcon_reng_execute &
  ~VAR_2);
 FUNC_1(VAR_3, VAR_7->gmcon_misc &
  ~(VAR_0 |
   VAR_1));
}
