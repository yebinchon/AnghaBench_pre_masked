
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_drm {scalar_t__ io_base; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int FUNC_2 (scalar_t__) ;

unsigned int FUNC_3(struct meson_drm *VAR_1)
{
 return FUNC_2(VAR_1->io_base + FUNC_1(VAR_0)) & FUNC_0(29);
}
