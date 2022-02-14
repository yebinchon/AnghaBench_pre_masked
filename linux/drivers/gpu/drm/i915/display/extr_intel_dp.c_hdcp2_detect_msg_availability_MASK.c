
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_digital_port {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;


 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

 int FUNC_4 (struct intel_digital_port*,int*) ;

__attribute__((used)) static
int FUNC_5(struct intel_digital_port *VAR_1,
      u8 VAR_2, bool *VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 *VAR_3 = 0;
 VAR_5 = FUNC_4(VAR_1, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 switch (VAR_2) {
 case 130:
  if (FUNC_1(VAR_4))
   *VAR_3 = 1;
  break;
 case 129:
  if (FUNC_2(VAR_4))
   *VAR_3 = 1;
  break;
 case 128:
  if (FUNC_3(VAR_4))
   *VAR_3 = 1;
  break;
 default:
  FUNC_0("Unidentified msg_id: %d\n", VAR_2);
  return -VAR_0;
 }

 return 0;
}
