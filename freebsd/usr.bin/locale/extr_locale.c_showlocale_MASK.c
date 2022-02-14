
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int id; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 char* FUNC_0 (char*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*,char const*,...) ;
 char* FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

void
FUNC_4(void)
{
 size_t VAR_3;
 const char *VAR_4, *VAR_5, *VAR_6;

 FUNC_2(VAR_0, "");

 VAR_4 = FUNC_0("LANG");
 if (VAR_4 == ((void*)0)) {
  VAR_4 = "";
 }
 FUNC_1("LANG=%s\n", VAR_4);


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_5 = FUNC_2(VAR_2[VAR_3].id, ((void*)0));
  VAR_6 = FUNC_0(VAR_2[VAR_3].name);
  if (VAR_6 != ((void*)0) && !FUNC_3(VAR_6, VAR_5)
    && FUNC_3(VAR_4, VAR_5)) {
   FUNC_1("%s=%s\n", VAR_2[VAR_3].name, VAR_5);
  } else {
   FUNC_1("%s=\"%s\"\n", VAR_2[VAR_3].name, VAR_5);
  }
 }

 VAR_5 = FUNC_0("LC_ALL");
 if (VAR_5 == ((void*)0)) {
  VAR_5 = "";
 }
 FUNC_1("LC_ALL=%s\n", VAR_5);
}
