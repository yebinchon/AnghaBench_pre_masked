
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_stack {scalar_t__ alloc; scalar_t__ nr; int items; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct commit_stack *VAR_0)
{
 FUNC_0(VAR_0->items);
 VAR_0->nr = VAR_0->alloc = 0;
}
