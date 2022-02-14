
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hfi1_user_info {int subctxt_cnt; } ;
struct hfi1_filedata {struct hfi1_devdata* dd; } ;
struct hfi1_devdata {scalar_t__ first_dyn_alloc_ctxt; scalar_t__ num_rcv_contexts; } ;
struct hfi1_ctxtdata {int dummy; } ;


 struct hfi1_ctxtdata* FUNC_0 (struct hfi1_devdata*,scalar_t__) ;
 int FUNC_1 (struct hfi1_ctxtdata*) ;
 int FUNC_2 (struct hfi1_filedata*,struct hfi1_user_info const*,struct hfi1_ctxtdata*) ;

__attribute__((used)) static int FUNC_3(struct hfi1_filedata *VAR_0,
    const struct hfi1_user_info *VAR_1)
{
 struct hfi1_ctxtdata *VAR_2;
 struct hfi1_devdata *VAR_3 = VAR_0->dd;
 u16 VAR_4;
 int VAR_5;

 if (!VAR_1->subctxt_cnt)
  return 0;

 for (VAR_4 = VAR_3->first_dyn_alloc_ctxt; VAR_4 < VAR_3->num_rcv_contexts; VAR_4++) {
  VAR_2 = FUNC_0(VAR_3, VAR_4);
  if (VAR_2) {
   VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2);
   FUNC_1(VAR_2);

   if (VAR_5)
    return VAR_5;
  }
 }

 return 0;
}
