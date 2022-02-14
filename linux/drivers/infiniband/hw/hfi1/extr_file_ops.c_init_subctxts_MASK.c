
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_user_info {int subctxt_id; int subctxt_cnt; } ;
struct hfi1_ctxtdata {int event_flags; int subctxt_id; int subctxt_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct hfi1_ctxtdata *VAR_1,
     const struct hfi1_user_info *VAR_2)
{
 VAR_1->subctxt_cnt = VAR_2->subctxt_cnt;
 VAR_1->subctxt_id = VAR_2->subctxt_id;
 FUNC_0(VAR_0, &VAR_1->event_flags);
}
