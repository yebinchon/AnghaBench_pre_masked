
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rating ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void FUNC_1 (rating *VAR_4, int VAR_5, int VAR_6) {
  if (VAR_2) {
    rating VAR_7 = ((rating)(VAR_6 - VAR_3)) / VAR_1;
    *VAR_4 += FUNC_0 (VAR_7) * VAR_5;
  } else {
    *VAR_4 += VAR_5 - 128;
    if (*VAR_4 < -VAR_0) {
      *VAR_4 = -VAR_0;
    }
    if (*VAR_4 > VAR_0) {
      *VAR_4 = VAR_0;
    }
  }
}
