
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* remove_frontend ) (TYPE_1__*,int *) ;int (* close ) (TYPE_1__*) ;} ;
struct TYPE_6__ {TYPE_1__ dmx; } ;
struct flexcop_device {int init_state; int dvb_adapter; TYPE_4__ demux; int dmxdev; int hw_frontend; int mem_frontend; int dvbnet; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_8(struct flexcop_device *VAR_1)
{
 if (VAR_1->init_state & VAR_0) {
  FUNC_3(&VAR_1->dvbnet);

  VAR_1->demux.dmx.close(&VAR_1->demux.dmx);
  VAR_1->demux.dmx.remove_frontend(&VAR_1->demux.dmx,
   &VAR_1->mem_frontend);
  VAR_1->demux.dmx.remove_frontend(&VAR_1->demux.dmx,
   &VAR_1->hw_frontend);
  FUNC_2(&VAR_1->dmxdev);
  FUNC_1(&VAR_1->demux);
  FUNC_4(&VAR_1->dvb_adapter);
  FUNC_0("deinitialized dvb stuff\n");
 }
 VAR_1->init_state &= ~VAR_0;
}
