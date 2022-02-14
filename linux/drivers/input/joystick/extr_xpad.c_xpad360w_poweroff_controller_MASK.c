
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpad_output_packet {int* data; int len; int pending; } ;
struct usb_xpad {int last_out_packet; int odata_lock; struct xpad_output_packet* out_packets; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct usb_xpad*) ;

__attribute__((used)) static void FUNC_3(struct usb_xpad *VAR_1)
{
 unsigned long VAR_2;
 struct xpad_output_packet *VAR_3 =
   &VAR_1->out_packets[VAR_0];

 FUNC_0(&VAR_1->odata_lock, VAR_2);

 VAR_3->data[0] = 0x00;
 VAR_3->data[1] = 0x00;
 VAR_3->data[2] = 0x08;
 VAR_3->data[3] = 0xC0;
 VAR_3->data[4] = 0x00;
 VAR_3->data[5] = 0x00;
 VAR_3->data[6] = 0x00;
 VAR_3->data[7] = 0x00;
 VAR_3->data[8] = 0x00;
 VAR_3->data[9] = 0x00;
 VAR_3->data[10] = 0x00;
 VAR_3->data[11] = 0x00;
 VAR_3->len = 12;
 VAR_3->pending = 1;


 VAR_1->last_out_packet = -1;
 FUNC_2(VAR_1);

 FUNC_1(&VAR_1->odata_lock, VAR_2);
}
