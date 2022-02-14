
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_drm {int dummy; } ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (char*,unsigned int) ;
 scalar_t__ FUNC_2 (struct meson_drm*,unsigned int,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_3 (struct meson_drm*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct meson_drm *VAR_0,
           unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

 if (FUNC_2(VAR_0, VAR_1, &VAR_3, &VAR_4, &VAR_2)) {
  VAR_7 = 1;
  if (VAR_2 < 4) {
   VAR_5 = 2;
   VAR_6 = 1;
  } else {
   VAR_6 = VAR_2 / 4;
   VAR_5 = VAR_2 / VAR_6;
  }

  FUNC_0("PLL params for %dkHz: m=%x frac=%x od=%d/%d/%d\n",
     VAR_1, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

  FUNC_3(VAR_0, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

  return;
 }

 FUNC_1("Fatal, unable to find parameters for PLL freq %d\n",
    VAR_1);
}
