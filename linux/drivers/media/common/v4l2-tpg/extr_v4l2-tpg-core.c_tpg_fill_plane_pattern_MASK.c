
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct tpg_draw_params {unsigned int twopixsize; unsigned int img_width; unsigned int mv_hor_old; unsigned int mv_hor_new; unsigned int mv_vert_old; unsigned int mv_vert_new; unsigned int frame_line; unsigned int frame_line_next; unsigned int hmax; scalar_t__ is_60hz; } ;
struct TYPE_6__ {unsigned int top; unsigned int height; } ;
struct TYPE_5__ {scalar_t__ height; } ;
struct TYPE_4__ {int left; } ;
struct tpg_data {unsigned int src_height; scalar_t__ qual; scalar_t__ pattern; int src_width; int* vdownsampling; int field; scalar_t__ field_alternate; int ** downsampled_lines; int *** lines; int ** random_line; int ** black_line; TYPE_3__ border; int ** contrast_line; scalar_t__ vflip; int perc_fill_blank; TYPE_2__ compose; TYPE_1__ crop; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,unsigned int) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (struct tpg_data const*,unsigned int) ;
 unsigned int FUNC_3 (struct tpg_data const*,unsigned int,int ) ;
 int FUNC_4 (struct tpg_data const*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(const struct tpg_data *VAR_2,
       const struct tpg_draw_params *VAR_3,
       unsigned VAR_4, unsigned VAR_5, u8 *VAR_6)
{
 unsigned VAR_7 = VAR_3->twopixsize;
 unsigned VAR_8 = VAR_3->img_width;
 unsigned VAR_9 = VAR_3->mv_hor_old;
 unsigned VAR_10 = VAR_3->mv_hor_new;
 unsigned VAR_11 = VAR_3->mv_vert_old;
 unsigned VAR_12 = VAR_3->mv_vert_new;
 unsigned VAR_13 = VAR_3->frame_line;
 unsigned VAR_14 = VAR_3->frame_line_next;
 unsigned VAR_15 = FUNC_3(VAR_2, VAR_4, VAR_2->crop.left);
 bool VAR_16;
 bool VAR_17 = 0;
 unsigned VAR_18;
 unsigned VAR_19;
 u8 *VAR_20;
 u8 *VAR_21;
 u8 *VAR_22;
 u8 *VAR_23;

 VAR_16 = !(VAR_13 & 1);

 if (VAR_5 >= VAR_3->hmax) {
  if (VAR_3->hmax == VAR_2->compose.height)
   return;
  if (!VAR_2->perc_fill_blank)
   return;
  VAR_17 = 1;
 }

 if (VAR_2->vflip) {
  VAR_13 = VAR_2->src_height - VAR_13 - 1;
  VAR_14 = VAR_2->src_height - VAR_14 - 1;
 }

 if (VAR_17) {
  VAR_20 = VAR_2->contrast_line[VAR_4];
  VAR_21 = VAR_2->contrast_line[VAR_4];
 } else if (VAR_2->qual != VAR_1 &&
     (VAR_13 < VAR_2->border.top ||
      VAR_13 >= VAR_2->border.top + VAR_2->border.height)) {
  VAR_20 = VAR_2->black_line[VAR_4];
  VAR_21 = VAR_2->black_line[VAR_4];
 } else if (VAR_2->pattern == VAR_0 || VAR_2->qual == VAR_1) {
  VAR_20 = VAR_2->random_line[VAR_4] +
      VAR_7 * FUNC_1(VAR_2->src_width / 2);
  VAR_21 = VAR_2->random_line[VAR_4] +
      VAR_7 * FUNC_1(VAR_2->src_width / 2);
 } else {
  unsigned VAR_24 =
   (VAR_13 + VAR_11) % VAR_2->src_height;
  unsigned VAR_25 =
   (VAR_13 + VAR_12) % VAR_2->src_height;
  unsigned VAR_26;
  unsigned VAR_27;

  VAR_18 = FUNC_2(VAR_2, VAR_24);
  VAR_19 = FUNC_2(VAR_2, VAR_25);
  VAR_20 = VAR_2->lines[VAR_18][VAR_4] + VAR_9;
  VAR_21 = VAR_2->lines[VAR_19][VAR_4] + VAR_10;

  if (VAR_2->vdownsampling[VAR_4] > 1 && VAR_13 != VAR_14) {
   int VAR_28;





   VAR_26 = FUNC_2(VAR_2,
     (VAR_14 + VAR_11) % VAR_2->src_height);
   VAR_27 = FUNC_2(VAR_2,
     (VAR_14 + VAR_12) % VAR_2->src_height);

   switch (VAR_2->field) {
   case 134:
   case 133:
   case 132:
    VAR_28 = FUNC_4(VAR_2, VAR_18, VAR_19);
    if (VAR_28 < 0)
     break;
    VAR_20 = VAR_2->downsampled_lines[VAR_28][VAR_4] + VAR_9;
    VAR_21 = VAR_20;
    break;
   case 131:
   case 128:
   case 135:
   case 130:
   case 129:
    VAR_28 = FUNC_4(VAR_2, VAR_18, VAR_26);
    if (VAR_28 >= 0)
     VAR_20 = VAR_2->downsampled_lines[VAR_28][VAR_4] +
      VAR_9;
    VAR_28 = FUNC_4(VAR_2, VAR_19, VAR_27);
    if (VAR_28 >= 0)
     VAR_21 = VAR_2->downsampled_lines[VAR_28][VAR_4] +
      VAR_10;
    break;
   }
  }
  VAR_20 += VAR_15;
  VAR_21 += VAR_15;
 }
 if (VAR_2->field_alternate) {
  VAR_22 = VAR_23 = VAR_20;
 } else if (VAR_3->is_60hz) {
  VAR_22 = VAR_21;
  VAR_23 = VAR_20;
 } else {
  VAR_22 = VAR_20;
  VAR_23 = VAR_21;
 }

 switch (VAR_2->field) {
 case 134:
 case 132:
 case 129:
 case 130:
  if (VAR_16)
   FUNC_0(VAR_6, VAR_22, VAR_8);
  else
   FUNC_0(VAR_6, VAR_23, VAR_8);
  break;
 case 133:
  if (VAR_16)
   FUNC_0(VAR_6, VAR_23, VAR_8);
  else
   FUNC_0(VAR_6, VAR_22, VAR_8);
  break;
 case 128:
  FUNC_0(VAR_6, VAR_22, VAR_8);
  break;
 case 135:
  FUNC_0(VAR_6, VAR_23, VAR_8);
  break;
 case 131:
 default:
  FUNC_0(VAR_6, VAR_20, VAR_8);
  break;
 }
}
