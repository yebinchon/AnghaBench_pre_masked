
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; scalar_t__ i2; scalar_t__ chg2; scalar_t__ i1; scalar_t__ chg1; } ;
typedef TYPE_1__ xdmerge_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(xdmerge_t *VAR_0)
{
 xdmerge_t *VAR_1 = VAR_0->next;
 VAR_0->chg1 = VAR_1->i1 + VAR_1->chg1 - VAR_0->i1;
 VAR_0->chg2 = VAR_1->i2 + VAR_1->chg2 - VAR_0->i2;
 VAR_0->next = VAR_1->next;
 FUNC_0(VAR_1);
}
