
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int pending_queries; } ;
struct TYPE_3__ {int volume_id; } ;


 struct connection* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__** VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_6 () ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__,int *,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,...) ;
 int VAR_26 ;
 int FUNC_11 () ;
 int VAR_27 ;
 int FUNC_12 () ;
 int VAR_28 ;
 int FUNC_13 () ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_14 (int ,int ) ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_15 (int) ;
 int FUNC_16 (TYPE_1__*) ;
 int VAR_37 ;
 int FUNC_17 () ;
 int FUNC_18 (int,char*,scalar_t__,...) ;
 int VAR_38 ;
 scalar_t__ FUNC_19 () ;

void FUNC_20 (void) {
  int VAR_39;
  int VAR_40;
  int VAR_41 = 0;

  FUNC_7();
  FUNC_9();

  VAR_40 = 0;

  if (VAR_21) {
    FUNC_13 ();
    FUNC_12 ();
  }






  VAR_16 = -FUNC_11 ();
  if (!VAR_17) {
    for (VAR_39 = 0; VAR_39 < VAR_38; VAR_39++) {
      int VAR_42 = FUNC_16 (VAR_13[VAR_39]);
      if (VAR_42 < 0) {
        FUNC_10 ("[v%lld] storage_append_to_binlog returns error code %d.\n", VAR_13[VAR_39]->volume_id, VAR_42);
        FUNC_5 (1);
      }
    }
  }
  VAR_16 += FUNC_11 ();

  struct connection *VAR_43 = &VAR_0[0];
  VAR_43->pending_queries = 0x7fffffff;

  FUNC_8 (VAR_29, &VAR_20, &VAR_37);

  if (VAR_25 >= 0) {
    FUNC_8 (VAR_25, &VAR_19, &VAR_24);
  }

  FUNC_14 (VAR_5, VAR_31);
  FUNC_14 (VAR_10, VAR_35);
  FUNC_14 (VAR_11, VAR_36);
  FUNC_14 (VAR_7, VAR_12);
  FUNC_14 (VAR_6, VAR_12);
  FUNC_14 (VAR_8, VAR_33);
  FUNC_14 (VAR_9, VAR_34);
  if (VAR_21) {
    FUNC_14 (VAR_4, VAR_30);
  }

  int VAR_44 = 0;

  VAR_18 += FUNC_11 ();

  for (VAR_39 = 0; ; VAR_39++) {
    if (!(VAR_39 & 255)) {
      FUNC_18 (1, "epoll_work(): %d out of %d connections, network buffers: %d used, %d out of %d allocated\n",
        VAR_14, VAR_26, VAR_3, VAR_1, VAR_2);
    }
    FUNC_4 (57);

    if (VAR_22) {
      if (!VAR_28) {
        FUNC_10 ("Waiting write threads terminates.\n");
        int VAR_45 = 0;
        while (VAR_15 != ((void*)0)) {
          FUNC_15 (1);
          VAR_45 += FUNC_19 ();
        }
        FUNC_10 ("%d threads has been terminated.\n", VAR_45);
        FUNC_10 ("Start sync.\n");
        FUNC_17 ();
        FUNC_10 ("Sync has been completed.\n");
      }
      FUNC_5 (0);
    }

    if (VAR_23 != VAR_41) {
      VAR_41 = VAR_23;
      FUNC_10 ("reopen_logs (), force_reopen_logs counter is equal to %d.\n", VAR_41);
      FUNC_12 ();
    }

    if (VAR_32 > 0) {
      FUNC_18 (2, "after epoll_work(), sigpoll_cnt=%d\n", VAR_32);
      VAR_32 = 0;
    }


    FUNC_0 ();
    FUNC_19 ();
    FUNC_6 ();

    if (VAR_27 != VAR_40) {
      VAR_40 = VAR_27;
      FUNC_2();
    }
    if (VAR_44 && !--VAR_44) break;
  }

  FUNC_3 (VAR_29);
  FUNC_1 (VAR_29);

}
