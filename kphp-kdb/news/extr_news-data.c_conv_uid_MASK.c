
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_1 (int VAR_7) {
  FUNC_0 (VAR_3 || VAR_1 || VAR_2);
  if (VAR_3) {
    VAR_7 = (VAR_7 ^ VAR_6) - VAR_6;
  }
  if (VAR_7 <= 0 ) { return -1; }
  if (VAR_7 % VAR_5 != VAR_4) { return -1; }
  VAR_7 /= VAR_5;
  return VAR_7 < VAR_0 ? VAR_7 : -1;
}
