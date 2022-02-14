
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rvt_ibport {scalar_t__ qkey_violations; int port_cap_flags; int port_cap3_flags; } ;
struct TYPE_2__ {int (* shut_down_port ) (struct rvt_dev_info*,int ) ;int (* cap_mask_chg ) (struct rvt_dev_info*,int ) ;} ;
struct rvt_dev_info {TYPE_1__ driver_f; struct rvt_ibport** ports; } ;
struct ib_port_modify {int clr_port_cap_mask; int set_port_cap_mask; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rvt_dev_info* FUNC_0 (struct ib_device*) ;
 int FUNC_1 (struct ib_device*,int ) ;
 int FUNC_2 (struct rvt_dev_info*,int ) ;
 int FUNC_3 (struct rvt_dev_info*,int ) ;

__attribute__((used)) static int FUNC_4(struct ib_device *VAR_4, u8 VAR_5,
      int VAR_6, struct ib_port_modify *VAR_7)
{
 struct rvt_dev_info *VAR_8 = FUNC_0(VAR_4);
 struct rvt_ibport *VAR_9;
 int VAR_10 = 0;
 int VAR_11 = FUNC_1(VAR_4, VAR_5);

 if (VAR_11 < 0)
  return -VAR_0;

 VAR_9 = VAR_8->ports[VAR_11];
 if (VAR_6 & VAR_1) {
  VAR_9->port_cap3_flags |= VAR_7->set_port_cap_mask;
  VAR_9->port_cap3_flags &= ~VAR_7->clr_port_cap_mask;
 } else {
  VAR_9->port_cap_flags |= VAR_7->set_port_cap_mask;
  VAR_9->port_cap_flags &= ~VAR_7->clr_port_cap_mask;
 }

 if (VAR_7->set_port_cap_mask || VAR_7->clr_port_cap_mask)
  VAR_8->driver_f.cap_mask_chg(VAR_8, VAR_5);
 if (VAR_6 & VAR_3)
  VAR_10 = VAR_8->driver_f.shut_down_port(VAR_8, VAR_5);
 if (VAR_6 & VAR_2)
  VAR_9->qkey_violations = 0;

 return VAR_10;
}
