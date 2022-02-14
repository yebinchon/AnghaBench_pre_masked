
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vmpacket_descriptor {int type; int offset8; } ;
struct synth_kbd_msg_hdr {int dummy; } ;
struct synth_kbd_msg {int dummy; } ;
struct hv_device {int device; } ;




 int FUNC_0 (int *,char*,int,int ,int) ;
 int FUNC_1 (struct hv_device*,struct synth_kbd_msg*,int) ;

__attribute__((used)) static void FUNC_2(struct hv_device *VAR_0,
       struct vmpacket_descriptor *VAR_1,
       u32 VAR_2,
       u64 VAR_3)
{
 struct synth_kbd_msg *VAR_4;
 u32 VAR_5;

 switch (VAR_1->type) {
 case 129:
  break;

 case 128:
  VAR_5 = VAR_2 - (VAR_1->offset8 << 3);
  if (VAR_5 <= sizeof(struct synth_kbd_msg_hdr)) {




   FUNC_0(&VAR_0->device,
    "Illegal packet (type: %d, tid: %llx, size: %d)\n",
    VAR_1->type, VAR_3, VAR_5);
   break;
  }

  VAR_4 = (void *)VAR_1 + (VAR_1->offset8 << 3);
  FUNC_1(VAR_0, VAR_4, VAR_5);
  break;

 default:
  FUNC_0(&VAR_0->device,
   "unhandled packet type %d, tid %llx len %d\n",
   VAR_1->type, VAR_3, VAR_2);
  break;
 }
}
