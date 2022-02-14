
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (void*,int*,int,int*) ;

__attribute__((used)) static uint64_t
FUNC_2 (void *VAR_0, int VAR_1)
{
  int VAR_2;
  uint64_t VAR_3 = 0;
  void *VAR_4 = 0;

  if (!VAR_0)
    return 0;


  if ((VAR_4 = FUNC_1 (VAR_0, &VAR_1, sizeof (int), &VAR_2)) != ((void*)0)) {
    VAR_3 = (*(uint64_t *) VAR_4);
    FUNC_0 (VAR_4);
    return VAR_3;
  }

  return 0;
}
