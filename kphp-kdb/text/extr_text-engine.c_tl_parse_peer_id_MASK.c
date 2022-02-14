
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;

int FUNC_2 (void) {
  int VAR_1 = FUNC_0 ();
  if (!VAR_1) {
    FUNC_1 (VAR_0, "Peer id must be non-zero integer");
    return -1;
  }
  return VAR_1;
}
