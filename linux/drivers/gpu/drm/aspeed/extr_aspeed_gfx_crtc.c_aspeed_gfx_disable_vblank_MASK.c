
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_simple_display_pipe {int dummy; } ;
struct aspeed_gfx {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct aspeed_gfx* FUNC_0 (struct drm_simple_display_pipe*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct drm_simple_display_pipe *VAR_3)
{
 struct aspeed_gfx *VAR_4 = FUNC_0(VAR_3);
 u32 VAR_5 = FUNC_1(VAR_4->base + VAR_0);

 VAR_5 &= ~VAR_1;
 FUNC_2(VAR_5, VAR_4->base + VAR_0);


 FUNC_2(VAR_5 | VAR_2, VAR_4->base + VAR_0);
}
