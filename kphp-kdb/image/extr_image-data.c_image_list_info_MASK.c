
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ severity; } ;
typedef TYPE_1__ ExceptionInfo ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_4 (void) {
  if (VAR_2 > 0) {
    ExceptionInfo VAR_3;
    FUNC_2 (&VAR_3);
    FUNC_3 (VAR_1, &VAR_3);
    if (VAR_3.severity != VAR_0) {
      FUNC_0 (&VAR_3);
    }
    FUNC_1 (&VAR_3);
  }
}
