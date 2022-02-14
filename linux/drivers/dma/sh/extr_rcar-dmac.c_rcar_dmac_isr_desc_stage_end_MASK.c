
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_dmac_desc {int cyclic; } ;
struct TYPE_2__ {struct rcar_dmac_desc* running; } ;
struct rcar_dmac_chan {TYPE_1__ desc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned int FUNC_2 (struct rcar_dmac_chan*,int ) ;
 int FUNC_3 (struct rcar_dmac_chan*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(struct rcar_dmac_chan *VAR_6)
{
 struct rcar_dmac_desc *VAR_7 = VAR_6->desc.running;
 unsigned int VAR_8;

 if (FUNC_1(!VAR_7 || !VAR_7->cyclic)) {





  return VAR_0;
 }


 VAR_8 = (FUNC_2(VAR_6, VAR_2) &
   VAR_3) >> VAR_4;
 FUNC_3(VAR_6, VAR_5, FUNC_0(VAR_8));

 return VAR_1;
}
