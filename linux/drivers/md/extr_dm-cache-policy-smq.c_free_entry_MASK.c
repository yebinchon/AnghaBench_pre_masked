
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry_alloc {int free; int es; int nr_allocated; } ;
struct entry {int allocated; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,struct entry*) ;

__attribute__((used)) static void FUNC_2(struct entry_alloc *VAR_0, struct entry *VAR_1)
{
 FUNC_0(!VAR_0->nr_allocated);
 FUNC_0(!VAR_1->allocated);

 VAR_0->nr_allocated--;
 VAR_1->allocated = 0;
 FUNC_1(VAR_0->es, &VAR_0->free, VAR_1);
}
