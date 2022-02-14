
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int complete; scalar_t__* tid; } ;
typedef TYPE_1__ tftp_connection_t ;
struct TYPE_8__ {int prev; } ;


 size_t VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,TYPE_5__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 size_t VAR_3 ;

__attribute__((used)) static void FUNC_2 (tftp_connection_t *VAR_4) {
  if (VAR_4->complete) {
    return;
  }
  if (VAR_3 == VAR_0 && VAR_4->tid[VAR_3] == VAR_2) {
    return;
  }
  VAR_4->complete = 1;
  FUNC_1 (VAR_4);
  FUNC_0 (VAR_1.prev, VAR_4, &VAR_1);
}
