
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef void* u16 ;
struct vbva_infoscreen {void* flags; void* bits_per_pixel; void* height; void* width; void* line_size; void* start_offset; void* origin_y; void* origin_x; void* view_index; } ;
struct gen_pool {int dummy; } ;
typedef void* s32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct vbva_infoscreen* FUNC_0 (struct gen_pool*,int,int ,int ) ;
 int FUNC_1 (struct gen_pool*,struct vbva_infoscreen*) ;
 int FUNC_2 (struct gen_pool*,struct vbva_infoscreen*) ;

void FUNC_3(struct gen_pool *VAR_2, u32 VAR_3,
    s32 VAR_4, s32 VAR_5, u32 VAR_6,
    u32 VAR_7, u32 VAR_8, u32 VAR_9,
    u16 VAR_10, u16 VAR_11)
{
 struct vbva_infoscreen *VAR_12;

 VAR_12 = FUNC_0(VAR_2, sizeof(*VAR_12), VAR_0,
          VAR_1);
 if (!VAR_12)
  return;

 VAR_12->view_index = VAR_3;
 VAR_12->origin_x = VAR_4;
 VAR_12->origin_y = VAR_5;
 VAR_12->start_offset = VAR_6;
 VAR_12->line_size = VAR_7;
 VAR_12->width = VAR_8;
 VAR_12->height = VAR_9;
 VAR_12->bits_per_pixel = VAR_10;
 VAR_12->flags = VAR_11;

 FUNC_2(VAR_2, VAR_12);
 FUNC_1(VAR_2, VAR_12);
}
