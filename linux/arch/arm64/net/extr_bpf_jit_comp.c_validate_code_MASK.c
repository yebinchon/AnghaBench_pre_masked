
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct jit_ctx {int idx; int * image; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct jit_ctx *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->idx; VAR_2++) {
  u32 VAR_3 = FUNC_0(VAR_1->image[VAR_2]);

  if (VAR_3 == VAR_0)
   return -1;
 }

 return 0;
}
