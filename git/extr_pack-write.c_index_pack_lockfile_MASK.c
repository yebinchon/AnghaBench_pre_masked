
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hexsz; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int const FUNC_1 (int,char*,int const) ;
 scalar_t__ FUNC_2 (char*,char*,char const**) ;
 TYPE_1__* VAR_1 ;
 char* FUNC_3 (char*,int ,char const*) ;

char *FUNC_4(int VAR_2)
{
 char VAR_3[VAR_0 + 6];
 const int VAR_4 = VAR_1->hexsz + 6;
 if (FUNC_1(VAR_2, VAR_3, VAR_4) == VAR_4 && VAR_3[VAR_4-1] == '\n') {
  const char *VAR_5;
  VAR_3[VAR_4-1] = 0;
  if (FUNC_2(VAR_3, "keep\t", &VAR_5))
   return FUNC_3("%s/pack/pack-%s.keep",
           FUNC_0(), VAR_5);
 }
 return ((void*)0);
}
