
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stp_master {scalar_t__ nr_free; int * chan_map; } ;
struct stm_output {scalar_t__ nr_chans; int channel; int lock; int master; } ;
struct stm_device {int mc_lock; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 struct stp_master* FUNC_4 (struct stm_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct stm_device *VAR_0, struct stm_output *VAR_1)
{
 struct stp_master *VAR_2 = FUNC_4(VAR_0, VAR_1->master);

 FUNC_3(&VAR_0->mc_lock);
 FUNC_3(&VAR_1->lock);

 if (FUNC_0(VAR_2->nr_free < VAR_1->nr_chans))
  return;

 FUNC_1(&VAR_2->chan_map[0], VAR_1->channel,
          FUNC_2(VAR_1->nr_chans));

 VAR_2->nr_free -= VAR_1->nr_chans;
}
