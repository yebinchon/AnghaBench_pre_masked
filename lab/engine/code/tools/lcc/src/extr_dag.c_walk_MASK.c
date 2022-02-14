
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int Tree ;
struct TYPE_8__ {int wants_dag; } ;
struct TYPE_5__ {int * forest; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
struct TYPE_6__ {int * link; } ;
typedef int * Node ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 () ;
 int * FUNC_4 (int *) ;

void FUNC_5(Tree VAR_4, int VAR_5, int VAR_6) {
 FUNC_2(VAR_4, VAR_5, VAR_6);
 if (VAR_3) {
  Node VAR_7 = VAR_3->link;
  VAR_3->link = ((void*)0);
  if (!VAR_1->wants_dag)
   VAR_7 = FUNC_4(VAR_7);
  FUNC_0(VAR_0)->u.forest = VAR_7;
  VAR_3 = ((void*)0);
 }
 FUNC_3();
 FUNC_1(VAR_2);
}
