
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int left; unsigned int width; unsigned int top; unsigned int height; } ;
struct TYPE_3__ {unsigned int width; unsigned int left; unsigned int height; unsigned int top; } ;
struct tpg_data {unsigned int src_width; unsigned int src_height; int vid_aspect; scalar_t__ pix_aspect; TYPE_2__ border; TYPE_1__ square; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;



__attribute__((used)) static void FUNC_0(struct tpg_data *VAR_3)
{
 unsigned VAR_4 = VAR_3->src_width;
 unsigned VAR_5 = VAR_3->src_height;
 unsigned VAR_6, VAR_7;

 VAR_6 = (VAR_4 * 2 / 5) & ~1;
 if (((VAR_4 - VAR_6) / 2) & 1)
  VAR_6 += 2;
 VAR_7 = VAR_6;
 VAR_3->square.width = VAR_6;
 if (VAR_3->vid_aspect == VAR_2) {
  unsigned VAR_8 = (VAR_6 / 4) * 3;

  if (((VAR_4 - VAR_8) / 2) & 1)
   VAR_8 += 2;
  VAR_3->square.width = VAR_8;
 }
 VAR_3->square.left = (VAR_4 - VAR_3->square.width) / 2;
 if (VAR_3->pix_aspect == VAR_0)
  VAR_7 = VAR_6 * 10 / 11;
 else if (VAR_3->pix_aspect == VAR_1)
  VAR_7 = VAR_6 * 59 / 54;
 VAR_3->square.height = VAR_7;
 VAR_3->square.top = (VAR_5 - VAR_7) / 2;
 VAR_3->border.left = 0;
 VAR_3->border.width = VAR_4;
 VAR_3->border.top = 0;
 VAR_3->border.height = VAR_5;
 switch (VAR_3->vid_aspect) {
 case 128:
  if (VAR_3->pix_aspect)
   return;
  if (3 * VAR_4 >= 4 * VAR_5) {
   VAR_3->border.width = ((4 * VAR_5) / 3) & ~1;
   if (((VAR_4 - VAR_3->border.width) / 2) & ~1)
    VAR_3->border.width -= 2;
   VAR_3->border.left = (VAR_4 - VAR_3->border.width) / 2;
   break;
  }
  VAR_3->border.height = ((3 * VAR_4) / 4) & ~1;
  VAR_3->border.top = (VAR_5 - VAR_3->border.height) / 2;
  break;
 case 130:
  if (VAR_3->pix_aspect) {
   VAR_3->border.height = VAR_3->pix_aspect == VAR_0 ? 420 : 506;
   VAR_3->border.top = (VAR_5 - VAR_3->border.height) / 2;
   break;
  }
  if (9 * VAR_4 >= 14 * VAR_5) {
   VAR_3->border.width = ((14 * VAR_5) / 9) & ~1;
   if (((VAR_4 - VAR_3->border.width) / 2) & ~1)
    VAR_3->border.width -= 2;
   VAR_3->border.left = (VAR_4 - VAR_3->border.width) / 2;
   break;
  }
  VAR_3->border.height = ((9 * VAR_4) / 14) & ~1;
  VAR_3->border.top = (VAR_5 - VAR_3->border.height) / 2;
  break;
 case 129:
  if (VAR_3->pix_aspect) {
   VAR_3->border.height = VAR_3->pix_aspect == VAR_0 ? 368 : 442;
   VAR_3->border.top = (VAR_5 - VAR_3->border.height) / 2;
   break;
  }
  if (9 * VAR_4 >= 16 * VAR_5) {
   VAR_3->border.width = ((16 * VAR_5) / 9) & ~1;
   if (((VAR_4 - VAR_3->border.width) / 2) & ~1)
    VAR_3->border.width -= 2;
   VAR_3->border.left = (VAR_4 - VAR_3->border.width) / 2;
   break;
  }
  VAR_3->border.height = ((9 * VAR_4) / 16) & ~1;
  VAR_3->border.top = (VAR_5 - VAR_3->border.height) / 2;
  break;
 default:
  break;
 }
}
