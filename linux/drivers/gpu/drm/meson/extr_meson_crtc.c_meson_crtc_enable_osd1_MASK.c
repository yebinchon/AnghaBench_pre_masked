
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_drm {scalar_t__ io_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct meson_drm *VAR_2)
{
 FUNC_1(VAR_1, VAR_1,
       VAR_2->io_base + FUNC_0(VAR_0));
}
