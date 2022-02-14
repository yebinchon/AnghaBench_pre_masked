
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ims_pcu {int* urb_out_buf; int max_out_size; int ack_id; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (struct ims_pcu*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct ims_pcu *VAR_3,
    u8 VAR_4, const u8 *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 u8 VAR_12 = 0;
 u8 VAR_13;

 VAR_3->urb_out_buf[VAR_7++] = VAR_2;


 VAR_3->urb_out_buf[VAR_7++] = VAR_4;
 VAR_12 += VAR_4;

 VAR_13 = VAR_3->ack_id++;
 if (VAR_13 == 0xff)
  VAR_13 = VAR_3->ack_id++;

 if (FUNC_0(VAR_13))
  VAR_3->urb_out_buf[VAR_7++] = VAR_0;

 VAR_3->urb_out_buf[VAR_7++] = VAR_13;
 VAR_12 += VAR_13;

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {

  VAR_9 = FUNC_0(VAR_5[VAR_10]) ? 2 : 1;
  if (VAR_7 + VAR_9 >= VAR_3->max_out_size) {
   VAR_11 = FUNC_1(VAR_3, VAR_4,
             ++VAR_8, VAR_7);
   if (VAR_11)
    return VAR_11;

   VAR_7 = 0;
  }

  if (VAR_9 == 2)
   VAR_3->urb_out_buf[VAR_7++] = VAR_0;

  VAR_3->urb_out_buf[VAR_7++] = VAR_5[VAR_10];
  VAR_12 += VAR_5[VAR_10];
 }

 VAR_12 = 1 + ~VAR_12;

 VAR_9 = FUNC_0(VAR_12) ? 3 : 2;
 if (VAR_7 + VAR_9 >= VAR_3->max_out_size) {
  VAR_11 = FUNC_1(VAR_3, VAR_4, ++VAR_8, VAR_7);
  if (VAR_11)
   return VAR_11;

  VAR_7 = 0;
 }

 if (VAR_9 == 3)
  VAR_3->urb_out_buf[VAR_7++] = VAR_0;

 VAR_3->urb_out_buf[VAR_7++] = VAR_12;
 VAR_3->urb_out_buf[VAR_7++] = VAR_1;

 return FUNC_1(VAR_3, VAR_4, ++VAR_8, VAR_7);
}
