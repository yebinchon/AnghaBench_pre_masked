
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_rect {int width; int height; int top; int left; } ;
struct ipu_csi {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ipu_csi*,int ) ;
 int FUNC_1 (struct ipu_csi*,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct ipu_csi *VAR_6, struct v4l2_rect *VAR_7)
{
 unsigned long VAR_8;
 u32 VAR_9;

 FUNC_2(&VAR_6->lock, VAR_8);

 FUNC_1(VAR_6, (VAR_7->width - 1) | ((VAR_7->height - 1) << 16),
     VAR_0);

 VAR_9 = FUNC_0(VAR_6, VAR_3);
 VAR_9 &= ~(VAR_1 | VAR_4);
 VAR_9 |= ((VAR_7->top << VAR_5) | (VAR_7->left << VAR_2));
 FUNC_1(VAR_6, VAR_9, VAR_3);

 FUNC_3(&VAR_6->lock, VAR_8);
}
