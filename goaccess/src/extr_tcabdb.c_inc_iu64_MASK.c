
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (void*,int*,int,int*) ;
 int FUNC_3 (void*,int*,int,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_4 (void *VAR_0, int VAR_1, uint64_t VAR_2)
{
  int VAR_3;
  uint64_t VAR_4 = VAR_2;
  void *VAR_5;

  if (!VAR_0)
    return -1;

  if ((VAR_5 = FUNC_2 (VAR_0, &VAR_1, sizeof (int), &VAR_3)) != ((void*)0)) {
    VAR_4 = (*(uint64_t *) VAR_5) + VAR_2;
    FUNC_1 (VAR_5);
  }


  if (!FUNC_3 (VAR_0, &VAR_1, sizeof (int), &VAR_4, sizeof (uint64_t)))
    FUNC_0 (("Unable to tcadbput\n"));

  return 0;
}
