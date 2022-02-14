
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,char*,int) ;

int FUNC_4 (void) {
  VAR_1 = 0;
  VAR_0 = VAR_2 = 0;
  int VAR_4 = FUNC_0 (0, VAR_3);
  if (VAR_4 < 0) {
    FUNC_3 (1, "find_last_synchronization_point: copyexec_aux_replay_binlog returns %d.\n", VAR_4);
  }
  if (VAR_0 > VAR_2) {
    FUNC_2 ("Couldn't decrypt transaction at %lld pos, last synchronization point pos is %lld.\n", VAR_0, VAR_2);
    FUNC_1 (1);
  }
  return VAR_1;
}
