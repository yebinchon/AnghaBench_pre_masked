
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl330_thread {int id; int free; struct pl330_dmac* dmac; } ;
struct TYPE_2__ {int num_chan; } ;
struct pl330_dmac {struct pl330_thread* manager; struct pl330_thread* channels; TYPE_1__ pcfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pl330_thread*) ;
 struct pl330_thread* FUNC_1 (int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct pl330_dmac *VAR_2)
{
 int VAR_3 = VAR_2->pcfg.num_chan;
 struct pl330_thread *VAR_4;
 int VAR_5;


 VAR_2->channels = FUNC_1(1 + VAR_3, sizeof(*VAR_4),
     VAR_1);
 if (!VAR_2->channels)
  return -VAR_0;


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 = &VAR_2->channels[VAR_5];
  VAR_4->id = VAR_5;
  VAR_4->dmac = VAR_2;
  FUNC_0(VAR_4);
  VAR_4->free = 1;
 }


 VAR_4 = &VAR_2->channels[VAR_3];
 VAR_4->id = VAR_3;
 VAR_4->dmac = VAR_2;
 VAR_4->free = 0;
 VAR_2->manager = VAR_4;

 return 0;
}
