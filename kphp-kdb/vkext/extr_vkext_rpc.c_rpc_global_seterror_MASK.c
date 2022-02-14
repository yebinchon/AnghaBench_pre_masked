
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char const*,scalar_t__) ;

__attribute__((used)) static void FUNC_6 (const char *VAR_3, int VAR_4) {
  if (VAR_3) {

    if (VAR_2) {
      FUNC_5 (VAR_2, FUNC_4 (VAR_2) + 1);
    }
    VAR_2 = FUNC_3 (VAR_3);
    FUNC_0 (FUNC_4 (VAR_3) + 1);
    VAR_1 = VAR_4;
    if (VAR_3 && VAR_0 >= 1) {
      FUNC_2 ("Error %s (error_code %d)\n", VAR_3, VAR_4);
      if (VAR_0 >= 2) {
        FUNC_1 ();
      }
    }
  }
}
