
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwd_entry {int flags; int target; struct fwd_entry* fwd_next; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fwd_entry*,int) ;

void FUNC_2 (struct fwd_entry *VAR_1) {
  while (VAR_1) {
    struct fwd_entry *VAR_2 = VAR_1->fwd_next;
    if (VAR_1->flags & VAR_0) {
      FUNC_0 (VAR_1->target);
    }
    FUNC_1 (VAR_1, sizeof (struct fwd_entry));
    VAR_1 = VAR_2;
  }
}
