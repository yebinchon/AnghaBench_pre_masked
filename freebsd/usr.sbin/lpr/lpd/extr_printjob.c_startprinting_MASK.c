
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (int) ;
 int FUNC_1 (struct printer*,char*) ;
 int FUNC_2 (char const*,struct printer*) ;
 int FUNC_3 (struct printer*) ;
 int FUNC_4 (struct printer*) ;
 int FUNC_5 (int ,char*,...) ;

void
FUNC_6(const char *VAR_1)
{
 struct printer VAR_2, *VAR_3 = &VAR_2;
 int VAR_4;

 FUNC_3(VAR_3);
 VAR_4 = FUNC_2(VAR_1, VAR_3);
 switch(VAR_4) {
 case 129:
  FUNC_5(VAR_0, "can't open printer description file: %m");
  FUNC_0(1);
 case 130:
  FUNC_5(VAR_0, "unknown printer: %s", VAR_1);
  FUNC_0(1);
 case 128:
  FUNC_1(VAR_3, "potential reference loop detected in printcap file");
 default:
  break;
 }
 FUNC_4(VAR_3);
}
