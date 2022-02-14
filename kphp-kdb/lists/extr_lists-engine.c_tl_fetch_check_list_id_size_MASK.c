
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int,int) ;

int FUNC_2 (void) {
  int VAR_2 = FUNC_0 ();
  if (VAR_2 != VAR_1) {
    FUNC_1 (VAR_0, "Wrong number of ints in list_id: should be %d, present %d", VAR_1, VAR_2);
    return -1;
  }
  return 0;
}
