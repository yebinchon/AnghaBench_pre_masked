
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_local {scalar_t__ base_cache_used; struct base_data* base_cache; } ;
struct base_data {scalar_t__ data; struct base_data* child; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct base_data*) ;
 struct thread_local* FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct base_data *VAR_1)
{
 struct base_data *VAR_2;
 struct thread_local *VAR_3 = FUNC_1();
 for (VAR_2 = VAR_3->base_cache;
      VAR_3->base_cache_used > VAR_0 && VAR_2;
      VAR_2 = VAR_2->child) {
  if (VAR_2->data && VAR_2 != VAR_1)
   FUNC_0(VAR_2);
 }
}
