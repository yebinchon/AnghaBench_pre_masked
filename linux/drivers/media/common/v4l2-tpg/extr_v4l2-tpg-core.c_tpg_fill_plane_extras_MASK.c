
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_rect {unsigned int top; unsigned int height; scalar_t__ left; scalar_t__ width; } ;
struct tpg_draw_params {unsigned int twopixsize; unsigned int img_width; unsigned int frame_line; unsigned int wss_width; int wss_random_offset; unsigned int left_pillar_width; unsigned int right_pillar_start; int sav_eav_f; int is_60hz; scalar_t__ is_tv; } ;
struct TYPE_2__ {int width; } ;
struct tpg_data {int** random_line; int** contrast_line; scalar_t__ qual; int** black_line; TYPE_1__ compose; scalar_t__ insert_eav; scalar_t__ insert_sav; scalar_t__ show_square; scalar_t__ show_border; struct v4l2_rect crop; struct v4l2_rect border; struct v4l2_rect square; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,int*,unsigned int) ;
 unsigned int FUNC_1 (struct tpg_data const*,unsigned int,int) ;
 unsigned int FUNC_2 (struct tpg_data const*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(const struct tpg_data *VAR_1,
      const struct tpg_draw_params *VAR_2,
      unsigned VAR_3, unsigned VAR_4, u8 *VAR_5)
{
 unsigned VAR_6 = VAR_2->twopixsize;
 unsigned VAR_7 = VAR_2->img_width;
 unsigned VAR_8 = VAR_2->frame_line;
 const struct v4l2_rect *VAR_9 = &VAR_1->square;
 const struct v4l2_rect *VAR_10 = &VAR_1->border;
 const struct v4l2_rect *VAR_11 = &VAR_1->crop;

 if (VAR_2->is_tv && !VAR_2->is_60hz &&
     VAR_8 == 0 && VAR_2->wss_width) {




  u8 *VAR_12 = VAR_1->random_line[VAR_3] + VAR_2->wss_random_offset;

  FUNC_0(VAR_5, VAR_12, VAR_2->wss_width);
 }

 if (VAR_1->show_border && VAR_8 >= VAR_10->top &&
     VAR_8 < VAR_10->top + VAR_10->height) {
  unsigned VAR_13 = VAR_10->top + VAR_10->height - 1;
  unsigned VAR_14 = VAR_2->left_pillar_width;
  unsigned VAR_15 = VAR_2->right_pillar_start;

  if (VAR_8 == VAR_10->top || VAR_8 == VAR_10->top + 1 ||
      VAR_8 == VAR_13 || VAR_8 == VAR_13 - 1) {
   FUNC_0(VAR_5 + VAR_14, VAR_1->contrast_line[VAR_3],
     VAR_15 - VAR_14);
  } else {
   if (VAR_10->left >= VAR_11->left &&
       VAR_10->left < VAR_11->left + VAR_11->width)
    FUNC_0(VAR_5 + VAR_14,
     VAR_1->contrast_line[VAR_3], VAR_6);
   if (VAR_10->left + VAR_10->width > VAR_11->left &&
       VAR_10->left + VAR_10->width <= VAR_11->left + VAR_11->width)
    FUNC_0(VAR_5 + VAR_15 - VAR_6,
     VAR_1->contrast_line[VAR_3], VAR_6);
  }
 }
 if (VAR_1->qual != VAR_0 && VAR_8 >= VAR_10->top &&
     VAR_8 < VAR_10->top + VAR_10->height) {
  FUNC_0(VAR_5, VAR_1->black_line[VAR_3], VAR_2->left_pillar_width);
  FUNC_0(VAR_5 + VAR_2->right_pillar_start, VAR_1->black_line[VAR_3],
         VAR_7 - VAR_2->right_pillar_start);
 }
 if (VAR_1->show_square && VAR_8 >= VAR_9->top &&
     VAR_8 < VAR_9->top + VAR_9->height &&
     VAR_9->left < VAR_11->left + VAR_11->width &&
     VAR_9->left + VAR_9->width >= VAR_11->left) {
  unsigned VAR_16 = VAR_9->left;
  unsigned VAR_17 = VAR_9->width;

  if (VAR_11->left > VAR_16) {
   VAR_17 -= VAR_11->left - VAR_16;
   VAR_16 = VAR_11->left;
  }
  if (VAR_11->left + VAR_11->width < VAR_16 + VAR_17)
   VAR_17 -= VAR_16 + VAR_17 - VAR_11->left - VAR_11->width;
  VAR_16 -= VAR_11->left;
  VAR_16 = FUNC_2(VAR_1, VAR_3, VAR_16);
  VAR_17 = FUNC_2(VAR_1, VAR_3, VAR_17);
  FUNC_0(VAR_5 + VAR_16, VAR_1->contrast_line[VAR_3], VAR_17);
 }
 if (VAR_1->insert_sav) {
  unsigned VAR_18 = FUNC_1(VAR_1, VAR_3, VAR_1->compose.width / 3);
  u8 *VAR_19 = VAR_5 + VAR_18;
  unsigned VAR_20 = 0, VAR_21 = 0;

  VAR_19[0] = 0xff;
  VAR_19[1] = 0;
  VAR_19[2] = 0;
  VAR_19[3] = 0x80 | (VAR_2->sav_eav_f << 6) |
   (VAR_20 << 5) | (VAR_21 << 4) |
   ((VAR_21 ^ VAR_20) << 3) |
   ((VAR_21 ^ VAR_2->sav_eav_f) << 2) |
   ((VAR_2->sav_eav_f ^ VAR_20) << 1) |
   (VAR_21 ^ VAR_20 ^ VAR_2->sav_eav_f);
 }
 if (VAR_1->insert_eav) {
  unsigned VAR_22 = FUNC_1(VAR_1, VAR_3, VAR_1->compose.width * 2 / 3);
  u8 *VAR_23 = VAR_5 + VAR_22;
  unsigned VAR_24 = 0, VAR_25 = 1;

  VAR_23[0] = 0xff;
  VAR_23[1] = 0;
  VAR_23[2] = 0;
  VAR_23[3] = 0x80 | (VAR_2->sav_eav_f << 6) |
   (VAR_24 << 5) | (VAR_25 << 4) |
   ((VAR_25 ^ VAR_24) << 3) |
   ((VAR_25 ^ VAR_2->sav_eav_f) << 2) |
   ((VAR_2->sav_eav_f ^ VAR_24) << 1) |
   (VAR_25 ^ VAR_24 ^ VAR_2->sav_eav_f);
 }
}
