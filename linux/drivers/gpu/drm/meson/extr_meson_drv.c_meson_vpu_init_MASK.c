
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_drm {scalar_t__ io_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct meson_drm *VAR_4)
{
 u32 VAR_5;





 VAR_5 = FUNC_0(0, 1) |
  FUNC_0(5, 1);
 FUNC_2(VAR_5, VAR_4->io_base + FUNC_1(VAR_0));


 VAR_5 = FUNC_0(0, 1);
 FUNC_2(VAR_5, VAR_4->io_base + FUNC_1(VAR_1));


 VAR_5 = FUNC_0(4, 1) |
  FUNC_0(7, 1);
 FUNC_2(VAR_5, VAR_4->io_base + FUNC_1(VAR_2));


 VAR_5 = FUNC_0(1, 1);
 FUNC_2(VAR_5, VAR_4->io_base + FUNC_1(VAR_3));
}
