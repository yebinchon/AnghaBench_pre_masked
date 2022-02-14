
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ target_fd; double start_time; int req_id; } ;
typedef TYPE_1__ php_worker ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 double VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,char*,int ) ;

void FUNC_2 (php_worker *VAR_7) {
  FUNC_1 (2, "free php script [req_id = %016llx]\n", VAR_7->req_id);
  if ((VAR_0 == VAR_4 || VAR_0 == VAR_3) && VAR_7->target_fd == VAR_6) {
    double VAR_8 = VAR_5 - VAR_7->start_time;
    VAR_2 += VAR_8;
    VAR_1++;
  }

  FUNC_0 (VAR_7);
}
