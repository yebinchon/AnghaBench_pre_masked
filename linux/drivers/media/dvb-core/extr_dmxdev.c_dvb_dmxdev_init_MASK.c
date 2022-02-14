
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dvb_adapter {int dummy; } ;
struct dmxdev_filter {int dummy; } ;
struct dmxdev {int filternum; int dvr_buffer; int dvr_dvbdev; int dvbdev; TYPE_2__* filter; int lock; int mutex; TYPE_3__* demux; } ;
struct TYPE_7__ {scalar_t__ (* open ) (TYPE_3__*) ;} ;
struct TYPE_5__ {int * data; } ;
struct TYPE_6__ {TYPE_1__ buffer; struct dmxdev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (struct dvb_adapter*,int *,int *,struct dmxdev*,int ,int) ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 TYPE_2__* FUNC_7 (int ) ;

int FUNC_8(struct dmxdev *VAR_7, struct dvb_adapter *VAR_8)
{
 int VAR_9;

 if (VAR_7->demux->open(VAR_7->demux) < 0)
  return -VAR_4;

 VAR_7->filter = FUNC_7(FUNC_0(sizeof(struct dmxdev_filter),
         VAR_7->filternum));
 if (!VAR_7->filter)
  return -VAR_3;

 FUNC_4(&VAR_7->mutex);
 FUNC_5(&VAR_7->lock);
 for (VAR_9 = 0; VAR_9 < VAR_7->filternum; VAR_9++) {
  VAR_7->filter[VAR_9].dev = VAR_7;
  VAR_7->filter[VAR_9].buffer.data = ((void*)0);
  FUNC_1(&VAR_7->filter[VAR_9],
         VAR_0);
 }

 FUNC_2(VAR_8, &VAR_7->dvbdev, &VAR_5, VAR_7,
       VAR_1, VAR_7->filternum);
 FUNC_2(VAR_8, &VAR_7->dvr_dvbdev, &VAR_6,
       VAR_7, VAR_2, VAR_7->filternum);

 FUNC_3(&VAR_7->dvr_buffer, ((void*)0), 8192);

 return 0;
}
