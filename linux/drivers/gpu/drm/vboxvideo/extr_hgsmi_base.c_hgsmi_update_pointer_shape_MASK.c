
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vbva_mouse_pointer_shape {int result; int flags; int hot_X; int hot_y; int width; int height; int data; } ;
struct gen_pool {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 struct vbva_mouse_pointer_shape* FUNC_0 (struct gen_pool*,int,int ,int ) ;
 int FUNC_1 (struct gen_pool*,struct vbva_mouse_pointer_shape*) ;
 int FUNC_2 (struct gen_pool*,struct vbva_mouse_pointer_shape*) ;
 int FUNC_3 (int ,int *,int) ;

int FUNC_4(struct gen_pool *VAR_7, u32 VAR_8,
          u32 VAR_9, u32 VAR_10, u32 VAR_11, u32 VAR_12,
          u8 *VAR_13, u32 VAR_14)
{
 struct vbva_mouse_pointer_shape *VAR_15;
 u32 VAR_16 = 0;
 int VAR_17;

 if (VAR_8 & VAR_4) {




  VAR_16 = ((((VAR_11 + 7) / 8) * VAR_12 + 3) & ~3) +
    VAR_11 * 4 * VAR_12;
  if (VAR_16 > VAR_14)
   return -VAR_1;





  VAR_8 |= VAR_5;
 }

 VAR_15 = FUNC_0(VAR_7, sizeof(*VAR_15) + VAR_16, VAR_3,
          VAR_6);
 if (!VAR_15)
  return -VAR_2;

 VAR_15->result = 128;
 VAR_15->flags = VAR_8;
 VAR_15->hot_X = VAR_9;
 VAR_15->hot_y = VAR_10;
 VAR_15->width = VAR_11;
 VAR_15->height = VAR_12;
 if (VAR_16)
  FUNC_3(VAR_15->data, VAR_13, VAR_16);

 FUNC_2(VAR_7, VAR_15);

 switch (VAR_15->result) {
 case 128:
  VAR_17 = 0;
  break;
 case 129:
  VAR_17 = -VAR_2;
  break;
 case 130:
  VAR_17 = -VAR_0;
  break;
 default:
  VAR_17 = -VAR_1;
 }

 FUNC_1(VAR_7, VAR_15);

 return VAR_17;
}
