
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int* VAR_5 ;

int FUNC_1(int VAR_6)
{
 int VAR_7 = VAR_5[VAR_6];

 if (VAR_7 == VAR_3) {
  unsigned long VAR_8;
  int VAR_9;

  VAR_8 = FUNC_0(VAR_1) &
    FUNC_0(VAR_0) & 0xff;
  if (VAR_8 == 0) {
   VAR_7 = -1;
  } else {
   for (VAR_9=0; VAR_9<8; VAR_9++) {
    if (VAR_8 & (1<<VAR_9))
     break;
   }
   VAR_7 = VAR_4 + VAR_9;
  }
 }

 if (VAR_7 == VAR_2) {
  unsigned long VAR_10;
  int VAR_11;

  VAR_10 = FUNC_0(VAR_1 + 3 * sizeof(u32)) &
    FUNC_0(VAR_0 + 3 * sizeof(u32)) & 0xff;
  if (VAR_10 == 0) {
   VAR_7 = -1;
  } else {
   for (VAR_11=0; VAR_11<8; VAR_11++) {
    if (VAR_10 & (1<<VAR_11))
     break;
   }
   VAR_7 = VAR_4 + (3 * 8) + VAR_11;
  }
 }

 return VAR_7;
}
