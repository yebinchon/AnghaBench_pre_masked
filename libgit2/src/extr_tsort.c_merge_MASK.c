
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsort_store {void** storage; scalar_t__ (* cmp ) (void*,void*,int ) ;int payload; } ;
struct tsort_run {int length; int start; } ;
typedef int ssize_t ;


 int FUNC_0 (int const,int const) ;
 int FUNC_1 (void**,void**,int const) ;
 scalar_t__ FUNC_2 (struct tsort_store*,int ) ;
 scalar_t__ FUNC_3 (void*,void*,int ) ;
 scalar_t__ FUNC_4 (void*,void*,int ) ;

__attribute__((used)) static void FUNC_5(void **VAR_0, const struct tsort_run *VAR_1, ssize_t VAR_2, struct tsort_store *VAR_3)
{
 const ssize_t VAR_4 = VAR_1[VAR_2 - 2].length;
 const ssize_t VAR_5 = VAR_1[VAR_2 - 1].length;
 const ssize_t VAR_6 = VAR_1[VAR_2 - 2].start;

 void **VAR_7;
 ssize_t VAR_8, VAR_9, VAR_10;

 if (FUNC_2(VAR_3, FUNC_0(VAR_4, VAR_5)) < 0)
  return;

 VAR_7 = VAR_3->storage;


 if (VAR_4 < VAR_5) {
  FUNC_1(VAR_7, &VAR_0[VAR_6], VAR_4 * sizeof(void *));
  VAR_8 = 0;
  VAR_9 = VAR_6 + VAR_4;

  for (VAR_10 = VAR_6; VAR_10 < VAR_6 + VAR_4 + VAR_5; VAR_10++) {
   if ((VAR_8 < VAR_4) && (VAR_9 < VAR_6 + VAR_4 + VAR_5)) {
    if (VAR_3->cmp(VAR_7[VAR_8], VAR_0[VAR_9], VAR_3->payload) <= 0)
     VAR_0[VAR_10] = VAR_7[VAR_8++];
    else
     VAR_0[VAR_10] = VAR_0[VAR_9++];
   } else if (VAR_8 < VAR_4) {
    VAR_0[VAR_10] = VAR_7[VAR_8++];
   } else
    VAR_0[VAR_10] = VAR_0[VAR_9++];
  }
 } else {
  FUNC_1(VAR_7, &VAR_0[VAR_6 + VAR_4], VAR_5 * sizeof(void *));
  VAR_8 = VAR_5 - 1;
  VAR_9 = VAR_6 + VAR_4 - 1;

  for (VAR_10 = VAR_6 + VAR_4 + VAR_5 - 1; VAR_10 >= VAR_6; VAR_10--) {
   if ((VAR_8 >= 0) && (VAR_9 >= VAR_6)) {
    if (VAR_3->cmp(VAR_0[VAR_9], VAR_7[VAR_8], VAR_3->payload) > 0)
     VAR_0[VAR_10] = VAR_0[VAR_9--];
    else
     VAR_0[VAR_10] = VAR_7[VAR_8--];
   } else if (VAR_8 >= 0)
    VAR_0[VAR_10] = VAR_7[VAR_8--];
   else
    VAR_0[VAR_10] = VAR_0[VAR_9--];
  }
 }
}
