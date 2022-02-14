
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name {struct name* n_flink; struct name* n_blink; int n_name; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

struct name *
FUNC_1(struct name *VAR_0)
{
 struct name *VAR_1, *VAR_2, *VAR_3;
 struct name *VAR_4;

 if (VAR_0 == ((void*)0))
  return (((void*)0));
 VAR_3 = VAR_0;
 VAR_1 = VAR_0;
 VAR_1 = VAR_1->n_flink;
 if (VAR_1 != ((void*)0))
  VAR_1->n_blink = ((void*)0);
 VAR_3->n_flink = ((void*)0);
 while (VAR_1 != ((void*)0)) {
  VAR_2 = VAR_3;
  while (FUNC_0(VAR_2->n_name, VAR_1->n_name) < 0) {
   if (VAR_2->n_flink == ((void*)0))
    break;
   VAR_2 = VAR_2->n_flink;
  }






  if (FUNC_0(VAR_2->n_name, VAR_1->n_name) < 0) {
   VAR_2->n_flink = VAR_1;
   VAR_1->n_blink = VAR_2;
   VAR_2 = VAR_1;
   VAR_1 = VAR_1->n_flink;
   VAR_2->n_flink = ((void*)0);
   continue;
  }







  if (VAR_2 == VAR_3) {
   VAR_2 = VAR_1;
   VAR_1 = VAR_1->n_flink;
   VAR_2->n_flink = VAR_3;
   VAR_3->n_blink = VAR_2;
   VAR_2->n_blink = ((void*)0);
   VAR_3 = VAR_2;
   continue;
  }






  VAR_4 = VAR_1;
  VAR_1 = VAR_1->n_flink;
  VAR_4->n_flink = VAR_2;
  VAR_4->n_blink = VAR_2->n_blink;
  VAR_2->n_blink->n_flink = VAR_4;
  VAR_2->n_blink = VAR_4;
 }






 VAR_1 = VAR_3;
 while (VAR_1 != ((void*)0)) {
  VAR_2 = VAR_1;
  while (VAR_2->n_flink != ((void*)0) &&
      FUNC_0(VAR_1->n_name, VAR_2->n_flink->n_name) == 0)
   VAR_2 = VAR_2->n_flink;
  if (VAR_2 == VAR_1 || VAR_2 == ((void*)0)) {
   VAR_1 = VAR_1->n_flink;
   continue;
  }






  VAR_1->n_flink = VAR_2->n_flink;
  if (VAR_2->n_flink != ((void*)0))
   VAR_2->n_flink->n_blink = VAR_1;
  VAR_1 = VAR_1->n_flink;
 }
 return (VAR_3);
}
