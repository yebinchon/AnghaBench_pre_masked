
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(int *VAR_0,
    int VAR_1,
    int VAR_2,
    int *VAR_3,
    int VAR_4,
    int *VAR_5,
    int *VAR_6,
    int VAR_7)
{
 int VAR_8;

 for (; VAR_1 < VAR_2; VAR_1++) {
  FUNC_1(*VAR_6 >= VAR_7);
  VAR_5[*VAR_6] = VAR_1;
  *VAR_6 = *VAR_6 + 1;

  while (VAR_0[VAR_1] != 0xFFFFFFFF) {
   VAR_1 += 2;


   for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
    if (VAR_3[VAR_8] ==
     VAR_0[VAR_1] ||
     !VAR_3[VAR_8])
     break;
   }

   FUNC_0(VAR_8 >= VAR_4);

   if (!VAR_3[VAR_8])
    VAR_3[VAR_8] = VAR_0[VAR_1];

   VAR_1++;
  }
 }
}
