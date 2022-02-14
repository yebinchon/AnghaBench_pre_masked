
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {scalar_t__ a; } ;


 int FUNC_0 (int ,char*,scalar_t__,scalar_t__,...) ;
 int FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_2 (struct lev_generic *VAR_10) {
  if (!VAR_1) {
    VAR_1 = VAR_10->a;
  }
  if (VAR_3 > VAR_10->a) {
    FUNC_0 (VAR_8, "time goes back from %ld to %ld in log file\n", VAR_3, VAR_10->a);
  }
  VAR_2 = VAR_3 = VAR_10->a;
  if (VAR_5) {
    VAR_7 = VAR_3;
  }
  if (VAR_10->a >= VAR_6 && !VAR_4) {
    VAR_0 = FUNC_1 ();
    VAR_4 = 1;
    if (VAR_9) {
      FUNC_0 (VAR_8, "reached timestamp %ld above cutoff %ld at binlog position %d, entering scan mode 1\n",
        VAR_10->a, VAR_6, VAR_0);
    }
  }
}
