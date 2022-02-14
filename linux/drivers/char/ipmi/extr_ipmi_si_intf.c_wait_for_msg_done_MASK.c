
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smi_info {int si_sm; TYPE_1__* handlers; } ;
typedef enum si_sm_result { ____Placeholder_si_sm_result } si_sm_result ;
struct TYPE_2__ {int (* event ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct smi_info *VAR_5)
{
 enum si_sm_result VAR_6;

 VAR_6 = VAR_5->handlers->event(VAR_5->si_sm, 0);
 for (;;) {
  if (VAR_6 == VAR_2 ||
      VAR_6 == VAR_3) {
   FUNC_1(1);
   VAR_6 = VAR_5->handlers->event(
    VAR_5->si_sm, FUNC_0(1));
  } else if (VAR_6 == VAR_1) {
   VAR_6 = VAR_5->handlers->event(
    VAR_5->si_sm, 0);
  } else
   break;
 }
 if (VAR_6 == VAR_4)




  return -VAR_0;

 return 0;
}
