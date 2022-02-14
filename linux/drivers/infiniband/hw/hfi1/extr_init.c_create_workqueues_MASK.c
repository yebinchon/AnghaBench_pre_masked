
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_pportdata {int * link_wq; int * hfi1_wq; } ;
struct hfi1_devdata {int num_pports; struct hfi1_pportdata* pport; int unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (char*,int,int,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct hfi1_devdata *VAR_7)
{
 int VAR_8;
 struct hfi1_pportdata *VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_7->num_pports; ++VAR_8) {
  VAR_9 = VAR_7->pport + VAR_8;
  if (!VAR_9->hfi1_wq) {
   VAR_9->hfi1_wq =
    FUNC_0(
        "hfi%d_%d",
        VAR_5 | VAR_3 | VAR_2 |
        VAR_4,
        VAR_1,
        VAR_7->unit, VAR_8);
   if (!VAR_9->hfi1_wq)
    goto wq_error;
  }
  if (!VAR_9->link_wq) {




   VAR_9->link_wq =
    FUNC_0(
        "hfi_link_%d_%d",
        VAR_5 | VAR_4 | VAR_6,
        1,
        VAR_7->unit, VAR_8);
   if (!VAR_9->link_wq)
    goto wq_error;
  }
 }
 return 0;
wq_error:
 FUNC_2("alloc_workqueue failed for port %d\n", VAR_8 + 1);
 for (VAR_8 = 0; VAR_8 < VAR_7->num_pports; ++VAR_8) {
  VAR_9 = VAR_7->pport + VAR_8;
  if (VAR_9->hfi1_wq) {
   FUNC_1(VAR_9->hfi1_wq);
   VAR_9->hfi1_wq = ((void*)0);
  }
  if (VAR_9->link_wq) {
   FUNC_1(VAR_9->link_wq);
   VAR_9->link_wq = ((void*)0);
  }
 }
 return -VAR_0;
}
