
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct ertt {int flags; int rtt; int minrtt; scalar_t__ maxrtt; } ;
struct chd {int maxrtt_in_rtt; int prev_backoff_qdly; scalar_t__ shadow_w; scalar_t__ loss_compete; } ;
struct cc_var {struct chd* cc_data; } ;


 int FUNC_0 (struct cc_var*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct cc_var*,int ) ;
 int FUNC_3 (struct cc_var*,int) ;
 int VAR_5 ;
 int FUNC_4 (int,int) ;
 struct ertt* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int VAR_6 ;
 int FUNC_7 (int,scalar_t__,struct chd*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_8(struct cc_var *VAR_9, uint16_t VAR_10)
{
 struct chd *VAR_11;
 struct ertt *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_12 = FUNC_5(FUNC_0(VAR_9, VAR_6), VAR_5);
 VAR_11 = VAR_9->cc_data;
 VAR_14 = VAR_12->flags & VAR_2;
 VAR_13 = VAR_15 = 0;

 VAR_11->maxrtt_in_rtt = FUNC_4(VAR_12->rtt, VAR_11->maxrtt_in_rtt);

 if (VAR_14) {




  VAR_16 = VAR_4 ? VAR_11->maxrtt_in_rtt : VAR_12->rtt;
  VAR_11->maxrtt_in_rtt = 0;

  if (VAR_16 && VAR_12->minrtt && !FUNC_1(FUNC_0(VAR_9, VAR_8))) {
   VAR_15 = VAR_16 - VAR_12->minrtt;
   if (VAR_15 > VAR_3) {




    VAR_13 = FUNC_7(VAR_15,
        VAR_12->maxrtt - VAR_12->minrtt, VAR_11);
   } else
    VAR_11->loss_compete = 0;
  }

  VAR_12->flags &= ~VAR_2;
 }

 if (VAR_13) {



  if (VAR_11->loss_compete ||
      VAR_15 > VAR_11->prev_backoff_qdly) {





   VAR_11->shadow_w = FUNC_6(FUNC_0(VAR_9, VAR_7),
       VAR_11->shadow_w);
  } else {




   VAR_11->shadow_w = 0;
  }

  VAR_11->prev_backoff_qdly = VAR_15;




  FUNC_2(VAR_9, VAR_1);

 } else if (VAR_10 == VAR_0)
  FUNC_3(VAR_9, VAR_14);
}
