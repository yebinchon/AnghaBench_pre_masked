
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_bridge {int encoder; int dev; } ;
struct TYPE_6__ {int polled; } ;
struct adv7511 {scalar_t__ type; int regmap; TYPE_1__* i2c_main; TYPE_2__ connector; } ;
struct TYPE_5__ {scalar_t__ irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct adv7511*) ;
 struct adv7511* FUNC_3 (struct drm_bridge*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int ,TYPE_2__*,int *,int ) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct drm_bridge *VAR_9)
{
 struct adv7511 *VAR_10 = FUNC_3(VAR_9);
 int VAR_11;

 if (!VAR_9->encoder) {
  FUNC_1("Parent encoder object not found");
  return -VAR_6;
 }

 if (VAR_10->i2c_main->irq)
  VAR_10->connector.polled = VAR_4;
 else
  VAR_10->connector.polled = VAR_2 |
    VAR_3;

 VAR_11 = FUNC_6(VAR_9->dev, &VAR_10->connector,
     &VAR_7,
     VAR_5);
 if (VAR_11) {
  FUNC_1("Failed to initialize connector with drm\n");
  return VAR_11;
 }
 FUNC_5(&VAR_10->connector,
     &VAR_8);
 FUNC_4(&VAR_10->connector, VAR_9->encoder);

 if (VAR_10->type == VAR_1)
  VAR_11 = FUNC_2(VAR_10);

 if (VAR_10->i2c_main->irq)
  FUNC_7(VAR_10->regmap, FUNC_0(0),
        VAR_0);

 return VAR_11;
}
