
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_check {int nr; int items; int alloc; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct attr_check* FUNC_2 () ;

struct attr_check *FUNC_3(const struct attr_check *VAR_0)
{
 struct attr_check *VAR_1;

 if (!VAR_0)
  return ((void*)0);

 VAR_1 = FUNC_2();

 VAR_1->nr = VAR_0->nr;
 VAR_1->alloc = VAR_0->alloc;
 FUNC_0(VAR_1->items, VAR_1->nr);
 FUNC_1(VAR_1->items, VAR_0->items, VAR_1->nr);

 return VAR_1;
}
