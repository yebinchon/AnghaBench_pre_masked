
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sbinptr ;
typedef int mstate ;
typedef scalar_t__ bindex_t ;
struct TYPE_3__ {struct TYPE_3__* bk; struct TYPE_3__* fd; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(mstate VAR_1) {

  bindex_t VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
    sbinptr VAR_3 = FUNC_0(VAR_1,VAR_2);
    VAR_3->fd = VAR_3->bk = VAR_3;
  }
}
