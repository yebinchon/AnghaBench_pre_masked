
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hashsig_t ;
struct TYPE_3__ {scalar_t__ (* cmp ) (int *,int *,int *) ;int * values; } ;
typedef TYPE_1__ hashsig_heap ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_2(hashsig_heap *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);

 while (VAR_1 > 0 && VAR_0->cmp(&VAR_0->values[VAR_2], &VAR_0->values[VAR_1], ((void*)0)) > 0) {
  hashsig_t VAR_3 = VAR_0->values[VAR_1];
  VAR_0->values[VAR_1] = VAR_0->values[VAR_2];
  VAR_0->values[VAR_2] = VAR_3;

  VAR_1 = VAR_2;
  VAR_2 = FUNC_0(VAR_1);
 }
}
