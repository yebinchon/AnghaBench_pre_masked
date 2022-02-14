
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcs_cmd {int data; int addr; int member_0; } ;
struct clk_rpmh {int aggr_state; int last_sent_aggr_state; int res_name; int dev; int res_addr; } ;


 int FUNC_0 (int,int,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,struct tcs_cmd*,int) ;

__attribute__((used)) static int FUNC_5(struct clk_rpmh *VAR_2, bool VAR_3)
{
 struct tcs_cmd VAR_4 = { 0 };
 u32 VAR_5;
 int VAR_6;

 FUNC_2(&VAR_1);

 VAR_5 = 0;
 if (VAR_3) {
  VAR_5 = 1;
  if (VAR_2->aggr_state)
   VAR_5 = VAR_2->aggr_state;
 }

 if (VAR_2->last_sent_aggr_state == VAR_5) {
  FUNC_3(&VAR_1);
  return 0;
 }

 VAR_4.addr = VAR_2->res_addr;
 VAR_4.data = FUNC_0(1, VAR_3, 0, VAR_5);

 VAR_6 = FUNC_4(VAR_2->dev, VAR_0, &VAR_4, 1);
 if (VAR_6) {
  FUNC_1(VAR_2->dev, "set active state of %s failed: (%d)\n",
   VAR_2->res_name, VAR_6);
  FUNC_3(&VAR_1);
  return VAR_6;
 }

 VAR_2->last_sent_aggr_state = VAR_5;

 FUNC_3(&VAR_1);

 return 0;
}
