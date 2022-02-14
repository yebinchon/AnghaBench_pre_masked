
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* cmp ) (int *,int *,int *) ;int size; int * values; } ;
typedef TYPE_1__ hashsig_heap ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(const hashsig_heap *VAR_1, const hashsig_heap *VAR_2)
{
 int VAR_3 = 0, VAR_4, VAR_5, VAR_6;

 FUNC_0(VAR_1->cmp == VAR_2->cmp);



 for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_1->size && VAR_5 < VAR_2->size; ) {
  VAR_6 = VAR_1->cmp(&VAR_1->values[VAR_4], &VAR_2->values[VAR_5], ((void*)0));

  if (VAR_6 < 0)
   ++VAR_4;
  else if (VAR_6 > 0)
   ++VAR_5;
  else {
   ++VAR_4; ++VAR_5; ++VAR_3;
  }
 }

 return VAR_0 * (VAR_3 * 2) / (VAR_1->size + VAR_2->size);
}
