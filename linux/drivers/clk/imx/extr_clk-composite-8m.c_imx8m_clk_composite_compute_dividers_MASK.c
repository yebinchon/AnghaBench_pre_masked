
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_4,
      unsigned long VAR_5,
      int *VAR_6, int *VAR_7)
{
 int VAR_8, VAR_9;
 int VAR_10 = VAR_1;
 int VAR_11 = -VAR_0;

 *VAR_6 = 1;
 *VAR_7 = 1;

 for (VAR_8 = 1; VAR_8 <= VAR_3; VAR_8++) {
  for (VAR_9 = 1; VAR_9 <= VAR_2; VAR_9++) {
   int VAR_12 = ((VAR_5 / VAR_8) / VAR_9) - VAR_4;

   if (FUNC_0(VAR_12) < FUNC_0(VAR_10)) {
    *VAR_6 = VAR_8;
    *VAR_7 = VAR_9;
    VAR_10 = VAR_12;
    VAR_11 = 0;
   }
  }
 }
 return VAR_11;
}
