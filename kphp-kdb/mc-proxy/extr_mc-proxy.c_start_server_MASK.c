
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int clusters_num; TYPE_1__* Clusters; } ;
struct TYPE_3__ {scalar_t__ server_socket; scalar_t__ listening_connection; int mc_proxy_inbound; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
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
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (int) ;
 double FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (scalar_t__,int *,int *) ;
 int FUNC_12 () ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 double VAR_18 ;
 double VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_13 () ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_14 (int ,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 char* VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_15 (int ,char*) ;

void FUNC_16 (void) {

  int VAR_29;
  int VAR_30;
  double VAR_31 = 0;

  FUNC_10();
  FUNC_12();

  VAR_30 = 0;
  VAR_18 *= 0.95 + 0.1 * FUNC_5 ();

  if (VAR_14) {
    FUNC_13 ();
  }

  if (FUNC_1 (VAR_27) < 0) {
    FUNC_8 (VAR_26, "fatal: cannot change user to %s\n", VAR_27 ? VAR_27 : "(none)");
    FUNC_7 (1);
  }

  for (VAR_29 = 0; VAR_29 < VAR_1->clusters_num; VAR_29++) {
    FUNC_0 (FUNC_11 (VAR_1->Clusters[VAR_29].server_socket, &VAR_13, &VAR_1->Clusters[VAR_29].mc_proxy_inbound) >= 0);
    VAR_1->Clusters[VAR_29].listening_connection = VAR_0 + VAR_1->Clusters[VAR_29].server_socket;
  }

  FUNC_9 ();

  FUNC_2 ();

  FUNC_14 (VAR_6, VAR_22);
  FUNC_14 (VAR_8, VAR_23);
  FUNC_14 (VAR_9, VAR_24);
  FUNC_14 (VAR_10, VAR_25);
  FUNC_14 (VAR_7, VAR_11);
  if (VAR_14) {
    FUNC_14 (VAR_5, VAR_21);
  }

  for (VAR_29 = 0; ; VAR_29++) {
    if (VAR_28 > 0 && !(VAR_29 & 255)) {
      FUNC_8 (VAR_26, "epoll_work(): %d out of %d connections, network buffers: %d used, %d out of %d allocated\n",
         VAR_12, VAR_15, VAR_4, VAR_2, VAR_3);
    }
    FUNC_6 (57);
    if (VAR_19 > VAR_31) {
      FUNC_2 ();
      VAR_31 = VAR_19 + 0.05 + 0.02 * FUNC_5 ();
    }
    if (VAR_17 != VAR_30) {
      VAR_30 = VAR_17;
      FUNC_3 ();
    }
    if (VAR_16) {




      FUNC_4 (1);

    }
    if (VAR_20 && !--VAR_20) break;
  }

}
