
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* man; } ;
struct vmw_private {int svga_lock; TYPE_2__ bdev; } ;
struct TYPE_3__ {int use_type; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vmw_private*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct vmw_private *VAR_2)
{
 FUNC_0(&VAR_2->svga_lock);
 if (!VAR_2->bdev.man[VAR_1].use_type) {
  FUNC_2(VAR_2, VAR_0, VAR_0);
  VAR_2->bdev.man[VAR_1].use_type = 1;
 }
 FUNC_1(&VAR_2->svga_lock);
}
