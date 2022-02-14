
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refspec {int nr; int raw_nr; scalar_t__ fetch; scalar_t__ raw_alloc; scalar_t__* raw; scalar_t__ alloc; scalar_t__* items; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*) ;

void FUNC_3(struct refspec *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr; VAR_1++)
  FUNC_2(&VAR_0->items[VAR_1]);

 FUNC_0(VAR_0->items);
 VAR_0->alloc = 0;
 VAR_0->nr = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->raw_nr; VAR_1++)
  FUNC_1((char *)VAR_0->raw[VAR_1]);
 FUNC_0(VAR_0->raw);
 VAR_0->raw_alloc = 0;
 VAR_0->raw_nr = 0;

 VAR_0->fetch = 0;
}
