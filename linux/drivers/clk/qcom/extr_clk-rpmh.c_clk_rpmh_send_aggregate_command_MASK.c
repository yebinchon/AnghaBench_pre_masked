
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcs_cmd {int data; int addr; int member_0; } ;
struct clk_rpmh {int aggr_state; int res_on_val; int last_sent_aggr_state; TYPE_1__* peer; int res_name; int dev; int res_addr; } ;
typedef enum rpmh_state { ____Placeholder_rpmh_state } rpmh_state ;
struct TYPE_2__ {int last_sent_aggr_state; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char*,int ,int) ;
 scalar_t__ FUNC_2 (struct clk_rpmh*,int) ;
 int FUNC_3 (int ,int,struct tcs_cmd*,int) ;

__attribute__((used)) static int FUNC_4(struct clk_rpmh *VAR_3)
{
 struct tcs_cmd VAR_4 = { 0 };
 u32 VAR_5, VAR_6;
 enum rpmh_state VAR_7 = VAR_1;
 int VAR_8;

 VAR_4.addr = VAR_3->res_addr;
 VAR_5 = VAR_3->aggr_state;
 VAR_6 = VAR_3->res_on_val;

 for (; VAR_7 <= VAR_0; VAR_7++) {
  if (FUNC_2(VAR_3, VAR_7)) {
   if (VAR_5 & FUNC_0(VAR_7))
    VAR_4.data = VAR_6;

   VAR_8 = FUNC_3(VAR_3->dev, VAR_7, &VAR_4, 1);
   if (VAR_8) {
    FUNC_1(VAR_3->dev, "set %s state of %s failed: (%d)\n",
     !VAR_7 ? "sleep" :
     VAR_7 == VAR_2 ?
     "wake" : "active", VAR_3->res_name, VAR_8);
    return VAR_8;
   }
  }
 }

 VAR_3->last_sent_aggr_state = VAR_3->aggr_state;
 VAR_3->peer->last_sent_aggr_state = VAR_3->last_sent_aggr_state;

 return 0;
}
