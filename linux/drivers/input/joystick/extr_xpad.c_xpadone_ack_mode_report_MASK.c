
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xpad_output_packet {int len; int* data; int pending; } ;
struct usb_xpad {int last_out_packet; int odata_lock; struct xpad_output_packet* out_packets; } ;
typedef int mode_report_ack ;


 size_t VAR_0 ;
 int FUNC_0 (int*,int const*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct usb_xpad*) ;

__attribute__((used)) static void FUNC_4(struct usb_xpad *VAR_1, u8 VAR_2)
{
 unsigned long VAR_3;
 struct xpad_output_packet *VAR_4 =
   &VAR_1->out_packets[VAR_0];
 static const u8 VAR_5[] = {
  0x01, 0x20, 0x00, 0x09, 0x00, 0x07, 0x20, 0x02,
  0x00, 0x00, 0x00, 0x00, 0x00
 };

 FUNC_1(&VAR_1->odata_lock, VAR_3);

 VAR_4->len = sizeof(VAR_5);
 FUNC_0(VAR_4->data, VAR_5, VAR_4->len);
 VAR_4->data[2] = VAR_2;
 VAR_4->pending = 1;


 VAR_1->last_out_packet = -1;
 FUNC_3(VAR_1);

 FUNC_2(&VAR_1->odata_lock, VAR_3);
}
