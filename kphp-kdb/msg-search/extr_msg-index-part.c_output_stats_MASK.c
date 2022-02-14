
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UserIndex ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

void FUNC_2 (void) {
  FUNC_0 (VAR_14, "%d messages read, %d analyzed belonging to %d users\n",
    VAR_13, VAR_12, VAR_21);
  FUNC_0 (VAR_14, "date adjusted %d times\n", VAR_4);
  FUNC_0 (VAR_14, "username data bytes: %d used out of %ld (%d%%)\n",
    VAR_22, (long)sizeof(UserIndex), FUNC_1 (VAR_22, sizeof(UserIndex)));
  FUNC_0 (VAR_14, "messages with unknown correspondents: %d out of %d (%d%%)\n",
    VAR_18, VAR_18+VAR_19,
    FUNC_1 (VAR_18, VAR_18+VAR_19));
  FUNC_0 (VAR_14, "imported username hashes: %d out of %d (%d%%)\n",
    VAR_20, VAR_16, FUNC_1 (VAR_20, VAR_16));
  FUNC_0 (VAR_14, "messages buffer memory bytes: total %d, used %ld (%d%%)\n",
    VAR_0, (long)(VAR_5 - VAR_1), FUNC_1 (VAR_5 - VAR_1, VAR_0));
  FUNC_0 (VAR_14, "pairs:\ttotal %d, maximal usage %d of %d (%d%%) for user %d\n",
    VAR_16, VAR_8, VAR_3, FUNC_1 (VAR_8, VAR_3), VAR_9);
  FUNC_0 (VAR_14, "hashes:\ttotal %d, maximal usage %d of %d (%d%%) for user %d\n",
    VAR_17, VAR_10, VAR_3, FUNC_1 (VAR_10, VAR_3), VAR_11);
  FUNC_0 (VAR_14, "data:\ttotal %d, maximal usage %d of %d (%d%%) for user %d\n",
    VAR_15, VAR_6, VAR_2, FUNC_1 (VAR_6, VAR_2), VAR_7);
}
