
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4() {
  if (FUNC_3(&VAR_1, VAR_2) != 0) {
    FUNC_2(VAR_3, "error: cannot create thread specific key");
    FUNC_0();
  }
  if (FUNC_3(&VAR_0, VAR_2) != 0) {
    FUNC_2(VAR_3, "error: cannot create thread specific key");
    FUNC_0();
  }
  FUNC_1(VAR_4);
}
