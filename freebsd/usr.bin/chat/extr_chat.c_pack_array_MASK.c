
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void
FUNC_0(char **VAR_0, int VAR_1)
{
    int VAR_2, VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
 if (VAR_0[VAR_2] == ((void*)0)) {
     for (VAR_3 = VAR_2+1; VAR_3 < VAR_1; ++VAR_3)
  if (VAR_0[VAR_3] != ((void*)0))
      VAR_0[VAR_2++] = VAR_0[VAR_3];
     for (; VAR_2 < VAR_1; ++VAR_2)
  VAR_0[VAR_2] = ((void*)0);
     break;
 }
    }
}
