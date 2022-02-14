
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dmadev {int ddev; int reg_map; } ;
struct TYPE_2__ {int desc_free; } ;
struct omap_chan {TYPE_1__ vc; int reg_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct omap_chan* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_2(struct omap_dmadev *VAR_3)
{
 struct omap_chan *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->reg_map = VAR_3->reg_map;
 VAR_4->vc.desc_free = VAR_2;
 FUNC_1(&VAR_4->vc, &VAR_3->ddev);

 return 0;
}
