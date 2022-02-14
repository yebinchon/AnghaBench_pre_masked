
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (char const*) ;

int FUNC_3(const char *VAR_0, const char *VAR_1,
  int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_2(VAR_0), VAR_7 = FUNC_2(VAR_1);
 int *VAR_8, *VAR_9, *VAR_10;
 int VAR_11, VAR_12;

 FUNC_0(VAR_8, VAR_7 + 1);
 FUNC_0(VAR_9, VAR_7 + 1);
 FUNC_0(VAR_10, VAR_7 + 1);

 for (VAR_12 = 0; VAR_12 <= VAR_7; VAR_12++)
  VAR_9[VAR_12] = VAR_12 * VAR_4;
 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  int *VAR_13;

  VAR_10[0] = (VAR_11 + 1) * VAR_5;
  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {

   VAR_10[VAR_12 + 1] = VAR_9[VAR_12] + VAR_3 * (VAR_0[VAR_11] != VAR_1[VAR_12]);

   if (VAR_11 > 0 && VAR_12 > 0 && VAR_0[VAR_11 - 1] == VAR_1[VAR_12] &&
     VAR_0[VAR_11] == VAR_1[VAR_12 - 1] &&
     VAR_10[VAR_12 + 1] > VAR_8[VAR_12 - 1] + VAR_2)
    VAR_10[VAR_12 + 1] = VAR_8[VAR_12 - 1] + VAR_2;

   if (VAR_10[VAR_12 + 1] > VAR_9[VAR_12 + 1] + VAR_5)
    VAR_10[VAR_12 + 1] = VAR_9[VAR_12 + 1] + VAR_5;

   if (VAR_10[VAR_12 + 1] > VAR_10[VAR_12] + VAR_4)
    VAR_10[VAR_12 + 1] = VAR_10[VAR_12] + VAR_4;
  }

  VAR_13 = VAR_8;
  VAR_8 = VAR_9;
  VAR_9 = VAR_10;
  VAR_10 = VAR_13;
 }

 VAR_11 = VAR_9[VAR_7];
 FUNC_1(VAR_8);
 FUNC_1(VAR_9);
 FUNC_1(VAR_10);

 return VAR_11;
}
