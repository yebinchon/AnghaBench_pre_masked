
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_context {int flags; int halt_wait; } ;
struct hfi1_devdata {int flags; int event_queue; } ;
struct hfi1_ctxtdata {struct send_context* sc; struct hfi1_devdata* dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct hfi1_devdata*,int ,struct hfi1_ctxtdata*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct send_context*) ;
 int FUNC_4 (struct send_context*) ;
 int FUNC_5 (struct send_context*) ;
 int FUNC_6 (struct send_context*) ;
 int FUNC_7 (int ,int,int ) ;

__attribute__((used)) static int FUNC_8(struct hfi1_ctxtdata *VAR_9)
{
 struct send_context *VAR_10;
 struct hfi1_devdata *VAR_11;
 int VAR_12 = 0;

 if (!VAR_9 || !VAR_9->dd || !VAR_9->sc)
  return -VAR_0;







 VAR_11 = VAR_9->dd;
 VAR_10 = VAR_9->sc;





 FUNC_7(
  VAR_10->halt_wait, (VAR_10->flags & VAR_7),
  FUNC_2(VAR_8));
 if (!(VAR_10->flags & VAR_7))
  return -VAR_2;





 if (VAR_10->flags & VAR_6) {
  FUNC_7(
   VAR_11->event_queue,
   !(FUNC_0(VAR_11->flags) & VAR_4),
   FUNC_2(VAR_8));
  if (VAR_11->flags & VAR_4)
   return -VAR_2;

  if (VAR_11->flags & VAR_3)




   return -VAR_1;

  FUNC_3(VAR_10);
  VAR_12 = FUNC_4(VAR_10);
  FUNC_1(VAR_11, VAR_5, VAR_9);
 } else {
  VAR_12 = FUNC_5(VAR_10);
 }
 if (!VAR_12)
  FUNC_6(VAR_10);

 return VAR_12;
}
