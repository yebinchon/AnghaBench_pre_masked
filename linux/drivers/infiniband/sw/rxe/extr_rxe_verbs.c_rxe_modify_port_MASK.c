
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ qkey_viol_cntr; int port_cap_flags; } ;
struct rxe_port {TYPE_1__ attr; } ;
struct rxe_dev {struct rxe_port port; } ;
struct ib_port_modify {int clr_port_cap_mask; int set_port_cap_mask; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 struct rxe_dev* FUNC_0 (struct ib_device*) ;

__attribute__((used)) static int FUNC_1(struct ib_device *VAR_1,
      u8 VAR_2, int VAR_3, struct ib_port_modify *VAR_4)
{
 struct rxe_dev *VAR_5 = FUNC_0(VAR_1);
 struct rxe_port *VAR_6;

 VAR_6 = &VAR_5->port;

 VAR_6->attr.port_cap_flags |= VAR_4->set_port_cap_mask;
 VAR_6->attr.port_cap_flags &= ~VAR_4->clr_port_cap_mask;

 if (VAR_3 & VAR_0)
  VAR_6->attr.qkey_viol_cntr = 0;

 return 0;
}
