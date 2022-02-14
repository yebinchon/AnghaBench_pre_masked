
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tpg_draw_params {unsigned int img_width; int wss_width; int wss_random_offset; int twopixsize; unsigned int left_pillar_width; unsigned int right_pillar_start; int sav_eav_f; scalar_t__ is_60hz; } ;
struct TYPE_4__ {int left; int width; } ;
struct TYPE_3__ {unsigned int left; unsigned int width; } ;
struct tpg_data {int src_width; scalar_t__ field; TYPE_2__ crop; TYPE_1__ border; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (struct tpg_data const*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(const struct tpg_data *VAR_2,
       unsigned VAR_3,
       struct tpg_draw_params *VAR_4)
{
 unsigned VAR_5 = 0;
 unsigned VAR_6 = VAR_4->img_width;

 VAR_4->wss_width = VAR_2->crop.left < VAR_2->src_width / 2 ?
  VAR_2->src_width / 2 - VAR_2->crop.left : 0;
 if (VAR_4->wss_width > VAR_2->crop.width)
  VAR_4->wss_width = VAR_2->crop.width;
 VAR_4->wss_width = FUNC_1(VAR_2, VAR_3, VAR_4->wss_width);
 VAR_4->wss_random_offset =
  VAR_4->twopixsize * FUNC_0(VAR_2->src_width / 2);

 if (VAR_2->crop.left < VAR_2->border.left) {
  VAR_5 = VAR_2->border.left - VAR_2->crop.left;
  if (VAR_5 > VAR_2->crop.width)
   VAR_5 = VAR_2->crop.width;
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_5);
 }
 VAR_4->left_pillar_width = VAR_5;

 if (VAR_2->crop.left + VAR_2->crop.width >
     VAR_2->border.left + VAR_2->border.width) {
  VAR_6 =
   VAR_2->border.left + VAR_2->border.width - VAR_2->crop.left;
  VAR_6 =
   FUNC_1(VAR_2, VAR_3, VAR_6);
  if (VAR_6 > VAR_4->img_width)
   VAR_6 = VAR_4->img_width;
 }
 VAR_4->right_pillar_start = VAR_6;

 VAR_4->sav_eav_f = VAR_2->field ==
   (VAR_4->is_60hz ? VAR_1 : VAR_0);
}
