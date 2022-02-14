
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct contains_stack {int nr; TYPE_1__* contains_stack; int alloc; } ;
struct commit {int parents; } ;
struct TYPE_2__ {int parents; struct commit* commit; } ;


 int FUNC_0 (TYPE_1__*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct commit *VAR_0, struct contains_stack *VAR_1)
{
 FUNC_0(VAR_1->contains_stack, VAR_1->nr + 1, VAR_1->alloc);
 VAR_1->contains_stack[VAR_1->nr].commit = VAR_0;
 VAR_1->contains_stack[VAR_1->nr++].parents = VAR_0->parents;
}
