
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct synth_kbd_protocol_response {int proto_status; } ;
struct TYPE_4__ {void* version; } ;
struct TYPE_3__ {void* type; } ;
struct synth_kbd_protocol_request {TYPE_2__ version_requested; TYPE_1__ header; } ;
struct hv_kbd_dev {struct synth_kbd_protocol_response protocol_resp; int wait_event; struct synth_kbd_protocol_request protocol_req; } ;
struct hv_device {int device; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ) ;
 struct hv_kbd_dev* FUNC_3 (struct hv_device*) ;
 int FUNC_4 (struct synth_kbd_protocol_request*,int ,int) ;
 int FUNC_5 (int ,struct synth_kbd_protocol_request*,int,unsigned long,int ,int ) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(struct hv_device *VAR_8)
{
 struct hv_kbd_dev *VAR_9 = FUNC_3(VAR_8);
 struct synth_kbd_protocol_request *VAR_10;
 struct synth_kbd_protocol_response *VAR_11;
 u32 VAR_12;
 int VAR_13;

 VAR_10 = &VAR_9->protocol_req;
 FUNC_4(VAR_10, 0, sizeof(struct synth_kbd_protocol_request));
 VAR_10->header.type = FUNC_0(VAR_4);
 VAR_10->version_requested.version = FUNC_0(VAR_5);

 VAR_13 = FUNC_5(VAR_8->channel, VAR_10,
     sizeof(struct synth_kbd_protocol_request),
     (unsigned long)VAR_10,
     VAR_7,
     VAR_6);
 if (VAR_13)
  return VAR_13;

 if (!FUNC_6(&VAR_9->wait_event, 10 * VAR_2))
  return -VAR_1;

 VAR_11 = &VAR_9->protocol_resp;
 VAR_12 = FUNC_1(VAR_11->proto_status);
 if (!(VAR_12 & VAR_3)) {
  FUNC_2(&VAR_8->device,
   "synth_kbd protocol request failed (version %d)\n",
          VAR_5);
  return -VAR_0;
 }

 return 0;
}
