
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct omap_dmadev {TYPE_3__* plat; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_5__ {TYPE_1__ chan; } ;
struct omap_chan {TYPE_2__ vc; } ;
struct TYPE_6__ {int errata; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct omap_chan*,unsigned int) ;
 struct omap_dmadev* FUNC_1 (int ) ;

__attribute__((used)) static uint32_t FUNC_2(struct omap_chan *VAR_1, unsigned VAR_2)
{
 struct omap_dmadev *VAR_3 = FUNC_1(VAR_1->vc.chan.device);
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4 == 0 && VAR_3->plat->errata & VAR_0)
  VAR_4 = FUNC_0(VAR_1, VAR_2);

 return VAR_4;
}
