
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_complete_t ;
struct usb_device {int dummy; } ;
struct urb {int number_of_packets; int interval; TYPE_1__* iso_frame_desc; scalar_t__ actual_length; int transfer_flags; } ;
struct TYPE_2__ {int offset; int length; scalar_t__ actual_length; } ;


 int VAR_0 ;
 int FUNC_0 (struct urb*,struct usb_device*,unsigned int,void*,int,int ,void*) ;

__attribute__((used)) static void
FUNC_1(struct urb *VAR_1, struct usb_device *VAR_2, unsigned int VAR_3,
       void *VAR_4, int VAR_5, int VAR_6, int VAR_7,
       usb_complete_t VAR_8, void *VAR_9)
{
 int VAR_10;

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6 * VAR_5,
     VAR_8, VAR_9);

 VAR_1->number_of_packets = VAR_5;
 VAR_1->transfer_flags = VAR_0;
 VAR_1->actual_length = 0;
 VAR_1->interval = VAR_7;

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  VAR_1->iso_frame_desc[VAR_10].offset = VAR_6 * VAR_10;
  VAR_1->iso_frame_desc[VAR_10].length = VAR_6;
  VAR_1->iso_frame_desc[VAR_10].actual_length = 0;
 }
}
