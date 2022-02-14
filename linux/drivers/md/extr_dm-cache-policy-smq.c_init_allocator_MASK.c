
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry_space {int dummy; } ;
struct entry_alloc {unsigned int nr_allocated; unsigned int begin; struct entry_space* es; int free; } ;


 int FUNC_0 (struct entry_space*,unsigned int) ;
 int FUNC_1 (struct entry_space*,int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct entry_alloc *VAR_0, struct entry_space *VAR_1,
      unsigned VAR_2, unsigned VAR_3)
{
 unsigned VAR_4;

 VAR_0->es = VAR_1;
 VAR_0->nr_allocated = 0u;
 VAR_0->begin = VAR_2;

 FUNC_2(&VAR_0->free);
 for (VAR_4 = VAR_2; VAR_4 != VAR_3; VAR_4++)
  FUNC_1(VAR_0->es, &VAR_0->free, FUNC_0(VAR_0->es, VAR_4));
}
