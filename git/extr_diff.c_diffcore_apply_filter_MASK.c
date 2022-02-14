
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_queue_struct {int nr; struct diff_filepair** queue; } ;
struct diff_options {int filter; } ;
struct diff_filepair {int dummy; } ;


 int FUNC_0 (struct diff_queue_struct*) ;
 int VAR_0 ;
 int FUNC_1 (struct diff_filepair*) ;
 int FUNC_2 (struct diff_queue_struct*,struct diff_filepair*) ;
 struct diff_queue_struct VAR_1 ;
 scalar_t__ FUNC_3 (int ,struct diff_options*) ;
 int FUNC_4 (struct diff_filepair**) ;
 scalar_t__ FUNC_5 (struct diff_options*,struct diff_filepair*) ;

__attribute__((used)) static void FUNC_6(struct diff_options *VAR_2)
{
 int VAR_3;
 struct diff_queue_struct *VAR_4 = &VAR_1;
 struct diff_queue_struct VAR_5;

 FUNC_0(&VAR_5);

 if (!VAR_2->filter)
  return;

 if (FUNC_3(VAR_0, VAR_2)) {
  int VAR_6;
  for (VAR_3 = VAR_6 = 0; !VAR_6 && VAR_3 < VAR_4->nr; VAR_3++) {
   if (FUNC_5(VAR_2, VAR_4->queue[VAR_3]))
    VAR_6++;
  }
  if (VAR_6)
   return;






  for (VAR_3 = 0; VAR_3 < VAR_4->nr; VAR_3++)
   FUNC_1(VAR_4->queue[VAR_3]);
 }
 else {

  for (VAR_3 = 0; VAR_3 < VAR_4->nr; VAR_3++) {
   struct diff_filepair *VAR_7 = VAR_4->queue[VAR_3];
   if (FUNC_5(VAR_2, VAR_7))
    FUNC_2(&VAR_5, VAR_7);
   else
    FUNC_1(VAR_7);
  }
 }
 FUNC_4(VAR_4->queue);
 *VAR_4 = VAR_5;
}
