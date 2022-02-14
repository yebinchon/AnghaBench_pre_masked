
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,char const* const,int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int) ;

void FUNC_5 (int VAR_6, int VAR_7, const char *const VAR_8, int VAR_9) {
  int VAR_10;
  if (VAR_7 <= 0) {
    VAR_7 = 256 << 20;
  }
  VAR_1 = FUNC_4 (VAR_7);
  VAR_4 = VAR_7;
  VAR_2 = 0;
  VAR_3 = 0;
  VAR_5 = 0;

  if (FUNC_0 (&VAR_0, VAR_6, VAR_8, VAR_9) < 0) {
    FUNC_3 ("Random number generator initialization failed.\n");
    FUNC_2 (1);
  }

  for (VAR_10 = 1; VAR_10 <= 64; VAR_10++) {
    FUNC_1 (&VAR_0);
  }
}
