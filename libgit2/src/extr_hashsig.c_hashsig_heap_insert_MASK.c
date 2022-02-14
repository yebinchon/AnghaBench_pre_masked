
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int hashsig_t ;
struct TYPE_5__ {int size; int asize; scalar_t__ (* cmp ) (int *,int *,int *) ;int * values; } ;
typedef TYPE_1__ hashsig_heap ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_3(hashsig_heap *VAR_0, hashsig_t VAR_1)
{

 if (VAR_0->size < VAR_0->asize) {
  VAR_0->values[VAR_0->size++] = VAR_1;
  FUNC_1(VAR_0, VAR_0->size - 1);
 }


 else if (VAR_0->cmp(&VAR_1, &VAR_0->values[0], ((void*)0)) > 0) {
  VAR_0->size--;
  VAR_0->values[0] = VAR_0->values[VAR_0->size];
  FUNC_0(VAR_0, 0);
 }

}
