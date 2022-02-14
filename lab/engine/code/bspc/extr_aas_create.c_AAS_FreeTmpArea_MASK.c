
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* settings; TYPE_2__* l_next; TYPE_1__* l_prev; } ;
typedef TYPE_3__ tmp_area_t ;
struct TYPE_10__ {int numareas; TYPE_2__* areas; } ;
struct TYPE_8__ {TYPE_1__* l_prev; } ;
struct TYPE_7__ {TYPE_2__* l_next; } ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_4__ VAR_0 ;

void FUNC_1(tmp_area_t *VAR_1)
{
 if (VAR_1->l_next) VAR_1->l_next->l_prev = VAR_1->l_prev;
 if (VAR_1->l_prev) VAR_1->l_prev->l_next = VAR_1->l_next;
 else VAR_0.areas = VAR_1->l_next;
 if (VAR_1->settings) FUNC_0(VAR_1->settings);
 FUNC_0(VAR_1);
 VAR_0.numareas--;
}
