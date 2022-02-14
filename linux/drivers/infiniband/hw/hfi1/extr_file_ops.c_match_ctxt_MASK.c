
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct hfi1_user_info {scalar_t__ subctxt_id; scalar_t__ subctxt_cnt; scalar_t__ userversion; int uuid; } ;
struct hfi1_filedata {struct hfi1_ctxtdata* uctxt; scalar_t__ subctxt; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int uctxt_lock; } ;
struct hfi1_ctxtdata {scalar_t__ jkey; scalar_t__ subctxt_id; scalar_t__ subctxt_cnt; scalar_t__ userversion; int in_use_ctxts; int uuid; TYPE_1__* sc; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct hfi1_ctxtdata*) ;
 scalar_t__ FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct hfi1_filedata *VAR_4,
        const struct hfi1_user_info *VAR_5,
        struct hfi1_ctxtdata *VAR_6)
{
 struct hfi1_devdata *VAR_7 = VAR_4->dd;
 unsigned long VAR_8;
 u16 VAR_9;


 if (VAR_6->sc && (VAR_6->sc->type == VAR_3))
  return 0;


 if (FUNC_6(VAR_6->uuid, VAR_5->uuid, sizeof(VAR_6->uuid)) ||
     VAR_6->jkey != FUNC_4(FUNC_2()) ||
     VAR_6->subctxt_id != VAR_5->subctxt_id ||
     VAR_6->subctxt_cnt != VAR_5->subctxt_cnt)
  return 0;


 if (VAR_6->userversion != VAR_5->userversion)
  return -VAR_1;


 FUNC_7(&VAR_7->uctxt_lock, VAR_8);
 if (FUNC_1(VAR_6->in_use_ctxts, VAR_2)) {

  FUNC_8(&VAR_7->uctxt_lock, VAR_8);
  return 0;
 }

 VAR_9 = FUNC_3(VAR_6->in_use_ctxts,
          VAR_2);
 if (VAR_9 >= VAR_6->subctxt_cnt) {
  FUNC_8(&VAR_7->uctxt_lock, VAR_8);
  return -VAR_0;
 }

 VAR_4->subctxt = VAR_9;
 FUNC_0(VAR_4->subctxt, VAR_6->in_use_ctxts);
 FUNC_8(&VAR_7->uctxt_lock, VAR_8);

 VAR_4->uctxt = VAR_6;
 FUNC_5(VAR_6);

 return 1;
}
