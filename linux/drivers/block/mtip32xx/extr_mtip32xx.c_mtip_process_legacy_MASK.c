
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtip_port {int * cmd_issue; int flags; } ;
struct mtip_cmd {int dummy; } ;
struct driver_data {struct mtip_port* port; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 struct mtip_cmd* FUNC_2 (struct driver_data*,int ) ;
 int FUNC_3 (struct mtip_cmd*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static inline void FUNC_6(struct driver_data *VAR_2, u32 VAR_3)
{
 struct mtip_port *VAR_4 = VAR_2->port;
 struct mtip_cmd *VAR_5 = FUNC_2(VAR_2, VAR_1);

 if (FUNC_5(VAR_0, &VAR_4->flags) && VAR_5) {
  int VAR_6 = FUNC_1(VAR_1);
  int VAR_7 = FUNC_4(VAR_4->cmd_issue[VAR_6]);

  if (!(VAR_7 & (1 << FUNC_0(VAR_1))))
   FUNC_3(VAR_5, 0);
 }
}
