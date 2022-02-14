
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct rcar_dmac_chan {TYPE_2__ chan; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rcar_dmac_chan*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct rcar_dmac_chan *VAR_2)
{
 u32 VAR_3;
 unsigned int VAR_4;





 for (VAR_4 = 0; VAR_4 < 1024; VAR_4++) {
  VAR_3 = FUNC_1(VAR_2, VAR_0);
  if (!(VAR_3 & VAR_1))
   return;
  FUNC_2(1);
 }

 FUNC_0(VAR_2->chan.device->dev, "CHCR DE check error\n");
}
