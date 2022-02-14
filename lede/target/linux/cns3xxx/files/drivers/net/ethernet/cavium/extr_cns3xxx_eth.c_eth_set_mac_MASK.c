
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sw {TYPE_1__* regs; } ;
struct sockaddr {int* sa_data; } ;
struct port {int id; struct sw* sw; } ;
struct net_device {int* dev_addr; int addr_len; } ;
struct TYPE_2__ {int arl_vlan_cmd; int * arl_ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,int*,int ) ;
 struct port* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, void *VAR_2)
{
 struct port *VAR_3 = FUNC_4(VAR_1);
 struct sw *VAR_4 = VAR_3->sw;
 struct sockaddr *VAR_5 = VAR_2;
 u32 VAR_6 = 0;

 if (!FUNC_2(VAR_5->sa_data))
  return -VAR_0;


 if (VAR_3->id == 3)
  FUNC_1((VAR_3->id << 16) | (0x4 << 9), &VAR_4->regs->arl_ctrl[0]);
 else
  FUNC_1(((VAR_3->id + 1) << 16) | (0x4 << 9), &VAR_4->regs->arl_ctrl[0]);
 FUNC_1( ((VAR_1->dev_addr[0] << 24) | (VAR_1->dev_addr[1] << 16) |
   (VAR_1->dev_addr[2] << 8) | (VAR_1->dev_addr[3])),
   &VAR_4->regs->arl_ctrl[1]);

 FUNC_1( ((VAR_1->dev_addr[4] << 24) | (VAR_1->dev_addr[5] << 16) |
   (1 << 1)),
   &VAR_4->regs->arl_ctrl[2]);
 FUNC_1((1 << 19), &VAR_4->regs->arl_vlan_cmd);

 while (((FUNC_0(&VAR_4->regs->arl_vlan_cmd) & (1 << 21)) == 0)
   && VAR_6 < 5000) {
  FUNC_5(1);
  VAR_6++;
 }

 VAR_6 = 0;
 FUNC_3(VAR_1->dev_addr, VAR_5->sa_data, VAR_1->addr_len);

 if (VAR_3->id == 3)
  FUNC_1((VAR_3->id << 16) | (0x4 << 9), &VAR_4->regs->arl_ctrl[0]);
 else
  FUNC_1(((VAR_3->id + 1) << 16) | (0x4 << 9), &VAR_4->regs->arl_ctrl[0]);
 FUNC_1( ((VAR_5->sa_data[0] << 24) | (VAR_5->sa_data[1] << 16) |
   (VAR_5->sa_data[2] << 8) | (VAR_5->sa_data[3])),
   &VAR_4->regs->arl_ctrl[1]);

 FUNC_1( ((VAR_5->sa_data[4] << 24) | (VAR_5->sa_data[5] << 16) |
   (7 << 4) | (1 << 1)), &VAR_4->regs->arl_ctrl[2]);
 FUNC_1((1 << 19), &VAR_4->regs->arl_vlan_cmd);

 while (((FUNC_0(&VAR_4->regs->arl_vlan_cmd) & (1 << 21)) == 0)
  && VAR_6 < 5000) {
  FUNC_5(1);
  VAR_6++;
 }
 return 0;
}
