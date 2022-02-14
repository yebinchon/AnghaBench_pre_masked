
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct expr {int dummy; } ;
struct TYPE_5__ {int type; } ;




 int FUNC_0 (int,struct expr**,struct expr**) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct expr **VAR_2, struct expr **VAR_3)
{
 if (!VAR_0 || !VAR_1)
  return;
 switch (VAR_0->type) {
 case 128:
 case 129:
  FUNC_0(VAR_0->type, VAR_2, VAR_3);
 default:
  ;
 }
 if (VAR_0->type != VAR_1->type) switch (VAR_1->type) {
 case 128:
 case 129:
  FUNC_0(VAR_1->type, VAR_2, VAR_3);
 default:
  ;
 }
 VAR_0 = FUNC_1(VAR_0);
 VAR_1 = FUNC_1(VAR_1);
}
