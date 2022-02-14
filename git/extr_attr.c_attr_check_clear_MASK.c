
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_check {int stack; scalar_t__ all_attrs_nr; int all_attrs; scalar_t__ nr; scalar_t__ alloc; int items; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct attr_check *VAR_0)
{
 FUNC_0(VAR_0->items);
 VAR_0->alloc = 0;
 VAR_0->nr = 0;

 FUNC_0(VAR_0->all_attrs);
 VAR_0->all_attrs_nr = 0;

 FUNC_1(&VAR_0->stack);
}
