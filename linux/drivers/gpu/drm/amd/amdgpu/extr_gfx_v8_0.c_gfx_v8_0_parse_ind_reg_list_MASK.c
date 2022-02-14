
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int *VAR_0,
    int VAR_1,
    int VAR_2,
    int *VAR_3,
    int *VAR_4,
    int VAR_5,
    int *VAR_6,
    int *VAR_7,
    int VAR_8)
{
 int VAR_9;
 bool VAR_10 = 1;

 for (; VAR_1 < VAR_2; VAR_1++) {

  if (VAR_10) {
   VAR_10 = 0;
   VAR_6[*VAR_7] = VAR_1;
   *VAR_7 = *VAR_7 + 1;
   FUNC_0(*VAR_7 >= VAR_8);
  }

  if (VAR_0[VAR_1] == 0xFFFFFFFF) {
   VAR_10 = 1;
   continue;
  }

  VAR_1 += 2;


  for (VAR_9 = 0;
   VAR_9 < *VAR_4;
   VAR_9++) {
   if (VAR_3[VAR_9] ==
    VAR_0[VAR_1])
    break;
  }

  if (VAR_9 >= *VAR_4) {
   VAR_3[*VAR_4] =
    VAR_0[VAR_1];
   VAR_9 = *VAR_4;
   *VAR_4 = *VAR_4 + 1;
   FUNC_0(*VAR_4 >= VAR_5);
  }

  VAR_0[VAR_1] = VAR_9;
 }
}
