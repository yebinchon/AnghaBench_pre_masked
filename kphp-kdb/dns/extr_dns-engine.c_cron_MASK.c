
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int worker_stats_t ;
struct connection {int last_query_time; scalar_t__ status; int ev; int fd; int * type; } ;


 struct connection* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,int *,int) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 int FUNC_5 () ;
 int FUNC_6 (int,char*,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_7 (void) {
  static int VAR_10 = 0;
  int VAR_11 = 100, VAR_12 = VAR_10;
  int VAR_13 = VAR_6 - 120;
  while (VAR_11 > 0) {
    struct connection *VAR_14 = VAR_0 + VAR_10;
    if (VAR_14->type == &VAR_4 && VAR_14->last_query_time < VAR_13 && VAR_14->status == VAR_2) {
      FUNC_6 (3, "Closing idle TCP connection %d.\n", VAR_14->fd);
      VAR_14->status = VAR_3;
      FUNC_2 (VAR_14->ev);
    }
    if (++VAR_10 > VAR_5) {
      VAR_10 = 0;
    }
    if (VAR_10 == VAR_12) {
      break;
    }
    VAR_11--;
  }

  if (VAR_8 >= 0) {
    FUNC_5 ();
    if (!FUNC_4 (&VAR_7)) {
      FUNC_1 (VAR_1 + VAR_8, &VAR_9, sizeof (worker_stats_t));
      FUNC_3 (&VAR_7);
    }
  }
  FUNC_0 ();
}
