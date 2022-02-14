
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g2d_data {int dev; } ;
struct g2d_buf_desc {scalar_t__ right_x; scalar_t__ stride; scalar_t__ bottom_y; int format; scalar_t__ top_y; scalar_t__ left_x; } ;
typedef enum g2d_reg_type { ____Placeholder_g2d_reg_type } g2d_reg_type ;


 int FUNC_0 (int ,char*,unsigned long,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct g2d_data *VAR_4,
     struct g2d_buf_desc *VAR_5,
     enum g2d_reg_type VAR_6,
     unsigned long VAR_7)
{
 int VAR_8, VAR_9;
 unsigned long VAR_10, VAR_11;





 if (VAR_6 != VAR_3 && VAR_6 != VAR_2)
  return 1;


 VAR_8 = (int)VAR_5->right_x - (int)VAR_5->left_x;
 if (VAR_8 < VAR_1 || VAR_8 > VAR_0) {
  FUNC_0(VAR_4->dev, "width[%d] is out of range!\n", VAR_8);
  return 0;
 }


 VAR_9 = (int)VAR_5->bottom_y - (int)VAR_5->top_y;
 if (VAR_9 < VAR_1 || VAR_9 > VAR_0) {
  FUNC_0(VAR_4->dev,
         "height[%d] is out of range!\n", VAR_9);
  return 0;
 }

 VAR_10 = FUNC_1(VAR_5->format);


 VAR_11 = ((unsigned long)VAR_5->bottom_y - 1) *
  (unsigned long)VAR_5->stride +
  (unsigned long)VAR_5->right_x * VAR_10 - 1;
 if (VAR_11 >= VAR_7) {
  FUNC_0(VAR_4->dev, "last engine access position [%lu] "
         "is out of range [%lu]!\n", VAR_11, VAR_7);
  return 0;
 }

 return 1;
}
