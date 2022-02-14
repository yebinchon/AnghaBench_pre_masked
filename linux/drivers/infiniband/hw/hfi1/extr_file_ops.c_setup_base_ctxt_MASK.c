
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_filedata {struct hfi1_ctxtdata* uctxt; } ;
struct hfi1_devdata {int dummy; } ;
struct hfi1_ctxtdata {int wait; int event_flags; scalar_t__ subctxt_cnt; int sc; struct hfi1_devdata* dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct hfi1_ctxtdata*) ;
 int FUNC_2 (struct hfi1_devdata*,struct hfi1_ctxtdata*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hfi1_ctxtdata*) ;
 int FUNC_5 (struct hfi1_ctxtdata*) ;
 int FUNC_6 (struct hfi1_filedata*,struct hfi1_ctxtdata*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct hfi1_ctxtdata*) ;
 int FUNC_9 (struct hfi1_ctxtdata*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct hfi1_filedata *VAR_2,
      struct hfi1_ctxtdata *VAR_3)
{
 struct hfi1_devdata *VAR_4 = VAR_3->dd;
 int VAR_5 = 0;

 FUNC_3(VAR_3->sc);


 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (VAR_5)
  goto done;

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5)
  goto done;


 if (VAR_3->subctxt_cnt)
  VAR_5 = FUNC_8(VAR_3);
 if (VAR_5)
  goto done;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5)
  goto done;

 VAR_5 = FUNC_6(VAR_2, VAR_3);
 if (VAR_5)
  goto done;

 FUNC_9(VAR_3);


 VAR_2->uctxt = VAR_3;
 FUNC_4(VAR_3);

done:
 if (VAR_3->subctxt_cnt) {




  if (VAR_5)
   FUNC_7(VAR_0, &VAR_3->event_flags);





  FUNC_0(VAR_1, &VAR_3->event_flags);
  FUNC_10(&VAR_3->wait);
 }

 return VAR_5;
}
