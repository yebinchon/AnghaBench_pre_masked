
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_fw_chain {struct ip_fw* default_rule; struct ip_fw* map; int nat; } ;
struct ip_fw {int cmd_len; TYPE_1__* cmd; int flags; } ;
struct TYPE_2__ {int len; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct ip_fw_chain VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (struct ip_fw*,int ) ;
 int FUNC_4 (struct ip_fw_chain*,struct ip_fw*,int ) ;
 struct ip_fw* FUNC_5 (struct ip_fw_chain*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int VAR_17 ;
 int FUNC_8 (struct ip_fw_chain*) ;
 int FUNC_9 (struct ip_fw_chain*,int) ;
 int FUNC_10 () ;
 int FUNC_11 (struct ip_fw_chain*) ;
 int FUNC_12 (struct ip_fw_chain*) ;
 int FUNC_13 (struct ip_fw_chain*,int) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static int
FUNC_15(const void *VAR_18)
{
 int VAR_19, VAR_20;
 struct ip_fw *VAR_21 = ((void*)0);
 struct ip_fw_chain *VAR_22;

 VAR_22 = &VAR_12;

 VAR_20 = FUNC_1(VAR_14) ? 1 : 0;


 VAR_6 = 100;
 VAR_7 = 1;
 FUNC_12(VAR_22);

 FUNC_10();

 VAR_8 = VAR_15;
 VAR_19 = FUNC_13(VAR_22, VAR_20);
 if (VAR_19) {
  FUNC_14("ipfw2: setting up tables failed\n");
  FUNC_3(VAR_22->map, VAR_3);
  FUNC_3(VAR_21, VAR_3);
  return (VAR_0);
 }

 FUNC_0(VAR_22);


 VAR_21 = FUNC_5(VAR_22, sizeof(struct ip_fw));
 VAR_21->flags |= VAR_2;
 VAR_21->cmd_len = 1;
 VAR_21->cmd[0].len = 1;
 VAR_21->cmd[0].opcode = VAR_16 ? VAR_4 : VAR_5;
 VAR_22->default_rule = VAR_21;
 FUNC_4(VAR_22, VAR_21, 0);

 FUNC_8(VAR_22);
 FUNC_9(VAR_22, VAR_20);



 FUNC_7(VAR_20);


 VAR_11 = 1;
 VAR_10 = VAR_17;
 VAR_19 = FUNC_6();
 return (VAR_19);
}
