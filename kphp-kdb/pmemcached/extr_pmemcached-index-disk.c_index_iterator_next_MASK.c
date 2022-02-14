
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* header; } ;
struct TYPE_3__ {scalar_t__ nrecords; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (size_t,int ) ;
 size_t VAR_3 ;
 TYPE_2__* VAR_4 ;

void FUNC_2 () {
  while (VAR_1 != VAR_3 && VAR_2 == VAR_4[VAR_1].header->nrecords) {
    FUNC_0 ();
  }
  if (VAR_1 != VAR_3 && VAR_2 < VAR_4[VAR_1].header->nrecords) {
    VAR_0 = FUNC_1 ( VAR_1, VAR_2++);
  } else {
    VAR_0 = 0;
  }
}
