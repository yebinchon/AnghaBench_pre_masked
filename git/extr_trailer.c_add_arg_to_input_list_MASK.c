
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trailer_item {int list; } ;
struct TYPE_2__ {int where; } ;
struct arg_item {TYPE_1__ conf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 struct trailer_item* FUNC_3 (struct arg_item*) ;

__attribute__((used)) static void FUNC_4(struct trailer_item *VAR_0,
      struct arg_item *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1->conf.where);
 struct trailer_item *VAR_3 = FUNC_3(VAR_1);
 if (VAR_2)
  FUNC_1(&VAR_3->list, &VAR_0->list);
 else
  FUNC_2(&VAR_3->list, &VAR_0->list);
}
