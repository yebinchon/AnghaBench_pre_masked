
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_engine {int err_progress_check_timer; int this_idx; struct hfi1_devdata* dd; int descq_head; int progress_check_head; } ;
struct hfi1_devdata {unsigned int num_sdma; struct sdma_engine* per_sdma; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct hfi1_devdata*,char*,int ) ;
 int FUNC_2 (struct hfi1_devdata*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct sdma_engine *VAR_2)
{
 if (!FUNC_2(VAR_2->dd) && FUNC_0(VAR_0)) {
  unsigned VAR_3;
  struct hfi1_devdata *VAR_4 = VAR_2->dd;

  for (VAR_3 = 0; VAR_3 < VAR_4->num_sdma; VAR_3++) {
   struct sdma_engine *VAR_5 = &VAR_4->per_sdma[VAR_3];

   if (VAR_5 != VAR_2)
    VAR_5->progress_check_head =
       VAR_5->descq_head;
  }
  FUNC_1(VAR_2->dd,
      "SDMA engine %d - check scheduled\n",
    VAR_2->this_idx);
  FUNC_3(&VAR_2->err_progress_check_timer, VAR_1 + 10);
 }
}
