
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct screen_info {int lfb_depth; int lfb_linelength; int red_size; int red_pos; int green_size; int green_pos; int blue_size; int blue_pos; int rsvd_size; int rsvd_pos; int lfb_width; } ;
struct efi_pixel_bitmask {int reserved_mask; int blue_mask; int green_mask; int red_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*,int*) ;

__attribute__((used)) static void
FUNC_1(struct screen_info *VAR_3, u32 VAR_4,
   struct efi_pixel_bitmask VAR_5, int VAR_6)
{
 if (VAR_6 == VAR_2) {
  VAR_3->lfb_depth = 32;
  VAR_3->lfb_linelength = VAR_4 * 4;
  VAR_3->red_size = 8;
  VAR_3->red_pos = 0;
  VAR_3->green_size = 8;
  VAR_3->green_pos = 8;
  VAR_3->blue_size = 8;
  VAR_3->blue_pos = 16;
  VAR_3->rsvd_size = 8;
  VAR_3->rsvd_pos = 24;
 } else if (VAR_6 == VAR_0) {
  VAR_3->lfb_depth = 32;
  VAR_3->lfb_linelength = VAR_4 * 4;
  VAR_3->red_size = 8;
  VAR_3->red_pos = 16;
  VAR_3->green_size = 8;
  VAR_3->green_pos = 8;
  VAR_3->blue_size = 8;
  VAR_3->blue_pos = 0;
  VAR_3->rsvd_size = 8;
  VAR_3->rsvd_pos = 24;
 } else if (VAR_6 == VAR_1) {
  FUNC_0(VAR_5.red_mask, &VAR_3->red_pos, &VAR_3->red_size);
  FUNC_0(VAR_5.green_mask, &VAR_3->green_pos,
     &VAR_3->green_size);
  FUNC_0(VAR_5.blue_mask, &VAR_3->blue_pos, &VAR_3->blue_size);
  FUNC_0(VAR_5.reserved_mask, &VAR_3->rsvd_pos,
     &VAR_3->rsvd_size);
  VAR_3->lfb_depth = VAR_3->red_size + VAR_3->green_size +
   VAR_3->blue_size + VAR_3->rsvd_size;
  VAR_3->lfb_linelength = (VAR_4 * VAR_3->lfb_depth) / 8;
 } else {
  VAR_3->lfb_depth = 4;
  VAR_3->lfb_linelength = VAR_3->lfb_width / 2;
  VAR_3->red_size = 0;
  VAR_3->red_pos = 0;
  VAR_3->green_size = 0;
  VAR_3->green_pos = 0;
  VAR_3->blue_size = 0;
  VAR_3->blue_pos = 0;
  VAR_3->rsvd_size = 0;
  VAR_3->rsvd_pos = 0;
 }
}
