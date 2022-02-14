
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sw {TYPE_1__* regs; } ;
struct port {int id; struct sw* sw; } ;
struct net_device {int flags; } ;
struct TYPE_2__ {int mac_glob_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 struct port* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2)
{
 struct port *VAR_3 = FUNC_2(VAR_2);
 struct sw *VAR_4 = VAR_3->sw;
 u32 VAR_5;

 VAR_5 = FUNC_0(&VAR_4->regs->mac_glob_cfg);

 if (VAR_2->flags & VAR_0) {
  if (VAR_3->id == 3)
   VAR_5 |= ((1 << 2) << VAR_1);
  else
   VAR_5 |= ((1 << VAR_3->id) << VAR_1);
 } else {
  if (VAR_3->id == 3)
   VAR_5 &= ~((1 << 2) << VAR_1);
  else
   VAR_5 &= ~((1 << VAR_3->id) << VAR_1);
 }
 FUNC_1(VAR_5, &VAR_4->regs->mac_glob_cfg);
}
