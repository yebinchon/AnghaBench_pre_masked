
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int divisor; } ;
struct omap_ssi_port {TYPE_1__ sst; } ;
struct hsi_controller {int dummy; } ;


 int FUNC_0 (struct hsi_controller*) ;
 int FUNC_1 (struct omap_ssi_port*) ;

void FUNC_2(struct hsi_controller *VAR_0,
          struct omap_ssi_port *VAR_1)
{

 u32 VAR_2 = FUNC_0(VAR_0);
 VAR_1->sst.divisor = VAR_2;
 FUNC_1(VAR_1);
}
