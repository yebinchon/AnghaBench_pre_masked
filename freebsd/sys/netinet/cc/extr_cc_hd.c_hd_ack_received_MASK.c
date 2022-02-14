
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct ertt {int rtt; int minrtt; int maxrtt; } ;
struct cc_var {int dummy; } ;
struct TYPE_2__ {int (* ack_received ) (struct cc_var*,scalar_t__) ;int (* cong_signal ) (struct cc_var*,int ) ;} ;


 int FUNC_0 (struct cc_var*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct ertt* FUNC_2 (int ,int ) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (struct cc_var*,int ) ;
 int FUNC_5 (struct cc_var*,scalar_t__) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_6(struct cc_var *VAR_8, uint16_t VAR_9)
{
 struct ertt *VAR_10;
 int VAR_11;

 if (VAR_9 == VAR_0) {
  VAR_10 = FUNC_2(FUNC_0(VAR_8, VAR_6), VAR_4);

  if (VAR_10->rtt && VAR_10->minrtt && VAR_3 > 0) {
   VAR_11 = VAR_10->rtt - VAR_10->minrtt;

   if (VAR_11 > VAR_2 &&
       !FUNC_1(FUNC_0(VAR_8, VAR_7))) {

    if (FUNC_3(VAR_11,
        VAR_10->maxrtt - VAR_10->minrtt)) {





     VAR_5.cong_signal(VAR_8,
         VAR_1);
     return;
    }
   }
  }
 }
 VAR_5.ack_received(VAR_8, VAR_9);
}
