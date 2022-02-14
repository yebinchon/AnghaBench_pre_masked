
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cache {struct task_struct* alloc_thread; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int VAR_0 ;
 struct task_struct* FUNC_2 (int ,struct cache*,char*) ;

int FUNC_3(struct cache *VAR_1)
{
 struct task_struct *VAR_2 = FUNC_2(VAR_0,
         VAR_1, "bcache_allocator");
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_1->alloc_thread = VAR_2;
 return 0;
}
