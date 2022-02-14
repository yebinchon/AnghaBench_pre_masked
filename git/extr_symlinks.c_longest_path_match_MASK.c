
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0, int VAR_1,
         const char *VAR_2, int VAR_3,
         int *VAR_4)
{
 int VAR_5, VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;

 VAR_5 = VAR_1 < VAR_3 ? VAR_1 : VAR_3;
 while (VAR_8 < VAR_5 && VAR_0[VAR_8] == VAR_2[VAR_8]) {
  if (VAR_0[VAR_8] == '/') {
   VAR_7 = VAR_6;
   VAR_6 = VAR_8;
  }
  VAR_8++;
 }




 if (VAR_8 >= VAR_5 && ((VAR_1 > VAR_3 && VAR_0[VAR_3] == '/') ||
        (VAR_1 < VAR_3 && VAR_2[VAR_1] == '/') ||
        (VAR_1 == VAR_3))) {
  VAR_7 = VAR_6;
  VAR_6 = VAR_8;
 }
 *VAR_4 = VAR_7;
 return VAR_6;
}
