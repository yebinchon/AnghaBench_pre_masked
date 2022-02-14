
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vmpacket_descriptor {int offset8; } ;
struct TYPE_6__ {int type; int size; } ;
struct synthhid_msg {TYPE_3__ header; } ;
struct TYPE_4__ {int size; } ;
struct synthhid_input_report {struct pipe_prt_msg* buffer; TYPE_1__ header; } ;
struct synthhid_device_info {int dummy; } ;
struct pipe_prt_msg {scalar_t__ type; int size; scalar_t__ data; } ;
struct mousevsc_prt_msg {int dummy; } ;
struct mousevsc_dev {TYPE_2__* device; int * input_buf; int hid_device; int init_complete; int wait_event; int protocol_resp; } ;
struct hv_input_dev_info {int dummy; } ;
struct hv_device {int dummy; } ;
struct TYPE_5__ {int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int *,size_t,int) ;
 struct mousevsc_dev* FUNC_3 (struct hv_device*) ;
 int FUNC_4 (int *,struct pipe_prt_msg*,size_t) ;
 size_t FUNC_5 (int ,int ) ;
 int FUNC_6 (struct mousevsc_dev*,struct synthhid_device_info*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,int ) ;

__attribute__((used)) static void FUNC_9(struct hv_device *VAR_2,
    struct vmpacket_descriptor *VAR_3)
{
 struct pipe_prt_msg *VAR_4;
 struct synthhid_msg *VAR_5;
 struct mousevsc_dev *VAR_6 = FUNC_3(VAR_2);
 struct synthhid_input_report *VAR_7;
 size_t VAR_8;

 VAR_4 = (struct pipe_prt_msg *)((unsigned long)VAR_3 +
      (VAR_3->offset8 << 3));

 if (VAR_4->type != VAR_1)
  return;

 VAR_5 = (struct synthhid_msg *)VAR_4->data;

 switch (VAR_5->header.type) {
 case 128:





  if ((VAR_4->size + sizeof(struct pipe_prt_msg)
   - sizeof(unsigned char))
   > sizeof(struct mousevsc_prt_msg)) {
   FUNC_0(1);
   break;
  }

  FUNC_4(&VAR_6->protocol_resp, VAR_4,
         VAR_4->size + sizeof(struct pipe_prt_msg) -
         sizeof(unsigned char));
  FUNC_1(&VAR_6->wait_event);
  break;

 case 130:
  FUNC_0(VAR_4->size < sizeof(struct hv_input_dev_info));





  FUNC_6(VAR_6,
   (struct synthhid_device_info *)VAR_4->data);
  break;
 case 129:
  VAR_7 =
   (struct synthhid_input_report *)VAR_4->data;
  if (!VAR_6->init_complete)
   break;

  VAR_8 = FUNC_5(VAR_7->header.size,
     (u32)sizeof(VAR_6->input_buf));
  FUNC_4(VAR_6->input_buf, VAR_7->buffer, VAR_8);
  FUNC_2(VAR_6->hid_device, VAR_0,
     VAR_6->input_buf, VAR_8, 1);

  FUNC_7(&VAR_6->device->device);

  break;
 default:
  FUNC_8("unsupported hid msg type - type %d len %d\n",
         VAR_5->header.type, VAR_5->header.size);
  break;
 }

}
