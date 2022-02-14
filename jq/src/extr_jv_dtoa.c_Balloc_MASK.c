
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dtoa_context {TYPE_1__** freelist; } ;
typedef int ULong ;
struct TYPE_3__ {int k; int maxwds; scalar_t__ wds; scalar_t__ sign; struct TYPE_3__* next; } ;
typedef TYPE_1__ Bigint ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static Bigint *
 FUNC_1(struct dtoa_context* VAR_1, int VAR_2)
{
 int VAR_3;
 Bigint *VAR_4;



 if (VAR_2 <= VAR_0 && (VAR_4 = VAR_1->freelist[VAR_2]))
  VAR_1->freelist[VAR_2] = VAR_4->next;
 else {
  VAR_3 = 1 << VAR_2;
  VAR_4 = (Bigint *)FUNC_0(sizeof(Bigint) + (VAR_3-1)*sizeof(ULong));
  VAR_4->k = VAR_2;
  VAR_4->maxwds = VAR_3;
  }
 VAR_4->sign = VAR_4->wds = 0;
 return VAR_4;
 }
