
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int * VAR_0 ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_1 ;

void FUNC_4 (int VAR_2) {
  static char VAR_3[1 << 20];
  FUNC_0 (VAR_2 < (1 << 20));

  int VAR_4 = FUNC_3 (VAR_0[0], VAR_3, VAR_2);
  if (VAR_4 != VAR_2) {
    FUNC_2 (VAR_1, "error reading header from index file: read %d bytes instead of %d at position ???: %m\n", VAR_4, VAR_2);
    FUNC_0 (VAR_4 == VAR_2);
  }

  FUNC_1 (VAR_3, VAR_2 - 1);
}
