
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int current_mode; } ;
struct meson_drm {TYPE_1__ venc; scalar_t__ io_base; int hhi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct meson_drm*) ;
 scalar_t__ FUNC_2 (struct meson_drm*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int,int ,scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

void FUNC_6(struct meson_drm *VAR_14)
{

 if (FUNC_2(VAR_14, VAR_10)) {
  FUNC_3(VAR_14->hhi, VAR_5, 0);
  FUNC_3(VAR_14->hhi, VAR_7, 8);
 } else {
  FUNC_3(VAR_14->hhi, VAR_4, 0);
  FUNC_3(VAR_14->hhi, VAR_6, 8);
 }


 FUNC_5(0xff, VAR_14->io_base + FUNC_0(VAR_9));


 FUNC_3(VAR_14->hhi, VAR_3, 0);


 FUNC_4(VAR_11 |
       VAR_12, 0,
       VAR_14->io_base + FUNC_0(VAR_13));


 FUNC_5(0, VAR_14->io_base + FUNC_0(VAR_0));
 FUNC_5(0, VAR_14->io_base + FUNC_0(VAR_2));
 FUNC_5(0, VAR_14->io_base + FUNC_0(VAR_1));


 FUNC_1(VAR_14);

 VAR_14->venc.current_mode = VAR_8;
}
