
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_buffer {int dummy; } ;
struct binder_alloc {int mutex; } ;


 struct binder_buffer* FUNC_0 (struct binder_alloc*,size_t,size_t,size_t,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct binder_buffer *FUNC_3(struct binder_alloc *VAR_0,
        size_t VAR_1,
        size_t VAR_2,
        size_t VAR_3,
        int VAR_4)
{
 struct binder_buffer *VAR_5;

 FUNC_1(&VAR_0->mutex);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2,
          VAR_3, VAR_4);
 FUNC_2(&VAR_0->mutex);
 return VAR_5;
}
