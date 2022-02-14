
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;
typedef struct TYPE_16__ TYPE_12__ ;


struct TYPE_18__ {int capabilities; int (* add_frontend ) (TYPE_1__*,TYPE_2__*) ;int (* connect_frontend ) (TYPE_1__*,TYPE_2__*) ;int (* remove_frontend ) (TYPE_1__*,TYPE_2__*) ;} ;
struct TYPE_17__ {int filternum; int feednum; TYPE_1__ dmx; int stop_feed; int start_feed; struct vb2_dvb* priv; } ;
struct TYPE_16__ {int filternum; scalar_t__ capabilities; TYPE_1__* demux; } ;
struct TYPE_19__ {int source; } ;
struct vb2_dvb {int * frontend; TYPE_14__ demux; TYPE_12__ dmxdev; TYPE_2__ fe_hw; TYPE_2__ fe_mem; int name; int net; } ;
struct dvb_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_14__*) ;
 int FUNC_1 (TYPE_14__*) ;
 int FUNC_2 (TYPE_12__*,struct dvb_adapter*) ;
 int FUNC_3 (TYPE_12__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dvb_adapter*,int *,TYPE_1__*) ;
 int FUNC_6 (struct dvb_adapter*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_13 (TYPE_1__*,TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_14(struct dvb_adapter *VAR_7,
 struct vb2_dvb *VAR_8)
{
 int VAR_9;


 VAR_9 = FUNC_6(VAR_7, VAR_8->frontend);
 if (VAR_9 < 0) {
  FUNC_8("%s: dvb_register_frontend failed (errno = %d)\n",
         VAR_8->name, VAR_9);
  goto fail_frontend;
 }


 VAR_8->demux.dmx.capabilities =
  VAR_4 | VAR_3 |
  VAR_1;
 VAR_8->demux.priv = VAR_8;
 VAR_8->demux.filternum = 256;
 VAR_8->demux.feednum = 256;
 VAR_8->demux.start_feed = VAR_5;
 VAR_8->demux.stop_feed = VAR_6;
 VAR_9 = FUNC_0(&VAR_8->demux);
 if (VAR_9 < 0) {
  FUNC_8("%s: dvb_dmx_init failed (errno = %d)\n",
         VAR_8->name, VAR_9);
  goto fail_dmx;
 }

 VAR_8->dmxdev.filternum = 256;
 VAR_8->dmxdev.demux = &VAR_8->demux.dmx;
 VAR_8->dmxdev.capabilities = 0;
 VAR_9 = FUNC_2(&VAR_8->dmxdev, VAR_7);

 if (VAR_9 < 0) {
  FUNC_8("%s: dvb_dmxdev_init failed (errno = %d)\n",
         VAR_8->name, VAR_9);
  goto fail_dmxdev;
 }

 VAR_8->fe_hw.source = VAR_0;
 VAR_9 = VAR_8->demux.dmx.add_frontend(&VAR_8->demux.dmx, &VAR_8->fe_hw);
 if (VAR_9 < 0) {
  FUNC_8("%s: add_frontend failed (DMX_FRONTEND_0, errno = %d)\n",
         VAR_8->name, VAR_9);
  goto fail_fe_hw;
 }

 VAR_8->fe_mem.source = VAR_2;
 VAR_9 = VAR_8->demux.dmx.add_frontend(&VAR_8->demux.dmx, &VAR_8->fe_mem);
 if (VAR_9 < 0) {
  FUNC_8("%s: add_frontend failed (DMX_MEMORY_FE, errno = %d)\n",
         VAR_8->name, VAR_9);
  goto fail_fe_mem;
 }

 VAR_9 = VAR_8->demux.dmx.connect_frontend(&VAR_8->demux.dmx, &VAR_8->fe_hw);
 if (VAR_9 < 0) {
  FUNC_8("%s: connect_frontend failed (errno = %d)\n",
         VAR_8->name, VAR_9);
  goto fail_fe_conn;
 }


 VAR_9 = FUNC_5(VAR_7, &VAR_8->net, &VAR_8->demux.dmx);
 if (VAR_9 < 0) {
  FUNC_8("%s: dvb_net_init failed (errno = %d)\n",
         VAR_8->name, VAR_9);
  goto fail_fe_conn;
 }
 return 0;

fail_fe_conn:
 VAR_8->demux.dmx.remove_frontend(&VAR_8->demux.dmx, &VAR_8->fe_mem);
fail_fe_mem:
 VAR_8->demux.dmx.remove_frontend(&VAR_8->demux.dmx, &VAR_8->fe_hw);
fail_fe_hw:
 FUNC_3(&VAR_8->dmxdev);
fail_dmxdev:
 FUNC_1(&VAR_8->demux);
fail_dmx:
 FUNC_7(VAR_8->frontend);
fail_frontend:
 FUNC_4(VAR_8->frontend);
 VAR_8->frontend = ((void*)0);

 return VAR_9;
}
