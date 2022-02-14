
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process_id {int dummy; } ;
typedef enum tl_type { ____Placeholder_tl_type } tl_type ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int,struct process_id*,long long) ;
 int FUNC_3 () ;

void FUNC_4 (enum tl_type VAR_1, struct process_id *VAR_2, long long VAR_3) {
  if (VAR_2) {
    if (FUNC_2 (VAR_1, VAR_2, VAR_3) >= 0) {
      if (!FUNC_0 ()) {
        FUNC_1 ("Unknown error", VAR_0);
      }
      FUNC_3 ();
    }
  }
}
