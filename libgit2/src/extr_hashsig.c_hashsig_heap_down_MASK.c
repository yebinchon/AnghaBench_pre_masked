
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hashsig_t ;
struct TYPE_3__ {int size; scalar_t__ (* cmp ) (int *,int *,int *) ;int * values; } ;
typedef TYPE_1__ hashsig_heap ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_5(hashsig_heap *VAR_0, int VAR_1)
{
 hashsig_t VAR_2, VAR_3, VAR_4;



 while (VAR_1 < VAR_0->size / 2) {
  int VAR_5 = FUNC_0(VAR_1), VAR_6 = FUNC_1(VAR_1), VAR_7;

  VAR_2 = VAR_0->values[VAR_1];
  VAR_3 = VAR_0->values[VAR_5];
  VAR_4 = VAR_0->values[VAR_6];

  if (VAR_0->cmp(&VAR_2, &VAR_3, ((void*)0)) < 0 && VAR_0->cmp(&VAR_2, &VAR_4, ((void*)0)) < 0)
   break;

  VAR_7 = (VAR_0->cmp(&VAR_3, &VAR_4, ((void*)0)) < 0) ? VAR_5 : VAR_6;

  VAR_0->values[VAR_1] = VAR_0->values[VAR_7];
  VAR_0->values[VAR_7] = VAR_2;

  VAR_1 = VAR_7;
 }
}
