
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_buffer {int dummy; } ;
struct binder_alloc {int mutex; } ;


 struct binder_buffer* FUNC_0 (struct binder_alloc*,uintptr_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct binder_buffer *FUNC_3(struct binder_alloc *VAR_0,
         uintptr_t VAR_1)
{
 struct binder_buffer *VAR_2;

 FUNC_1(&VAR_0->mutex);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->mutex);
 return VAR_2;
}
