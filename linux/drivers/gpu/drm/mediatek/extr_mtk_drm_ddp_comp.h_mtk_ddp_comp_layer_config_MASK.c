
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_plane_state {int dummy; } ;
struct mtk_ddp_comp {TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* layer_config ) (struct mtk_ddp_comp*,unsigned int,struct mtk_plane_state*) ;} ;


 int FUNC_0 (struct mtk_ddp_comp*,unsigned int,struct mtk_plane_state*) ;

__attribute__((used)) static inline void FUNC_1(struct mtk_ddp_comp *VAR_0,
          unsigned int VAR_1,
          struct mtk_plane_state *VAR_2)
{
 if (VAR_0->funcs && VAR_0->funcs->layer_config)
  VAR_0->funcs->layer_config(VAR_0, VAR_1, VAR_2);
}
