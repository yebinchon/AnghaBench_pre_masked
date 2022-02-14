
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * at_act; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char**,char*,char*,char*,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char const*,char const*,char*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2, const char *VAR_3)
{
 char *VAR_4, *VAR_5;
 int VAR_6;

 VAR_4 = ((void*)0);
 for (VAR_6 = 0; VAR_1[VAR_6].at_act != ((void*)0); VAR_6++) {
  VAR_5 = VAR_4;
  if (FUNC_0(&VAR_4, "%s%s%s",
      VAR_5 == ((void*)0) ? "" : VAR_5,
      VAR_5 == ((void*)0) ? "" : ", ",
      VAR_1[VAR_6].at_act) == -1)
   FUNC_1(VAR_0, "malloc");
  FUNC_2(VAR_5);
 }
 FUNC_4("bad --%s argument '%s' must be one of (%s).",
     VAR_2, VAR_3, VAR_4);
 FUNC_3();
}
