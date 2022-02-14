
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char const*) ;
 void* FUNC_3 (void*,char const*,int ,int*) ;
 int FUNC_4 (void*,char const*,int ,int*,int) ;

__attribute__((used)) static int
FUNC_5 (void *VAR_0, const char *VAR_1, int VAR_2)
{
  int VAR_3 = VAR_2, VAR_4;
  void *VAR_5;

  if (!VAR_0)
    return -1;

  if ((VAR_5 = FUNC_3 (VAR_0, VAR_1, FUNC_2 (VAR_1), &VAR_4)) != ((void*)0)) {
    VAR_3 = (*(int *) VAR_5) + VAR_2;
    FUNC_1 (VAR_5);
  }


  if (!FUNC_4 (VAR_0, VAR_1, FUNC_2 (VAR_1), &VAR_3, sizeof (int)))
    FUNC_0 (("Unable to tcadbput\n"));

  return 0;
}
