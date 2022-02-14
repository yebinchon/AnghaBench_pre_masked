
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(int VAR_0, int VAR_1)
{
 static const int VAR_2[] = {31, 28, 31, 30, 31, 30, 31, 31,
     30, 31, 30, 31};
 int VAR_3;

 VAR_3 = VAR_2[VAR_0];

 if (VAR_0 == 1) {




  if (VAR_1 < 1900)
   VAR_1 += 1900;
  if (VAR_1 % 4 == 0) {





   if (VAR_1 % 100 != 0)
    VAR_3++;
   else if (VAR_1 % 400 == 0)
    VAR_3++;
  }
 }
 return (VAR_3);
}
