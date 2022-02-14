
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int flags; int ev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct connection*) ;
 scalar_t__ FUNC_1 (struct connection*) ;
 int FUNC_2 (int ) ;

int FUNC_3 (struct connection *VAR_2) {
  if (FUNC_0 (VAR_2) + FUNC_1 (VAR_2) > 0) {
    if (VAR_2->flags & VAR_0) {
      return 1;
    }
    VAR_2->flags |= VAR_0;
    if (!(VAR_2->flags & VAR_1)) {
      FUNC_2 (VAR_2->ev);
    }
    return 2;
  }
  return 0;
}
