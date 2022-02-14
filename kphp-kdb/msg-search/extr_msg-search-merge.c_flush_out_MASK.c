
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int * VAR_0 ;
 char** VAR_1 ;
 int FUNC_1 (int ,char*,char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static void FUNC_3 (void) {
  int VAR_6, VAR_7 = VAR_5 - VAR_3;
  if (VAR_7 > 0) {
    VAR_6 = FUNC_2 (VAR_0[2], VAR_3, VAR_7);
    if (VAR_6 < VAR_7) {
      FUNC_1 (VAR_4, "error writing to %s: %d bytes written out of %d: %m\n", VAR_1[2], VAR_6, VAR_7);
    }
    FUNC_0 (VAR_6 == VAR_7);
  }
  VAR_5 = VAR_3 = VAR_2;
}
