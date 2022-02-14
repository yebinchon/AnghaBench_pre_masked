
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_fdma_dev {int nr_channels; struct st_fdma_chan* chans; } ;
struct TYPE_3__ {int device_node; } ;
struct TYPE_4__ {int task; TYPE_1__ chan; } ;
struct st_fdma_chan {TYPE_2__ vchan; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct st_fdma_dev *VAR_0)
{
 struct st_fdma_chan *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_channels; VAR_2++) {
  VAR_1 = &VAR_0->chans[VAR_2];
  FUNC_0(&VAR_1->vchan.chan.device_node);
  FUNC_1(&VAR_1->vchan.task);
 }
}
