
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int i2c_addr; int cd_mux_state; int cd_mux_control_pin; int cd_valid; } ;
struct radeon_connector {TYPE_1__ router; int router_bus; } ;


 int FUNC_0 (int ,int ,int,int *) ;
 int FUNC_1 (int ,int ,int,int ) ;

void FUNC_2(struct radeon_connector *VAR_0)
{
 u8 VAR_1;

 if (!VAR_0->router.cd_valid)
  return;

 if (!VAR_0->router_bus)
  return;

 FUNC_0(VAR_0->router_bus,
       VAR_0->router.i2c_addr,
       0x3, &VAR_1);
 VAR_1 &= ~VAR_0->router.cd_mux_control_pin;
 FUNC_1(VAR_0->router_bus,
       VAR_0->router.i2c_addr,
       0x3, VAR_1);
 FUNC_0(VAR_0->router_bus,
       VAR_0->router.i2c_addr,
       0x1, &VAR_1);
 VAR_1 &= ~VAR_0->router.cd_mux_control_pin;
 VAR_1 |= VAR_0->router.cd_mux_state;
 FUNC_1(VAR_0->router_bus,
       VAR_0->router.i2c_addr,
       0x1, VAR_1);
}
