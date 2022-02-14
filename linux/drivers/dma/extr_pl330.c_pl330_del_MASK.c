
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_chan; } ;
struct TYPE_3__ {int dev; } ;
struct pl330_dmac {int mcbufsz; int mcode_bus; int mcode_cpu; TYPE_2__ pcfg; TYPE_1__ ddma; int tasks; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ,int ) ;
 int FUNC_1 (struct pl330_dmac*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pl330_dmac *VAR_2)
{
 VAR_2->state = VAR_1;

 FUNC_2(&VAR_2->tasks);


 FUNC_1(VAR_2);

 FUNC_0(VAR_2->ddma.dev,
  VAR_2->pcfg.num_chan * VAR_2->mcbufsz, VAR_2->mcode_cpu,
  VAR_2->mcode_bus, VAR_0);
}
