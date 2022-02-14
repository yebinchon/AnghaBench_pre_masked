
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ next; } ;
struct smscore_device_t {int num_buffers; int entry; struct smscore_device_t* fw_buf; int common_buffer_phys; struct smscore_device_t* common_buffer; int common_buffer_size; int device; scalar_t__ usb_device; TYPE_1__ buffers; } ;
struct smscore_buffer_t {int num_buffers; int entry; struct smscore_buffer_t* fw_buf; int common_buffer_phys; struct smscore_buffer_t* common_buffer; int common_buffer_size; int device; scalar_t__ usb_device; TYPE_1__ buffers; } ;


 int FUNC_0 (int ,int ,struct smscore_device_t*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct smscore_device_t*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct smscore_device_t*) ;
 int FUNC_10 (struct smscore_device_t*,int *,int ) ;
 int FUNC_11 (struct smscore_device_t*) ;

void FUNC_12(struct smscore_device_t *VAR_1)
{
 struct smscore_buffer_t *VAR_2;
 int VAR_3 = 0;
 int VAR_4 = 0;

 FUNC_2(&VAR_0);


 FUNC_9(VAR_1);

 FUNC_11(VAR_1);
 FUNC_10(VAR_1, ((void*)0), 0);




 while (1) {
  while (!FUNC_5(&VAR_1->buffers)) {
   VAR_2 = (struct smscore_buffer_t *) VAR_1->buffers.next;
   FUNC_4(&VAR_2->entry);
   FUNC_1(VAR_2);
   VAR_3++;
  }
  if (VAR_3 == VAR_1->num_buffers)
   break;
  if (++VAR_4 > 10) {
   FUNC_8("exiting although not all buffers released.\n");
   break;
  }

  FUNC_7("waiting for %d buffer(s)\n",
    VAR_1->num_buffers - VAR_3);
  FUNC_3(&VAR_0);
  FUNC_6(100);
  FUNC_2(&VAR_0);
 }

 FUNC_7("freed %d buffers\n", VAR_3);

 if (VAR_1->common_buffer) {
  if (VAR_1->usb_device)
   FUNC_1(VAR_1->common_buffer);
  else
   FUNC_0(VAR_1->device,
       VAR_1->common_buffer_size,
       VAR_1->common_buffer,
       VAR_1->common_buffer_phys);
 }
 FUNC_1(VAR_1->fw_buf);

 FUNC_4(&VAR_1->entry);
 FUNC_1(VAR_1);

 FUNC_3(&VAR_0);

 FUNC_7("device %p destroyed\n", VAR_1);
}
