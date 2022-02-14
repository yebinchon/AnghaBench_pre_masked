
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_digital_port {int tc_mode; } ;


 int FUNC_0 (int) ;



 int FUNC_1 (struct intel_digital_port*,int) ;

__attribute__((used)) static void FUNC_2(struct intel_digital_port *VAR_0)
{
 switch (VAR_0->tc_mode) {
 case 129:

  break;
 case 130:
  FUNC_1(VAR_0, 1);
  VAR_0->tc_mode = 128;
  break;
 case 128:

  break;
 default:
  FUNC_0(VAR_0->tc_mode);
 }
}
