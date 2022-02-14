
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct synth_kbd_protocol_response {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct synth_kbd_msg {TYPE_1__ header; } ;
struct synth_kbd_keystroke {int make_code; int info; } ;
struct hv_kbd_dev {int lock; int hv_serio; int started; int wait_event; int protocol_resp; } ;
struct hv_device {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 struct hv_kbd_dev* FUNC_4 (struct hv_device*) ;
 int FUNC_5 (int *,struct synth_kbd_msg*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct hv_device *VAR_6,
         struct synth_kbd_msg *VAR_7, u32 VAR_8)
{
 struct hv_kbd_dev *VAR_9 = FUNC_4(VAR_6);
 struct synth_kbd_keystroke *VAR_10;
 unsigned long VAR_11;
 u32 VAR_12 = FUNC_1(VAR_7->header.type);
 u32 VAR_13;
 u16 VAR_14;

 switch (VAR_12) {
 case 128:






  if (VAR_8 < sizeof(struct synth_kbd_protocol_response)) {
   FUNC_3(&VAR_6->device,
    "Illegal protocol response packet (len: %d)\n",
    VAR_8);
   break;
  }

  FUNC_5(&VAR_9->protocol_resp, VAR_7,
   sizeof(struct synth_kbd_protocol_response));
  FUNC_2(&VAR_9->wait_event);
  break;

 case 129:






  if (VAR_8 < sizeof(struct synth_kbd_keystroke)) {
   FUNC_3(&VAR_6->device,
    "Illegal keyboard event packet (len: %d)\n",
    VAR_8);
   break;
  }

  VAR_10 = (struct synth_kbd_keystroke *)VAR_7;
  VAR_13 = FUNC_1(VAR_10->info);




  FUNC_8(&VAR_9->lock, VAR_11);
  if (VAR_9->started) {
   if (VAR_13 & VAR_1)
    FUNC_7(VAR_9->hv_serio,
      VAR_3, 0);
   if (VAR_13 & VAR_2)
    FUNC_7(VAR_9->hv_serio,
      VAR_4, 0);
   VAR_14 = FUNC_0(VAR_10->make_code);
   if (VAR_13 & VAR_0)
    VAR_14 |= VAR_5;

   FUNC_7(VAR_9->hv_serio, VAR_14, 0);
  }
  FUNC_9(&VAR_9->lock, VAR_11);






  if (!(VAR_13 & VAR_0))
   FUNC_6(&VAR_6->device);

  break;

 default:
  FUNC_3(&VAR_6->device,
   "unhandled message type %d\n", VAR_12);
 }
}
