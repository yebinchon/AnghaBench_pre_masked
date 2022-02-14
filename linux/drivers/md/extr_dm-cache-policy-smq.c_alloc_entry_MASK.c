
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry_alloc {int nr_allocated; int free; int es; } ;
struct entry {int dummy; } ;


 int FUNC_0 (struct entry*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct entry* FUNC_2 (int ,int *) ;

__attribute__((used)) static struct entry *FUNC_3(struct entry_alloc *VAR_0)
{
 struct entry *VAR_1;

 if (FUNC_1(&VAR_0->free))
  return ((void*)0);

 VAR_1 = FUNC_2(VAR_0->es, &VAR_0->free);
 FUNC_0(VAR_1);
 VAR_0->nr_allocated++;

 return VAR_1;
}
