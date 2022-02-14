
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char) ;

__attribute__((used)) static void FUNC_3(char VAR_0)
{
 switch (VAR_0) {
 case 129:
  FUNC_1("Power off requested\n");
  FUNC_0(1);
  break;

 case 128:
  FUNC_1("Loss of system power detected. System is running on"
    " UPS/battery. Check RTAS error log for details\n");
  FUNC_0(1);
  break;

 case 130:
  FUNC_1("Loss of system critical functions detected. Check"
    " RTAS error log for details\n");
  FUNC_0(1);
  break;

 case 131:
  FUNC_1("High ambient temperature detected. Check RTAS"
    " error log for details\n");
  FUNC_0(1);
  break;

 default:
  FUNC_2("Unknown power/cooling shutdown event (modifier = %d)\n",
   VAR_0);
 }
}
