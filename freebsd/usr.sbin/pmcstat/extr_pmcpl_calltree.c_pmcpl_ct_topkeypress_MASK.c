
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;

int
FUNC_1(int VAR_1, void *VAR_2)
{
 WINDOW *VAR_3;

 VAR_3 = (WINDOW *)VAR_2;

 switch (VAR_1) {
 case 'f':
  VAR_0 = !VAR_0;
  FUNC_0(VAR_3, "skip empty link %s",
      VAR_0 ? "on" : "off");
  break;
 }

 return 0;
}
