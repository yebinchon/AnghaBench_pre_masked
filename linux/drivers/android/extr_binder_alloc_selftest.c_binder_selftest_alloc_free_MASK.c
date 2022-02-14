
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_buffer {int dummy; } ;
struct binder_alloc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct binder_alloc*,struct binder_buffer**,size_t*,int*) ;
 int FUNC_1 (struct binder_alloc*,struct binder_buffer**,size_t*,int*,size_t) ;
 int FUNC_2 (struct binder_alloc*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct binder_alloc *VAR_2,
           size_t *VAR_3, int *VAR_4, size_t VAR_5)
{
 struct binder_buffer *VAR_6[VAR_0];

 FUNC_0(VAR_2, VAR_6, VAR_3, VAR_4);
 FUNC_1(VAR_2, VAR_6, VAR_3, VAR_4, VAR_5);


 FUNC_0(VAR_2, VAR_6, VAR_3, VAR_4);
 if (FUNC_3(&VAR_1))
  FUNC_4("lru list should be empty but is not\n");

 FUNC_1(VAR_2, VAR_6, VAR_3, VAR_4, VAR_5);
 FUNC_2(VAR_2);
}
