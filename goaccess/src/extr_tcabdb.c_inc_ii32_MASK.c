
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (void*,int*,int,int) ;

__attribute__((used)) static int
FUNC_2 (void *VAR_1, int VAR_2, int VAR_3)
{
  if (!VAR_1)
    return -1;


  if (FUNC_1 (VAR_1, &VAR_2, sizeof (int), VAR_3) == VAR_0)
    FUNC_0 (("Unable to tcadbput\n"));

  return 0;
}
