
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsort_store {scalar_t__ (* cmp ) (void*,void*,int ) ;int payload; } ;
typedef int ssize_t ;


 int FUNC_0 (void**,int,int) ;
 scalar_t__ FUNC_1 (void*,void*,int ) ;
 scalar_t__ FUNC_2 (void*,void*,int ) ;
 scalar_t__ FUNC_3 (void*,void*,int ) ;
 scalar_t__ FUNC_4 (void*,void*,int ) ;

__attribute__((used)) static ssize_t FUNC_5(
 void **VAR_0, ssize_t VAR_1, ssize_t VAR_2, struct tsort_store *VAR_3)
{
 ssize_t VAR_4 = VAR_1 + 2;

 if (VAR_2 - VAR_1 == 1)
  return 1;

 if (VAR_1 >= VAR_2 - 2) {
  if (VAR_3->cmp(VAR_0[VAR_2 - 2], VAR_0[VAR_2 - 1], VAR_3->payload) > 0) {
   void *VAR_5 = VAR_0[VAR_2 - 1];
   VAR_0[VAR_2 - 1] = VAR_0[VAR_2 - 2];
   VAR_0[VAR_2 - 2] = VAR_5;
  }

  return 2;
 }

 if (VAR_3->cmp(VAR_0[VAR_1], VAR_0[VAR_1 + 1], VAR_3->payload) <= 0) {
  while (VAR_4 < VAR_2 - 1 &&
    VAR_3->cmp(VAR_0[VAR_4 - 1], VAR_0[VAR_4], VAR_3->payload) <= 0)
   VAR_4++;

  return VAR_4 - VAR_1;
 } else {
  while (VAR_4 < VAR_2 - 1 &&
    VAR_3->cmp(VAR_0[VAR_4 - 1], VAR_0[VAR_4], VAR_3->payload) > 0)
   VAR_4++;


  FUNC_0(VAR_0, VAR_1, VAR_4 - 1);
  return VAR_4 - VAR_1;
 }
}
