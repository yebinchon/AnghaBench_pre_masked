
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {int y; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int*,int,int) ;

__attribute__((used)) static int
FUNC_4(int *VAR_3, int VAR_4, int *VAR_5, int *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 u_int VAR_17, VAR_18;

 if (VAR_7 & VAR_0)
  VAR_18 = VAR_1;
 else {
  VAR_16 = FUNC_1(VAR_4);
  VAR_18 = FUNC_0(256, VAR_16);
 }

 VAR_9 = 0;
 VAR_6[0] = FUNC_2(0, 0, 0);
 for (VAR_8 = 1; VAR_8 <= VAR_4; VAR_8++) {
  VAR_11 = VAR_3[VAR_8];
  if (VAR_11 == 0)
   continue;
  VAR_10 = -VAR_5[VAR_11];
  VAR_15 = 0;
  VAR_13 = VAR_6[0];
  VAR_17 = 0;
  do {
   if (VAR_10 <= VAR_2[VAR_13].y)
    continue;
   VAR_12 = FUNC_3(VAR_6, VAR_9, VAR_10);
   if (VAR_12 != VAR_15 + 1)
    VAR_13 = VAR_6[VAR_12 - 1];
   if (VAR_12 <= VAR_9) {
    if (VAR_2[VAR_6[VAR_12]].y <= VAR_10)
     continue;
    VAR_14 = VAR_6[VAR_12];
    VAR_6[VAR_12] = FUNC_2(VAR_8, VAR_10, VAR_13);
    VAR_13 = VAR_14;
    VAR_15 = VAR_12;
    VAR_17++;
   } else {
    VAR_6[VAR_12] = FUNC_2(VAR_8, VAR_10, VAR_13);
    VAR_9++;
    break;
   }
  } while ((VAR_10 = VAR_5[++VAR_11]) > 0 && VAR_17 < VAR_18);
 }
 return (VAR_9);
}
