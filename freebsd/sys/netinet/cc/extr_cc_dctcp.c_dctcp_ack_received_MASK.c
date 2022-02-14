
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct dctcp {int bytes_total; int ece_prev; int bytes_ecn; int save_sndnxt; scalar_t__ ece_curr; } ;
struct cc_var {int bytes_this_ack; int curack; struct dctcp* cc_data; } ;
struct TYPE_2__ {int (* ack_received ) (struct cc_var*,scalar_t__) ;} ;


 int FUNC_0 (struct cc_var*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int FUNC_7 (struct cc_var*) ;
 int FUNC_8 (int,int) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (struct cc_var*,scalar_t__) ;
 int FUNC_10 (struct cc_var*,scalar_t__) ;
 int FUNC_11 (struct cc_var*,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_12(struct cc_var *VAR_7, uint16_t VAR_8)
{
 struct dctcp *VAR_9;
 int VAR_10 = 0;

 VAR_9 = VAR_7->cc_data;

 if (FUNC_0(VAR_7, VAR_5) & VAR_2) {





  if (FUNC_3(FUNC_0(VAR_7, VAR_5))) {
   FUNC_2(FUNC_0(VAR_7, VAR_5));
   VAR_3.ack_received(VAR_7, VAR_8);
   FUNC_1(FUNC_0(VAR_7, VAR_5));
  } else
   VAR_3.ack_received(VAR_7, VAR_8);

  if (VAR_8 == VAR_1)
   VAR_10 = FUNC_8(VAR_7->bytes_this_ack, FUNC_0(VAR_7, VAR_6));

  if (VAR_8 == VAR_0)
   VAR_10 = VAR_7->bytes_this_ack;


  VAR_9->bytes_total += VAR_10;


  if (VAR_9->ece_curr) {


   if (!VAR_9->ece_prev
       && VAR_10 > FUNC_0(VAR_7, VAR_6)) {
    VAR_9->bytes_ecn +=
        (VAR_10 - FUNC_0(VAR_7, VAR_6));
   } else
    VAR_9->bytes_ecn += VAR_10;
   VAR_9->ece_prev = 1;
  } else {
   if (VAR_9->ece_prev
       && VAR_10 > FUNC_0(VAR_7, VAR_6))
    VAR_9->bytes_ecn += FUNC_0(VAR_7, VAR_6);
   VAR_9->ece_prev = 0;
  }
  VAR_9->ece_curr = 0;





  if ((FUNC_4(FUNC_0(VAR_7, VAR_5)) &&
      FUNC_5(VAR_7->curack, FUNC_0(VAR_7, VAR_4))) ||
      (!FUNC_4(FUNC_0(VAR_7, VAR_5)) &&
      FUNC_6(VAR_7->curack, VAR_9->save_sndnxt)))
   FUNC_7(VAR_7);
 } else
  VAR_3.ack_received(VAR_7, VAR_8);
}
