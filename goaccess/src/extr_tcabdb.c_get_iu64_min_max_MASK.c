
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (void*,void*,int,int*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (void*,int*) ;

__attribute__((used)) static void
FUNC_4 (void *VAR_0, uint64_t * VAR_1, uint64_t * VAR_2)
{
  int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;
  uint64_t VAR_6 = 0;
  void *VAR_7, *VAR_8;

  FUNC_2 (VAR_0);
  while ((VAR_7 = FUNC_3 (VAR_0, &VAR_4)) != ((void*)0)) {
    if ((VAR_8 = FUNC_1 (VAR_0, VAR_7, VAR_4, &VAR_5)) == ((void*)0)) {
      FUNC_0 (VAR_7);
      continue;
    }

    VAR_6 = (*(uint64_t *) VAR_8);
    if (VAR_3++ == 0)
      *VAR_1 = VAR_6;
    if (VAR_6 > *VAR_2)
      *VAR_2 = VAR_6;
    if (VAR_6 < *VAR_1)
      *VAR_1 = VAR_6;
    FUNC_0 (VAR_7);
    FUNC_0 (VAR_8);
  }
}
