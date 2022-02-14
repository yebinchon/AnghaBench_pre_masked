
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mipi_dbi {int dummy; } ;
struct TYPE_2__ {int min_height; int min_width; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct mipi_dbi_dev {scalar_t__ tx_buf; struct mipi_dbi dbi; struct drm_device drm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int ,size_t) ;
 int FUNC_3 (struct mipi_dbi*,int ,int ,int ,int,int) ;
 int FUNC_4 (struct mipi_dbi*,int ,int *,size_t) ;

__attribute__((used)) static void FUNC_5(struct mipi_dbi_dev *VAR_3)
{
 struct drm_device *VAR_4 = &VAR_3->drm;
 u16 VAR_5 = VAR_4->mode_config.min_height;
 u16 VAR_6 = VAR_4->mode_config.min_width;
 struct mipi_dbi *VAR_7 = &VAR_3->dbi;
 size_t VAR_8 = VAR_6 * VAR_5 * 2;
 int VAR_9;

 if (!FUNC_0(VAR_4, &VAR_9))
  return;

 FUNC_2(VAR_3->tx_buf, 0, VAR_8);

 FUNC_3(VAR_7, VAR_0, 0, 0,
    (VAR_6 >> 8) & 0xFF, (VAR_6 - 1) & 0xFF);
 FUNC_3(VAR_7, VAR_1, 0, 0,
    (VAR_5 >> 8) & 0xFF, (VAR_5 - 1) & 0xFF);
 FUNC_4(VAR_7, VAR_2,
        (u8 *)VAR_3->tx_buf, VAR_8);

 FUNC_1(VAR_9);
}
