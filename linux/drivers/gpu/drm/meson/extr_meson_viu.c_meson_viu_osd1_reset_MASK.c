
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct meson_drm {scalar_t__ io_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct meson_drm*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

void FUNC_5(struct meson_drm *VAR_4)
{
 uint32_t VAR_5, VAR_6;


 VAR_5 = FUNC_2(
    VAR_4->io_base + FUNC_0(VAR_1));
 VAR_6 = FUNC_2(
    VAR_4->io_base + FUNC_0(VAR_0));


 FUNC_3(VAR_3, VAR_3,
       VAR_4->io_base + FUNC_0(VAR_2));
 FUNC_3(VAR_3, 0,
       VAR_4->io_base + FUNC_0(VAR_2));


 FUNC_4(VAR_5,
         VAR_4->io_base + FUNC_0(VAR_1));
 FUNC_4(VAR_6,
         VAR_4->io_base + FUNC_0(VAR_0));


 FUNC_1(VAR_4);
}
