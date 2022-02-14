
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_queue_struct {int nr; struct diff_filepair** queue; } ;
struct diff_options {int pickaxe_opts; } ;
struct diff_filepair {int dummy; } ;
typedef int regex_t ;
typedef int pickaxe_fn ;
typedef int kwset_t ;


 int VAR_0 ;
 int FUNC_0 (struct diff_queue_struct*) ;
 int FUNC_1 (struct diff_filepair*) ;
 int FUNC_2 (struct diff_queue_struct*,struct diff_filepair*) ;
 int FUNC_3 (struct diff_filepair**) ;
 scalar_t__ FUNC_4 (struct diff_filepair*,struct diff_options*,int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct diff_queue_struct *VAR_1, struct diff_options *VAR_2,
      regex_t *VAR_3, kwset_t VAR_4, pickaxe_fn VAR_5)
{
 int VAR_6;
 struct diff_queue_struct VAR_7;

 FUNC_0(&VAR_7);

 if (VAR_2->pickaxe_opts & VAR_0) {

  for (VAR_6 = 0; VAR_6 < VAR_1->nr; VAR_6++) {
   struct diff_filepair *VAR_8 = VAR_1->queue[VAR_6];
   if (FUNC_4(VAR_8, VAR_2, VAR_3, VAR_4, VAR_5))
    return;
  }






  for (VAR_6 = 0; VAR_6 < VAR_1->nr; VAR_6++)
   FUNC_1(VAR_1->queue[VAR_6]);
 } else {

  for (VAR_6 = 0; VAR_6 < VAR_1->nr; VAR_6++) {
   struct diff_filepair *VAR_9 = VAR_1->queue[VAR_6];
   if (FUNC_4(VAR_9, VAR_2, VAR_3, VAR_4, VAR_5))
    FUNC_2(&VAR_7, VAR_9);
   else
    FUNC_1(VAR_9);
  }
 }

 FUNC_3(VAR_1->queue);
 *VAR_1 = VAR_7;
}
