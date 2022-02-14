
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct stm32_cryp {TYPE_1__* in_sg; int in_walk; } ;
struct TYPE_5__ {scalar_t__ length; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static u32 *FUNC_5(struct stm32_cryp *VAR_1, u32 *VAR_2,
          unsigned int VAR_3)
{
 FUNC_0(&VAR_1->in_walk, VAR_3);

 if (FUNC_4(VAR_1->in_sg->length == VAR_0)) {
  VAR_1->in_sg = FUNC_2(VAR_1->in_sg);
  if (VAR_1->in_sg) {
   FUNC_1(&VAR_1->in_walk, VAR_1->in_sg);
   return (FUNC_3(VAR_1->in_sg) + VAR_0);
  }
 }

 return (u32 *)((u8 *)VAR_2 + VAR_3);
}
