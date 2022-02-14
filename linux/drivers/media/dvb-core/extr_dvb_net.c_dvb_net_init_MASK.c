
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_net {int dvbdev; scalar_t__* state; struct dmx_demux* demux; int ioctl_mutex; } ;
struct dvb_adapter {int dummy; } ;
struct dmx_demux {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_adapter*,int *,int *,struct dvb_net*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

int FUNC_2 (struct dvb_adapter *VAR_3, struct dvb_net *VAR_4,
    struct dmx_demux *VAR_5)
{
 int VAR_6;

 FUNC_1(&VAR_4->ioctl_mutex);
 VAR_4->demux = VAR_5;

 for (VAR_6=0; VAR_6<VAR_1; VAR_6++)
  VAR_4->state[VAR_6] = 0;

 return FUNC_0(VAR_3, &VAR_4->dvbdev, &VAR_2,
        VAR_4, VAR_0, 0);
}
