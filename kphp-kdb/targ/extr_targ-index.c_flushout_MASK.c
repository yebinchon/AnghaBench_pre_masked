
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int VAR_8 ;

void FUNC_3 (void) {
  int VAR_9, VAR_10;
  if (VAR_5 > VAR_6) {
    VAR_10 = VAR_5 - VAR_6;
    VAR_8 += VAR_10;
    VAR_2 += VAR_10;
  }
  if (VAR_4 < VAR_5) {
    VAR_10 = VAR_5 - VAR_4;
    VAR_9 = FUNC_2 (VAR_3, VAR_4, VAR_10);
    FUNC_0 (VAR_9 == VAR_10);
    FUNC_0 (VAR_4 <= VAR_7 && VAR_7 <= VAR_5);
    VAR_1 = FUNC_1 (VAR_7, VAR_5 - VAR_7, VAR_1);
  }
  VAR_4 = VAR_5 = VAR_6 = VAR_7 = VAR_0;
}
