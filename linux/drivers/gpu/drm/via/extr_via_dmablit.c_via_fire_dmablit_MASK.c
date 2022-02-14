
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_3__ {int chain_start; } ;
typedef TYPE_1__ drm_via_sg_info_t ;
typedef int drm_via_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct drm_device *VAR_12, drm_via_sg_info_t *VAR_13, int VAR_14)
{
 drm_via_private_t *VAR_15 = (drm_via_private_t *)VAR_12->dev_private;

 FUNC_1(VAR_15, VAR_10 + VAR_14*0x10, 0);
 FUNC_1(VAR_15, VAR_8 + VAR_14*0x10, 0);
 FUNC_1(VAR_15, VAR_7 + VAR_14*0x04, VAR_0 | VAR_2 |
    VAR_1);
 FUNC_1(VAR_15, VAR_11 + VAR_14*0x04, VAR_4 | VAR_5);
 FUNC_1(VAR_15, VAR_6 + VAR_14*0x10, 0);
 FUNC_1(VAR_15, VAR_9 + VAR_14*0x10, VAR_13->chain_start);
 FUNC_2();
 FUNC_1(VAR_15, VAR_7 + VAR_14*0x04, VAR_1 | VAR_3);
 FUNC_0(VAR_15, VAR_7 + VAR_14*0x04);
}
