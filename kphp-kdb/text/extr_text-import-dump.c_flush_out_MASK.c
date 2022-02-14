
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int,int) ;
 int VAR_8 ;

void FUNC_5 (void) {
  int VAR_9, VAR_10 = VAR_6 - VAR_8;
  FUNC_0 (VAR_10 >= 0);
  if (!VAR_10) {
    VAR_6 = VAR_8 = VAR_0;
    return;
  }
  VAR_4 = FUNC_1 (VAR_8, VAR_10, VAR_4);
  VAR_9 = FUNC_4 (VAR_2, VAR_8, VAR_10);
  if (VAR_9 > 0) {
    VAR_7 += VAR_9;
  }
  if (VAR_9 < VAR_10) {
    FUNC_3 (VAR_1, "error writing to %s: %d bytes written out of %d: %m\n", VAR_3, VAR_9, VAR_10);
    FUNC_2(3);
  }
  if (VAR_5 > 0) {
    FUNC_3 (VAR_1, "%d bytes written to %s\n", VAR_9, VAR_3);
  }
  VAR_6 = VAR_8 = VAR_0;
}
