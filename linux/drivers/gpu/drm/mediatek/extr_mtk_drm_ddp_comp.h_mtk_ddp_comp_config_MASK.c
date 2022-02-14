
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_ddp_comp {TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* config ) (struct mtk_ddp_comp*,unsigned int,unsigned int,unsigned int,unsigned int) ;} ;


 int FUNC_0 (struct mtk_ddp_comp*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct mtk_ddp_comp *VAR_0,
           unsigned int VAR_1, unsigned int VAR_2,
           unsigned int VAR_3, unsigned int VAR_4)
{
 if (VAR_0->funcs && VAR_0->funcs->config)
  VAR_0->funcs->config(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
