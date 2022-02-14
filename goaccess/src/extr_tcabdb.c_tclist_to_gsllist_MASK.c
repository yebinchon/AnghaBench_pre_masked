
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCLIST ;
typedef int GSLList ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int,int*) ;

GSLList *
FUNC_5 (TCLIST * VAR_0)
{
  GSLList *VAR_1 = ((void*)0);
  int VAR_2, VAR_3;
  int *VAR_4;

  for (VAR_2 = 0; VAR_2 < FUNC_3 (VAR_0); ++VAR_2) {
    VAR_4 = (int *) FUNC_4 (VAR_0, VAR_2, &VAR_3);
    if (VAR_1 == ((void*)0))
      VAR_1 = FUNC_1 (FUNC_0 (*VAR_4));
    else
      VAR_1 = FUNC_2 (VAR_1, FUNC_0 (*VAR_4));
  }

  return VAR_1;
}
