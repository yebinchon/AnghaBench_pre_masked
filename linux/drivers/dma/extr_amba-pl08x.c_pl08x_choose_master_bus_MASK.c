
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pl08x_bus_data {scalar_t__ buswidth; } ;
struct pl08x_lli_build_data {struct pl08x_bus_data dstbus; struct pl08x_bus_data srcbus; } ;
struct pl08x_driver_data {TYPE_1__* vd; } ;
struct TYPE_2__ {scalar_t__ ftdmac020; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct pl08x_driver_data *VAR_2,
        struct pl08x_lli_build_data *VAR_3,
        struct pl08x_bus_data **VAR_4,
        struct pl08x_bus_data **VAR_5,
        u32 VAR_6)
{
 bool VAR_7;
 bool VAR_8;





 if (VAR_2->vd->ftdmac020) {
  VAR_7 = 1;
  VAR_8 = 1;
 } else {
  VAR_7 = !!(VAR_6 & VAR_0);
  VAR_8 = !!(VAR_6 & VAR_1);
 }





 if (!VAR_7) {
  *VAR_4 = &VAR_3->dstbus;
  *VAR_5 = &VAR_3->srcbus;
 } else if (!VAR_8) {
  *VAR_4 = &VAR_3->srcbus;
  *VAR_5 = &VAR_3->dstbus;
 } else {
  if (VAR_3->dstbus.buswidth >= VAR_3->srcbus.buswidth) {
   *VAR_4 = &VAR_3->dstbus;
   *VAR_5 = &VAR_3->srcbus;
  } else {
   *VAR_4 = &VAR_3->srcbus;
   *VAR_5 = &VAR_3->dstbus;
  }
 }
}
