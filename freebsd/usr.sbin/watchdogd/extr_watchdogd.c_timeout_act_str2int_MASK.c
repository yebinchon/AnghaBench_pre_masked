
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int at_value; int * at_act; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int *) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char**,char*) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_2, const char *VAR_3)
{
 int VAR_4;
 char *VAR_5, *VAR_6;
 char *VAR_7;
 int VAR_8 = 0;

 VAR_6 = VAR_5 = FUNC_3(VAR_3);
 if (!VAR_6)
  FUNC_0(VAR_0, "malloc");
 while ((VAR_7 = FUNC_4(&VAR_5, ",")) != ((void*)0)) {
  for (VAR_4 = 0; VAR_1[VAR_4].at_act != ((void*)0); VAR_4++) {
   if (!FUNC_2(VAR_7, VAR_1[VAR_4].at_act)) {
    VAR_8 |= VAR_1[VAR_4].at_value;
    break;
   }
  }
  if (VAR_1[VAR_4].at_act == ((void*)0))
   FUNC_5(VAR_2, VAR_7);
 }
 FUNC_1(VAR_6);
 return VAR_8;
}
