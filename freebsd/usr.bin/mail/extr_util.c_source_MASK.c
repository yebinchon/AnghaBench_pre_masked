
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_loading; int s_cond; int * s_file; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (char*) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_4 (char*,char*) ;

int
FUNC_5(char **VAR_8)
{
 FILE *VAR_9;
 char *VAR_10;

 if ((VAR_10 = FUNC_2(*VAR_8)) == ((void*)0))
  return (1);
 if ((VAR_9 = FUNC_1(VAR_10, "r")) == ((void*)0)) {
  FUNC_4("%s", VAR_10);
  return (1);
 }
 if (VAR_6 >= VAR_1 - 1) {
  FUNC_3("Too much \"sourcing\" going on.\n");
  (void)FUNC_0(VAR_9);
  return (1);
 }
 VAR_7[VAR_6].s_file = VAR_3;
 VAR_7[VAR_6].s_cond = VAR_2;
 VAR_7[VAR_6].s_loading = VAR_4;
 VAR_6++;
 VAR_4 = 0;
 VAR_2 = VAR_0;
 VAR_3 = VAR_9;
 VAR_5++;
 return (0);
}
