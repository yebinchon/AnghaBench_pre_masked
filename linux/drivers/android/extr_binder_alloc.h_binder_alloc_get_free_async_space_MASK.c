
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_alloc {size_t free_async_space; int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline size_t
FUNC_2(struct binder_alloc *VAR_0)
{
 size_t VAR_1;

 FUNC_0(&VAR_0->mutex);
 VAR_1 = VAR_0->free_async_space;
 FUNC_1(&VAR_0->mutex);
 return VAR_1;
}
