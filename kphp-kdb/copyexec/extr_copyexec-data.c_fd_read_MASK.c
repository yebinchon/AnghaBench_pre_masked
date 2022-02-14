
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,long long,long long) ;
 long long FUNC_2 (int,void*,long long) ;

__attribute__((used)) static int FUNC_3 (int VAR_2, void *VAR_3, long long VAR_4) {
  long long VAR_5;
  do {
    VAR_5 = FUNC_2 (VAR_2, VAR_3, VAR_4);
  } while (VAR_5 < 0 && VAR_1 == VAR_0);
  if (VAR_5 < 0) {
    FUNC_1 ("copyexec_aux_replay_binlog: read returns %lld instead of %lld. %m\n", VAR_5, VAR_4);
    FUNC_0 ();
  }
  if (VAR_5 != VAR_4) {
    FUNC_1 ("copyexec_aux_replay_binlog: read returns %lld instead of %lld. %m\n", VAR_5, VAR_4);
    return -1;
  }
  return 0;
}
