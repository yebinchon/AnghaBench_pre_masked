
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,char*,int,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int,int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5 (void) {
  int VAR_6, VAR_7 = VAR_4 - VAR_5;
  FUNC_0 (VAR_7 >= 0);
  if (!VAR_7) {
    VAR_4 = VAR_5 = VAR_0;
    return;
  }
  VAR_6 = FUNC_4 (VAR_1, VAR_5, VAR_7);
  if (VAR_6 > 0) {
    VAR_3 += VAR_6;
  }
  if (VAR_6 < VAR_7) {
    FUNC_2 ("error writing to %s: %d bytes written out of %d: %m\n", VAR_2, VAR_6, VAR_7);
    FUNC_1 (3);
  }

  FUNC_3 (1, "%d bytes written to %s\n", VAR_6, VAR_2);

  VAR_4 = VAR_5 = VAR_0;
}
