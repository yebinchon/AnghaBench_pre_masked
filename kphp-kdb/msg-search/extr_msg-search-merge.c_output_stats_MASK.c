
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,...) ;
 scalar_t__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;

void FUNC_3 (void) {
  FUNC_0 (VAR_12, "\nmessages purged from binlog: %d\n", VAR_10);
  FUNC_0 (VAR_12, "messages imported from binlog: %d\n", VAR_15);
  FUNC_0 (VAR_12, "pairs imported from binlog: %d\n", VAR_17);
  FUNC_0 (VAR_12, "pairs dropped from old data: %d\n", VAR_16);
  FUNC_0 (VAR_12, "total pairs output: %d\n", VAR_13);
  FUNC_0 (VAR_12, "old users dropped: %d\n", VAR_19);
  FUNC_0 (VAR_12, "new users added: %d\n", VAR_18);
  FUNC_0 (VAR_12, "maximal pairs used: %d out of %d (%d%%) for user %d\n", VAR_6, VAR_0, FUNC_1(VAR_6, VAR_0), VAR_7);
  FUNC_0 (VAR_12, "total hashes output: %d\n", VAR_14);
  FUNC_0 (VAR_12, "maximal hashes used: %d out of %d (%d%%) for user %d\n", VAR_8, VAR_1, FUNC_1(VAR_8, VAR_1), VAR_9);
  FUNC_0 (VAR_12, "output users: %d out of %d (%d%%)\n", VAR_3, VAR_2, FUNC_1(VAR_3, VAR_2));
  FUNC_0 (VAR_12, "binlog size: old %d, new %lld\n", (long long) VAR_4[1], (long long) VAR_5);
  FUNC_0 (VAR_12, "huge index size: old %d, new %lld\n", (long long) VAR_4[0], (long long) VAR_20);
  FUNC_0 (VAR_12, "used time: %d seconds\n\n", FUNC_2(0) - VAR_11);
}
