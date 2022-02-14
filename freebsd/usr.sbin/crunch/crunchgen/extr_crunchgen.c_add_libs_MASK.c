
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,int ,char*) ;

void
FUNC_3(int VAR_4, char **VAR_5)
{
 int VAR_6;

 for(VAR_6 = 1; VAR_6 < VAR_4; VAR_6++) {
  FUNC_0(&VAR_1, VAR_5[VAR_6]);
  if ( FUNC_1(&VAR_2, VAR_5[VAR_6]) )
   FUNC_2("%s:%d: "
    "library `%s' specified as dynamic earlier",
    VAR_0, VAR_3, VAR_5[VAR_6]);
 }
}
