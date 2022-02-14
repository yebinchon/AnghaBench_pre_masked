
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sii902x {int mutex; int regmap; TYPE_1__* i2cmux; } ;
struct edid {int dummy; } ;
struct drm_connector {int display_info; } ;
struct TYPE_2__ {int * adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sii902x* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 int FUNC_2 (struct drm_connector*,struct edid*) ;
 scalar_t__ FUNC_3 (struct edid*) ;
 int FUNC_4 (int *,int *,int) ;
 struct edid* FUNC_5 (struct drm_connector*,int ) ;
 int FUNC_6 (struct edid*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct drm_connector *VAR_5)
{
 struct sii902x *VAR_6 = FUNC_0(VAR_5);
 u32 VAR_7 = VAR_0;
 u8 VAR_8 = VAR_2;
 struct edid *VAR_9;
 int VAR_10 = 0, VAR_11;

 FUNC_7(&VAR_6->mutex);

 VAR_9 = FUNC_5(VAR_5, VAR_6->i2cmux->adapter[0]);
 FUNC_2(VAR_5, VAR_9);
 if (VAR_9) {
  if (FUNC_3(VAR_9))
   VAR_8 = VAR_3;

  VAR_10 = FUNC_1(VAR_5, VAR_9);
  FUNC_6(VAR_9);
 }

 VAR_11 = FUNC_4(&VAR_5->display_info,
            &VAR_7, 1);
 if (VAR_11)
  goto error_out;

 VAR_11 = FUNC_9(VAR_6->regmap, VAR_1,
     VAR_4, VAR_8);
 if (VAR_11)
  goto error_out;

 VAR_11 = VAR_10;

error_out:
 FUNC_8(&VAR_6->mutex);

 return VAR_11;
}
