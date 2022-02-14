
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int strdup_strings; } ;


 int FUNC_0 (char const*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char const*,char const*,int *,int *,char const**) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (char*) ;
 TYPE_1__* FUNC_5 (int,int) ;
 char* FUNC_6 (char const*) ;

int FUNC_7(const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 const char *VAR_4;
 if (!FUNC_2("transfer.hiderefs", VAR_1) ||
     (!FUNC_1(VAR_1, VAR_3, ((void*)0), ((void*)0), &VAR_4) &&
      !FUNC_2(VAR_4, "hiderefs"))) {
  char *VAR_5;
  int VAR_6;

  if (!VAR_2)
   return FUNC_0(VAR_1);
  VAR_5 = FUNC_6(VAR_2);
  VAR_6 = FUNC_4(VAR_5);
  while (VAR_6 && VAR_5[VAR_6 - 1] == '/')
   VAR_5[--VAR_6] = '\0';
  if (!VAR_0) {
   VAR_0 = FUNC_5(1, sizeof(*VAR_0));
   VAR_0->strdup_strings = 1;
  }
  FUNC_3(VAR_0, VAR_5);
 }
 return 0;
}
