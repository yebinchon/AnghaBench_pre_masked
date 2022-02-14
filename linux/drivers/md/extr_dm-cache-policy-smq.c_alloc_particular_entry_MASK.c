
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry_alloc {unsigned int begin; int nr_allocated; int free; int es; } ;
struct entry {int allocated; } ;


 int FUNC_0 (int ) ;
 struct entry* FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct entry*) ;
 int FUNC_3 (int ,int *,struct entry*) ;

__attribute__((used)) static struct entry *FUNC_4(struct entry_alloc *VAR_0, unsigned VAR_1)
{
 struct entry *VAR_2 = FUNC_1(VAR_0->es, VAR_0->begin + VAR_1);

 FUNC_0(VAR_2->allocated);

 FUNC_3(VAR_0->es, &VAR_0->free, VAR_2);
 FUNC_2(VAR_2);
 VAR_0->nr_allocated++;

 return VAR_2;
}
