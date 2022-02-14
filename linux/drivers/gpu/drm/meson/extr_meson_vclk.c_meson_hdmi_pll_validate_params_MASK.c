
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_drm {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct meson_drm*,int ) ;

__attribute__((used)) static bool FUNC_1(struct meson_drm *VAR_6,
        unsigned int VAR_7,
        unsigned int VAR_8)
{
 if (FUNC_0(VAR_6, VAR_3)) {

  if (VAR_7 < 53 || VAR_7 > 123)
   return 0;
  if (VAR_8 >= VAR_0)
   return 0;
 } else if (FUNC_0(VAR_6, VAR_5) ||
     FUNC_0(VAR_6, VAR_4) ||
     FUNC_0(VAR_6, VAR_2)) {

  if (VAR_7 < 106 || VAR_7 > 247)
   return 0;
  if (VAR_8 >= VAR_1)
   return 0;
 }

 return 1;
}
