
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl330_thread {int dummy; } ;
struct TYPE_2__ {int num_chan; } ;
struct pl330_dmac {struct pl330_thread* channels; TYPE_1__ pcfg; } ;


 int FUNC_0 (struct pl330_thread*) ;
 int FUNC_1 (struct pl330_thread*) ;

__attribute__((used)) static int FUNC_2(struct pl330_dmac *VAR_0)
{
 struct pl330_thread *VAR_1;
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0->pcfg.num_chan; VAR_2++) {
  VAR_1 = &VAR_0->channels[VAR_2];
  FUNC_1(VAR_1);
 }


 FUNC_0(VAR_0->channels);

 return 0;
}
