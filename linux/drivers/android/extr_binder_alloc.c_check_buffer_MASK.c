
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct binder_buffer {int transaction; int allow_user_free; int free; } ;
struct binder_alloc {int dummy; } ;
typedef size_t binder_size_t ;


 scalar_t__ FUNC_0 (size_t,int) ;
 size_t FUNC_1 (struct binder_alloc*,struct binder_buffer*) ;

__attribute__((used)) static inline bool FUNC_2(struct binder_alloc *VAR_0,
    struct binder_buffer *VAR_1,
    binder_size_t VAR_2, size_t VAR_3)
{
 size_t VAR_4 = FUNC_1(VAR_0, VAR_1);

 return VAR_4 >= VAR_3 &&
  VAR_2 <= VAR_4 - VAR_3 &&
  FUNC_0(VAR_2, sizeof(u32)) &&
  !VAR_1->free &&
  (!VAR_1->allow_user_free || !VAR_1->transaction);
}
