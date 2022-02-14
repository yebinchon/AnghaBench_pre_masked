
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sigaction {int sa_mask; int sa_handler; } ;
struct TYPE_6__ {scalar_t__ cron; scalar_t__ save_index; scalar_t__ sigusr1; scalar_t__ sighup; } ;
typedef TYPE_1__ server_functions_t ;
typedef int sa ;
struct TYPE_7__ {scalar_t__ sfd; int settings_addr; } ;
typedef TYPE_2__ engine_t ;
typedef int conn_type_t ;
struct TYPE_8__ {scalar_t__ cron; scalar_t__ save_index; scalar_t__ sigusr1; scalar_t__ sighup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,int *,void*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ VAR_13 ;
 int FUNC_10 (struct sigaction*,int ,int) ;
 char* VAR_14 ;
 int VAR_15 ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (char*,int ,int ,int ) ;
 int FUNC_13 () ;
 TYPE_3__ VAR_16 ;
 int FUNC_14 (int ,struct sigaction*,int *) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 char* VAR_21 ;

void FUNC_17 (engine_t *VAR_22, server_functions_t *VAR_23, conn_type_t *VAR_24, void *VAR_25) {
  if (VAR_23 != ((void*)0)) {
    if (VAR_23->sighup) {
      VAR_16.sighup = VAR_23->sighup;
    }
    if (VAR_23->sigusr1) {
      VAR_16.sigusr1 = VAR_23->sigusr1;
    }
    if (VAR_23->save_index) {
      VAR_16.save_index = VAR_23->save_index;
    }
    if (VAR_23->cron) {
      VAR_16.cron = VAR_23->cron;
    }
  }

  FUNC_5 ();
  FUNC_8 ();
  if (VAR_20) {
    FUNC_7 (0);
  }

  if (VAR_11) {
    FUNC_13 ();
    FUNC_11 ();
  }

  if (!VAR_22->sfd) {
    VAR_22->sfd = FUNC_12 (VAR_14, VAR_22->settings_addr, VAR_7, 0);
  }

  if (VAR_22->sfd < 0) {
    FUNC_9 ("cannot open server socket at port %d: %m\n", VAR_14);
    FUNC_4 (1);
  }

  if (FUNC_3 (VAR_21) < 0) {
    FUNC_9 ("fatal: cannot change user to %s\n", VAR_21 ? VAR_21 : "(none)");
    FUNC_4 (1);
  }

  if (VAR_10 && !VAR_8) {
    FUNC_2 (FUNC_1 (VAR_0) == VAR_13);
  }

  FUNC_6 (VAR_22->sfd, VAR_24, VAR_25);
  if (VAR_20) {
    FUNC_0 (VAR_14, 0);
  }

  if (VAR_8 && VAR_9 >= 0) {
    VAR_12 = VAR_15;
  }

  struct sigaction VAR_26;
  FUNC_10 (&VAR_26, 0, sizeof (VAR_26));
  VAR_26.sa_handler = VAR_18;
  FUNC_16 (&VAR_26.sa_mask);
  FUNC_15 (&VAR_26.sa_mask, VAR_5);
  FUNC_14 (VAR_2, &VAR_26, ((void*)0));

  VAR_26.sa_handler = VAR_19;
  FUNC_16 (&VAR_26.sa_mask);
  FUNC_15 (&VAR_26.sa_mask, VAR_2);
  FUNC_14 (VAR_5, &VAR_26, ((void*)0));

  VAR_26.sa_handler = VAR_6;
  FUNC_14 (VAR_3, &VAR_26, ((void*)0));
  FUNC_14 (VAR_4, &VAR_26, ((void*)0));

  if (VAR_11) {
    VAR_26.sa_handler = VAR_17;
    FUNC_16 (&VAR_26.sa_mask);
    FUNC_14 (VAR_1, &VAR_26, ((void*)0));
  }
}
