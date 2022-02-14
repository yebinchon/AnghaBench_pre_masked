
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_rect {int width; int height; int left; int top; } ;
struct ipu_csi {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ipu_csi*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct ipu_csi *VAR_6, struct v4l2_rect *VAR_7)
{
 unsigned long VAR_8;
 u32 VAR_9;

 FUNC_1(&VAR_6->lock, VAR_8);

 VAR_9 = FUNC_0(VAR_6, VAR_0);
 VAR_7->width = (VAR_9 & 0xFFFF) + 1;
 VAR_7->height = (VAR_9 >> 16 & 0xFFFF) + 1;

 VAR_9 = FUNC_0(VAR_6, VAR_3);
 VAR_7->left = (VAR_9 & VAR_1) >> VAR_2;
 VAR_7->top = (VAR_9 & VAR_4) >> VAR_5;

 FUNC_2(&VAR_6->lock, VAR_8);
}
