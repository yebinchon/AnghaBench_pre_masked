
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int capabilities; } ;
struct TYPE_15__ {int filternum; int feednum; TYPE_1__ dmx; int stop_feed; int start_feed; } ;
struct TYPE_14__ {int filternum; scalar_t__ capabilities; TYPE_1__* demux; } ;
struct TYPE_12__ {int * delsys; } ;
struct TYPE_13__ {TYPE_3__ ops; } ;
struct smsdvb_client_t {int event_fe_state; int event_unc_state; int adapter; TYPE_8__ demux; TYPE_6__ dmxdev; TYPE_4__ frontend; int entry; int stats_done; int tune_done; struct smscore_device_t* coredev; int smsclient; } ;
struct smscore_device_t {int media_dev; } ;
struct smsclient_params_t {int initial_id; struct smsdvb_client_t* context; int onremove_handler; int onresponse_handler; int data_type; } ;
struct dvb_frontend_ops {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_11__ {int name; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_6__*,int *) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int *,int ,int ,struct device*,int ) ;
 int FUNC_6 (int *,TYPE_4__*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct smsdvb_client_t*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct smsdvb_client_t* FUNC_14 (int,int ) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (TYPE_3__*,int *,int) ;
 int FUNC_17 (char*,int) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (struct smsdvb_client_t*,int ) ;
 int FUNC_20 (struct smscore_device_t*) ;
 TYPE_2__* FUNC_21 (int ) ;
 int FUNC_22 (struct smscore_device_t*) ;
 int FUNC_23 (struct smscore_device_t*) ;
 int FUNC_24 (struct smscore_device_t*,struct smsclient_params_t*,int *) ;
 scalar_t__ FUNC_25 (struct smsdvb_client_t*) ;
 int VAR_11 ;
 int FUNC_26 (struct smsdvb_client_t*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_27(struct smscore_device_t *VAR_16,
     struct device *VAR_17, int VAR_18)
{
 struct smsclient_params_t VAR_19;
 struct smsdvb_client_t *VAR_20;
 int VAR_21;


 if (!VAR_18)
  return 0;
 VAR_20 = FUNC_14(sizeof(struct smsdvb_client_t), VAR_3);
 if (!VAR_20)
  return -VAR_2;


 VAR_21 = FUNC_5(&VAR_20->adapter,
      FUNC_21(
     FUNC_22(VAR_16))->name,
      VAR_7, VAR_17, VAR_8);
 if (VAR_21 < 0) {
  FUNC_17("dvb_register_adapter() failed %d\n", VAR_21);
  goto adapter_error;
 }
 FUNC_7(&VAR_20->adapter, VAR_16->media_dev);


 VAR_20->demux.dmx.capabilities = VAR_0;
 VAR_20->demux.filternum = 32;
 VAR_20->demux.feednum = 32;
 VAR_20->demux.start_feed = VAR_14;
 VAR_20->demux.stop_feed = VAR_15;

 VAR_21 = FUNC_1(&VAR_20->demux);
 if (VAR_21 < 0) {
  FUNC_17("dvb_dmx_init failed %d\n", VAR_21);
  goto dvbdmx_error;
 }


 VAR_20->dmxdev.filternum = 32;
 VAR_20->dmxdev.demux = &VAR_20->demux.dmx;
 VAR_20->dmxdev.capabilities = 0;

 VAR_21 = FUNC_3(&VAR_20->dmxdev, &VAR_20->adapter);
 if (VAR_21 < 0) {
  FUNC_17("dvb_dmxdev_init failed %d\n", VAR_21);
  goto dmxdev_error;
 }


 FUNC_16(&VAR_20->frontend.ops, &VAR_11,
        sizeof(struct dvb_frontend_ops));

 switch (FUNC_23(VAR_16)) {
 case 131:
 case 130:
  VAR_20->frontend.ops.delsys[0] = VAR_5;
  break;
 case 129:
 case 128:
  VAR_20->frontend.ops.delsys[0] = VAR_6;
  break;
 }

 VAR_21 = FUNC_6(&VAR_20->adapter, &VAR_20->frontend);
 if (VAR_21 < 0) {
  FUNC_17("frontend registration failed %d\n", VAR_21);
  goto frontend_error;
 }

 VAR_19.initial_id = 1;
 VAR_19.data_type = VAR_4;
 VAR_19.onresponse_handler = VAR_13;
 VAR_19.onremove_handler = VAR_12;
 VAR_19.context = VAR_20;

 VAR_21 = FUNC_24(VAR_16, &VAR_19, &VAR_20->smsclient);
 if (VAR_21 < 0) {
  FUNC_17("smscore_register_client() failed %d\n", VAR_21);
  goto client_error;
 }

 VAR_20->coredev = VAR_16;

 FUNC_10(&VAR_20->tune_done);
 FUNC_10(&VAR_20->stats_done);

 FUNC_12(&VAR_10);

 FUNC_15(&VAR_20->entry, &VAR_9);

 FUNC_13(&VAR_10);

 VAR_20->event_fe_state = -1;
 VAR_20->event_unc_state = -1;
 FUNC_19(VAR_20, VAR_1);

 FUNC_20(VAR_16);

 if (FUNC_25(VAR_20) < 0)
  FUNC_18("failed to create debugfs node\n");

 VAR_21 = FUNC_0(&VAR_20->adapter, 1);
 if (VAR_21 < 0) {
  FUNC_17("dvb_create_media_graph failed %d\n", VAR_21);
  goto client_error;
 }

 FUNC_18("DVB interface registered.\n");
 return 0;

client_error:
 FUNC_9(&VAR_20->frontend);

frontend_error:
 FUNC_4(&VAR_20->dmxdev);

dmxdev_error:
 FUNC_2(&VAR_20->demux);

dvbdmx_error:
 FUNC_26(VAR_20);
 FUNC_8(&VAR_20->adapter);

adapter_error:
 FUNC_11(VAR_20);
 return VAR_21;
}
