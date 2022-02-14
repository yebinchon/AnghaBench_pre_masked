
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_ddp_comp {TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* disable_vblank ) (struct mtk_ddp_comp*) ;} ;


 int FUNC_0 (struct mtk_ddp_comp*) ;

__attribute__((used)) static inline void FUNC_1(struct mtk_ddp_comp *VAR_0)
{
 if (VAR_0->funcs && VAR_0->funcs->disable_vblank)
  VAR_0->funcs->disable_vblank(VAR_0);
}
