
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct edid {int dummy; } ;
struct drm_connector {TYPE_2__* dev; } ;
struct ast_private {scalar_t__ tx_chip_type; int dp501_maxclk; } ;
struct ast_connector {int base; TYPE_1__* i2c; } ;
struct TYPE_5__ {struct ast_private* dev_private; } ;
struct TYPE_4__ {int adapter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct drm_connector*,struct edid*) ;
 int FUNC_3 (int *,struct edid*) ;
 struct edid* FUNC_4 (struct drm_connector*,int *) ;
 int FUNC_5 (struct edid*) ;
 struct edid* FUNC_6 (int,int ) ;
 struct ast_connector* FUNC_7 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_8(struct drm_connector *VAR_3)
{
 struct ast_connector *VAR_4 = FUNC_7(VAR_3);
 struct ast_private *VAR_5 = VAR_3->dev->dev_private;
 struct edid *VAR_6;
 int VAR_7;
 bool VAR_8 = 0;
 if (VAR_5->tx_chip_type == VAR_0) {
  VAR_5->dp501_maxclk = 0xff;
  VAR_6 = FUNC_6(128, VAR_2);
  if (!VAR_6)
   return -VAR_1;

  VAR_8 = FUNC_0(VAR_3->dev, (u8 *)VAR_6);
  if (VAR_8)
   VAR_5->dp501_maxclk = FUNC_1(VAR_3->dev);
  else
   FUNC_5(VAR_6);
 }
 if (!VAR_8)
  VAR_6 = FUNC_4(VAR_3, &VAR_4->i2c->adapter);
 if (VAR_6) {
  FUNC_3(&VAR_4->base, VAR_6);
  VAR_7 = FUNC_2(VAR_3, VAR_6);
  FUNC_5(VAR_6);
  return VAR_7;
 } else
  FUNC_3(&VAR_4->base, ((void*)0));
 return 0;
}
