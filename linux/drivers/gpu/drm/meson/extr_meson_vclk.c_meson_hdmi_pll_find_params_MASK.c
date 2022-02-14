
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_drm {int dummy; } ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (struct meson_drm*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct meson_drm*,unsigned int) ;
 scalar_t__ FUNC_3 (struct meson_drm*,unsigned int,unsigned int) ;

__attribute__((used)) static bool FUNC_4(struct meson_drm *VAR_0,
           unsigned int VAR_1,
           unsigned int *VAR_2,
           unsigned int *VAR_3,
           unsigned int *VAR_4)
{

 for (*VAR_4 = 16 ; *VAR_4 > 1 ; *VAR_4 >>= 1) {
  *VAR_2 = FUNC_2(VAR_0, VAR_1 * *VAR_4);
  if (!*VAR_2)
   continue;
  *VAR_3 = FUNC_1(VAR_0, *VAR_2, VAR_1 * *VAR_4);

  FUNC_0("PLL params for %dkHz: m=%x frac=%x od=%d\n",
     VAR_1, *VAR_2, *VAR_3, *VAR_4);

  if (FUNC_3(VAR_0, *VAR_2, *VAR_3))
   return 1;
 }

 return 0;
}
