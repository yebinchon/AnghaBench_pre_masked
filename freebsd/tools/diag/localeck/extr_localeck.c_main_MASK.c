
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* catname; int catid; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (char*,char*,char const*) ;
 int * FUNC_3 (int ,char const*) ;
 int VAR_2 ;

int
FUNC_4(int VAR_3, char *VAR_4[])
{
 int VAR_5, VAR_6;
 const char *VAR_7;

 if (VAR_3 != 2) {
  (void)FUNC_1(VAR_2, "usage: localeck <locale_name>\n");
  FUNC_0(1);
 }

 VAR_7 = VAR_4[1];
 VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (FUNC_3(VAR_1[VAR_5].catid, VAR_7) == ((void*)0)) {
   FUNC_2("setlocale(%s, %s) failed\n", VAR_1[VAR_5].catname,
       VAR_7);
   VAR_6++;
  }
 }
 return (VAR_6);
}
