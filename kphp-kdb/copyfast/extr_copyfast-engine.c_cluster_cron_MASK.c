
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 struct connection* FUNC_1 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct connection*) ;
 int FUNC_3 (struct connection*) ;
 int FUNC_4 () ;

void FUNC_5 (void) {
  if (((VAR_5 & VAR_1) && VAR_3 + VAR_0 < VAR_8) ||
    (!(VAR_5 & VAR_1) && VAR_3 + VAR_2 < VAR_8)) {
    struct connection *VAR_9 = FUNC_1 (VAR_7);
    if (VAR_9) {
      VAR_3 = VAR_8;
      FUNC_2 (VAR_9);
    }
  }
  if ((VAR_5 & VAR_1) && VAR_4 + VAR_6 < VAR_8) {
    struct connection *VAR_10 = FUNC_1 (VAR_7);
    if (VAR_10) {
      VAR_4 = VAR_8;
      FUNC_3 (VAR_10);
    }
  }
  FUNC_4 ();
  FUNC_0 (0);
}
