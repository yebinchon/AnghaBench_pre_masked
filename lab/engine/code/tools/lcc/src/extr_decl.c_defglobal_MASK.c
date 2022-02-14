
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int (* global ) (TYPE_2__*) ;int (* export ) (TYPE_2__*) ;} ;
struct TYPE_7__ {int seg; } ;
struct TYPE_8__ {scalar_t__ sclass; int defined; TYPE_1__ u; } ;
typedef TYPE_2__* Symbol ;


 TYPE_6__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;

void FUNC_3(Symbol VAR_2, int VAR_3) {
 VAR_2->u.seg = VAR_3;
 FUNC_2(VAR_2->u.seg);
 if (VAR_2->sclass != VAR_1)
  (*VAR_0->export)(VAR_2);
 (*VAR_0->global)(VAR_2);
 VAR_2->defined = 1;
}
