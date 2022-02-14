
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const int *VAR_1, int VAR_2,
      const int *VAR_3, int VAR_4,
      int *VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;

 while (VAR_6 < VAR_2 && VAR_7 < VAR_4) {
  if (VAR_1[VAR_6] == VAR_3[VAR_7]) {
   if (FUNC_0(VAR_8 >= VAR_0))
    return VAR_8;
   VAR_5[VAR_8] = VAR_1[VAR_6];
   ++VAR_8;
   ++VAR_6;
   ++VAR_7;
  } else if (VAR_1[VAR_6] < VAR_3[VAR_7]) {
   ++VAR_6;
  } else {
   ++VAR_7;
  }
 }
 return VAR_8;
}
