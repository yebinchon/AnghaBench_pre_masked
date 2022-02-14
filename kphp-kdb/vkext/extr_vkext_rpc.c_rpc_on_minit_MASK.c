
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 long long VAR_2 ;
 int VAR_3 ;
 int FUNC_7 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_8 (scalar_t__) ;

void FUNC_9 (int VAR_6) {
  FUNC_0 (VAR_4);
  FUNC_3 (VAR_4);
  VAR_2 = FUNC_7 () * (1ll << 32) + FUNC_7 () + 1000000;;
  VAR_3 = (1 << 30) * 1ll + FUNC_7 ();
  if (FUNC_2 ("tl.conffile")) {
    FUNC_4 (FUNC_8 (FUNC_2 ("tl.conffile")) >= 0);
    if (VAR_1) {
      VAR_1 = FUNC_6 (VAR_1);
    }
  }
  if (FUNC_2 ("vkext.ping_timeout")) {
    VAR_5 = FUNC_5 (FUNC_2 ("vkext.ping_timeout"));
    if (VAR_5 <= 0) {
      VAR_5 = VAR_0;
    }
  }
  FUNC_1 (VAR_4);
}
