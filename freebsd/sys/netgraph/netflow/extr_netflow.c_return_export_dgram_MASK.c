
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int priv_p ;
typedef int * item_p ;
typedef TYPE_2__* fib_export_p ;
struct TYPE_5__ {int * item; } ;
struct TYPE_6__ {int export_mtx; TYPE_1__ exp; } ;


 int FUNC_0 (int ,TYPE_2__*,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(priv_p VAR_0, fib_export_p VAR_1, item_p VAR_2, int VAR_3)
{






 FUNC_1(&VAR_1->export_mtx);
 if (VAR_1->exp.item == ((void*)0)) {
  VAR_1->exp.item = VAR_2;
  FUNC_2(&VAR_1->export_mtx);
 } else {
  FUNC_2(&VAR_1->export_mtx);
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 }
}
