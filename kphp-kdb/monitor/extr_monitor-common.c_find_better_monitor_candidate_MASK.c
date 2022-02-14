
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct proc_data {TYPE_1__* uinfo; } ;
struct TYPE_4__ {scalar_t__ start_utime; } ;
struct TYPE_3__ {int flags; scalar_t__ start_utime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (struct proc_data*) ;
 int VAR_4 ;
 struct proc_data* FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3 (int VAR_5) {
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
    struct proc_data *VAR_7 = FUNC_1 (VAR_6);
    FUNC_0 (VAR_7);
    int VAR_8 = VAR_7->uinfo[0].flags;
    if (VAR_8 & VAR_2) {
      continue;
    }
    if ((VAR_8 & VAR_1) < VAR_5) {
      continue;
    }
    if ((VAR_8 & VAR_1) == VAR_5) {
      if (VAR_7->uinfo[0].start_utime > VAR_3.start_utime) {
 continue;
      }
      if (VAR_7->uinfo[0].start_utime == VAR_3.start_utime && VAR_6 >= VAR_4) {
 continue;
      }
    }
    FUNC_2 (VAR_6);
    if (!(VAR_7->uinfo[0].flags & VAR_2)) {
      return VAR_6;
    }
  }
  return -1;
}
