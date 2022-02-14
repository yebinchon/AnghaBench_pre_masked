
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct urb {int actual_length; } ;
struct ims_pcu {int* urb_in_buf; int have_stx; int have_dle; int* read_buf; int check_sum; scalar_t__ read_pos; int dev; } ;


 scalar_t__ VAR_0 ;



 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct ims_pcu*) ;

__attribute__((used)) static void FUNC_2(struct ims_pcu *VAR_1, struct urb *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->actual_length; VAR_3++) {
  u8 VAR_4 = VAR_1->urb_in_buf[VAR_3];


  if (!VAR_1->have_stx && VAR_4 != 128)
   continue;

  if (VAR_1->have_dle) {
   VAR_1->have_dle = 0;
   VAR_1->read_buf[VAR_1->read_pos++] = VAR_4;
   VAR_1->check_sum += VAR_4;
   continue;
  }

  switch (VAR_4) {
  case 128:
   if (VAR_1->have_stx)
    FUNC_0(VAR_1->dev,
      "Unexpected STX at byte %d, discarding old data\n",
      VAR_1->read_pos);
   VAR_1->have_stx = 1;
   VAR_1->have_dle = 0;
   VAR_1->read_pos = 0;
   VAR_1->check_sum = 0;
   break;

  case 130:
   VAR_1->have_dle = 1;
   break;

  case 129:
   if (VAR_1->read_pos < VAR_0) {
    FUNC_0(VAR_1->dev,
      "Short packet received (%d bytes), ignoring\n",
      VAR_1->read_pos);
   } else if (VAR_1->check_sum != 0) {
    FUNC_0(VAR_1->dev,
      "Invalid checksum in packet (%d bytes), ignoring\n",
      VAR_1->read_pos);
   } else {
    FUNC_1(VAR_1);
   }

   VAR_1->have_stx = 0;
   VAR_1->have_dle = 0;
   VAR_1->read_pos = 0;
   break;

  default:
   VAR_1->read_buf[VAR_1->read_pos++] = VAR_4;
   VAR_1->check_sum += VAR_4;
   break;
  }
 }
}
