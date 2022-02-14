
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_0, char *VAR_1, char *VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5, *VAR_6;

 VAR_6 = FUNC_4(VAR_0);
 if (VAR_6 == ((void*)0))
  return (-1);
 VAR_5 = FUNC_1(VAR_6);
 VAR_4 = FUNC_4(VAR_0);
 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_6);
  return (-1);
 }
 VAR_3 = FUNC_0(VAR_4);
 if (FUNC_5(VAR_3, "ugen", 4) != 0) {
  FUNC_2(VAR_6);
  FUNC_2(VAR_4);
  return (-1);
 }
 VAR_3 += 4;


 FUNC_3(VAR_1, 256, "%s/usb/%s.1", VAR_5, VAR_3);
 FUNC_3(VAR_2, 256, "%s/usb/%s.2", VAR_5, VAR_3);
 FUNC_2(VAR_6);
 FUNC_2(VAR_4);
 return (0);
}
