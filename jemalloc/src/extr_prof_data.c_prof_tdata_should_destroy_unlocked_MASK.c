
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bt2tctx; scalar_t__ attached; } ;
typedef TYPE_1__ prof_tdata_t ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static bool
FUNC_1(prof_tdata_t *VAR_0, bool VAR_1) {
 if (VAR_0->attached && !VAR_1) {
  return 0;
 }
 if (FUNC_0(&VAR_0->bt2tctx) != 0) {
  return 0;
 }
 return 1;
}
