
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;
 void* FUNC_1 (void*,void*,int,int*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (void*,int*) ;

__attribute__((used)) static void
FUNC_4 (void *VAR_0, int *VAR_1, int *VAR_2)
{
  int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
  void *VAR_7, *VAR_8;

  FUNC_2 (VAR_0);
  while ((VAR_7 = FUNC_3 (VAR_0, &VAR_5)) != ((void*)0)) {
    if ((VAR_8 = FUNC_1 (VAR_0, VAR_7, VAR_5, &VAR_6)) == ((void*)0)) {
      FUNC_0 (VAR_7);
      continue;
    }

    VAR_3 = (*(int *) VAR_8);
    if (VAR_4++ == 0)
      *VAR_1 = VAR_3;
    if (VAR_3 > *VAR_2)
      *VAR_2 = VAR_3;
    if (VAR_3 < *VAR_1)
      *VAR_1 = VAR_3;
    FUNC_0 (VAR_7);
    FUNC_0 (VAR_8);
  }
}
