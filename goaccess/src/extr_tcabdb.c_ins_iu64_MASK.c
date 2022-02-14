
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*,int*,int,int *,int) ;

__attribute__((used)) static int
FUNC_2 (void *VAR_0, int VAR_1, uint64_t VAR_2)
{
  if (!VAR_0)
    return -1;


  if (!FUNC_1 (VAR_0, &VAR_1, sizeof (int), &VAR_2, sizeof (uint64_t)))
    FUNC_0 (("Unable to tcadbput\n"));

  return 0;
}
