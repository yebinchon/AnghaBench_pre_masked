
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;
struct adv7511 {int cec_adap; int rgb; int powered; int regmap; TYPE_1__* i2c_edid; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct adv7511*) ;
 int FUNC_1 (struct adv7511*) ;
 int VAR_1 ;
 int FUNC_2 (struct adv7511*,struct drm_connector*,int ,int ) ;
 int FUNC_3 (int ,struct edid*) ;
 unsigned int FUNC_4 (struct drm_connector*,struct edid*) ;
 int FUNC_5 (struct drm_connector*,struct edid*) ;
 int FUNC_6 (struct edid*) ;
 struct edid* FUNC_7 (struct drm_connector*,int ,struct adv7511*) ;
 int FUNC_8 (struct edid*) ;
 int FUNC_9 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct adv7511 *VAR_2,
        struct drm_connector *VAR_3)
{
 struct edid *VAR_4;
 unsigned int VAR_5;


 if (!VAR_2->powered) {
  unsigned int VAR_6 =
     (VAR_2->i2c_edid->addr << 1);

  FUNC_1(VAR_2);


  FUNC_9(VAR_2->regmap, VAR_0,
        VAR_6);
 }

 VAR_4 = FUNC_7(VAR_3, VAR_1, VAR_2);

 if (!VAR_2->powered)
  FUNC_0(VAR_2);


 FUNC_5(VAR_3, VAR_4);
 VAR_5 = FUNC_4(VAR_3, VAR_4);

 FUNC_2(VAR_2, VAR_3, VAR_2->rgb,
          FUNC_6(VAR_4));

 FUNC_3(VAR_2->cec_adap, VAR_4);

 FUNC_8(VAR_4);

 return VAR_5;
}
