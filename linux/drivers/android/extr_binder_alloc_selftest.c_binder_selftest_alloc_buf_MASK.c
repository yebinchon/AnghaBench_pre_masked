
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_buffer {int dummy; } ;
struct binder_alloc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct binder_buffer*) ;
 struct binder_buffer* FUNC_1 (struct binder_alloc*,size_t,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct binder_alloc*,struct binder_buffer*,size_t) ;
 int FUNC_3 (size_t*,int*) ;

__attribute__((used)) static void FUNC_4(struct binder_alloc *VAR_2,
          struct binder_buffer *VAR_3[],
          size_t *VAR_4, int *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_3[VAR_6] = FUNC_1(VAR_2, VAR_4[VAR_6], 0, 0, 0);
  if (FUNC_0(VAR_3[VAR_6]) ||
      !FUNC_2(VAR_2, VAR_3[VAR_6],
        VAR_4[VAR_6])) {
   FUNC_3(VAR_4, VAR_5);
   VAR_1++;
  }
 }
}
