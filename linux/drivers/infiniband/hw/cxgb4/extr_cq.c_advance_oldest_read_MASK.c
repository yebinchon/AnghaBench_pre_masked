
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {size_t size; size_t pidx; TYPE_1__* oldest_read; TYPE_1__* sw_sq; } ;
struct t4_wq {TYPE_2__ sq; } ;
struct TYPE_3__ {scalar_t__ opcode; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct t4_wq *VAR_1)
{

 u32 VAR_2 = VAR_1->sq.oldest_read - VAR_1->sq.sw_sq + 1;

 if (VAR_2 == VAR_1->sq.size)
  VAR_2 = 0;
 while (VAR_2 != VAR_1->sq.pidx) {
  VAR_1->sq.oldest_read = &VAR_1->sq.sw_sq[VAR_2];

  if (VAR_1->sq.oldest_read->opcode == VAR_0)
   return;
  if (++VAR_2 == VAR_1->sq.size)
   VAR_2 = 0;
 }
 VAR_1->sq.oldest_read = ((void*)0);
}
