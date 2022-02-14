
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCLIST ;


 int * FUNC_0 (void*,int*,int) ;

__attribute__((used)) static TCLIST *
FUNC_1 (void *VAR_0, int VAR_1)
{
  TCLIST *VAR_2 = ((void*)0);

  if (!VAR_0)
    return ((void*)0);


  if ((VAR_2 = FUNC_0 (VAR_0, &VAR_1, sizeof (int))) != ((void*)0))
    return VAR_2;

  return ((void*)0);
}
