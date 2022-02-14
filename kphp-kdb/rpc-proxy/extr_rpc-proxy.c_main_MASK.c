
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ port; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (char*,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (int,char**,int ) ;
 int FUNC_9 (char*,int ,int ,char,char*,...) ;
 scalar_t__ VAR_12 ;
 char* VAR_13 ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (char) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_13 (scalar_t__,int ,int ,scalar_t__) ;
 int FUNC_14 () ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_15 () ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_16 (int ) ;
 int FUNC_17 () ;
 scalar_t__ VAR_21 ;
 int FUNC_18 (int,char*) ;

int FUNC_19 (int VAR_22, char *VAR_23[]) {
  VAR_15 = 1;
  int VAR_24;

  FUNC_14 ();

  VAR_13 = VAR_23[0];

  FUNC_12 ('B');
  FUNC_9 ("first-cluster-only", VAR_14, 0, 'f', "only first cluster");
  FUNC_9 ("test-mode", VAR_10, 0, 'T', 0);
  FUNC_9 ("tcp-buffers", VAR_10, 0, 'N', "new tcp buffers");
  FUNC_9 ("crc32-mode", VAR_14, 0, 'C', "crc32 mode: bit 0 disables crc32 check, bit 1 disables crc32 send (sends 0)");
  FUNC_9 ("heap-size", VAR_14, 0, 'H', "sets heap size. Supports K/M/G/T modifiers");
  FUNC_9 ("max-binlog-size", VAR_14, 0, 'S', "sets maximal binlog slice size. Supports K/M/G/T modifiers");
  FUNC_9 ("ping-interval", VAR_14, 0, 'y', "sets ping interval (only in tcp connections) (default %lf)", VAR_1);
  FUNC_9 ("binlog-enable", VAR_14, 0, 'B', "enables binlog mode. argument is binlog name");
  FUNC_9 ("drop-probability", VAR_14, 0, 'Q', "sets probability of dropping transmitted packet");
  FUNC_9 (0, VAR_14, 0, 'n', "sets niceness");

  FUNC_8 (VAR_22, VAR_23, VAR_8);
  if (VAR_22 != VAR_11 + 1) {
    FUNC_17();
    return 2;
  }

  VAR_0.port = VAR_12;
  FUNC_5 ();
  FUNC_6 (FUNC_4 (), VAR_12);

  if (FUNC_10 (VAR_9 + 16) < 0 && !VAR_20) {
    FUNC_3 (VAR_19, "fatal: cannot raise open file limit to %d\n", VAR_9+16);
    FUNC_2 (1);
  }

  VAR_6 = VAR_23[VAR_11];

  VAR_24 = FUNC_1 (0);

  if (VAR_24 < 0) {
    FUNC_3 (VAR_19, "config check failed!\n");
    return -VAR_24;
  }

  FUNC_18 (1, "config loaded!\n");

  FUNC_0 (VAR_3);

  if (VAR_12 < VAR_2) {
    VAR_17 = FUNC_13 (VAR_12, VAR_16, VAR_4, VAR_7);
    if (VAR_17 < 0) {
      FUNC_7 ("cannot open server socket at port %d: %m\n", VAR_12);
      FUNC_2 (1);
    }
    VAR_21 = FUNC_13 (VAR_12, VAR_16, VAR_4, VAR_7 + 1);
    if (VAR_21 < 0) {
      FUNC_7 ("cannot open udp server socket at port %d: %m\n", VAR_12);
      FUNC_2 (1);
    }
  }

  if (VAR_5) {
    FUNC_11 (VAR_5);
  }
  VAR_18 = FUNC_16 (0);

  FUNC_15 ();

  return 0;
}
