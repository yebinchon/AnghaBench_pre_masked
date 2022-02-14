
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* man; } ;
struct vmw_private {int reservation_sem; int svga_lock; TYPE_2__ bdev; int dev; } ;
struct TYPE_3__ {int use_type; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,size_t) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct vmw_private*,int ,int) ;

void FUNC_8(struct vmw_private *VAR_4)
{
 FUNC_6(VAR_4->dev);
 FUNC_4(&VAR_4->reservation_sem, 0);
 FUNC_1(&VAR_4->svga_lock);
 if (VAR_4->bdev.man[VAR_3].use_type) {
  VAR_4->bdev.man[VAR_3].use_type = 0;
  FUNC_2(&VAR_4->svga_lock);
  if (FUNC_3(&VAR_4->bdev, VAR_3))
   FUNC_0("Failed evicting VRAM buffers.\n");
  FUNC_7(VAR_4, VAR_0,
     VAR_2 |
     VAR_1);
 } else
  FUNC_2(&VAR_4->svga_lock);
 FUNC_5(&VAR_4->reservation_sem);
}
