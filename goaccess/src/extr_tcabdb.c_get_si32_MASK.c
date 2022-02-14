
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;
 int FUNC_1 (char const*) ;
 void* FUNC_2 (void*,char const*,int ,int*) ;

__attribute__((used)) static int
FUNC_3 (void *VAR_0, const char *VAR_1)
{
  int VAR_2 = 0, VAR_3;
  void *VAR_4;

  if (!VAR_0)
    return -1;


  if ((VAR_4 = FUNC_2 (VAR_0, VAR_1, FUNC_1 (VAR_1), &VAR_3)) != ((void*)0)) {
    VAR_2 = (*(int *) VAR_4);
    FUNC_0 (VAR_4);
    return VAR_2;
  }

  return -1;
}
