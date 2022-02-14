
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nouveau_encoder {TYPE_1__* dcb; struct i2c_adapter* i2c; } ;
struct nouveau_drm {int dummy; } ;
struct nouveau_connector {scalar_t__ type; TYPE_2__* edid; int aux; } ;
struct i2c_adapter {int dummy; } ;
struct drm_encoder_helper_funcs {scalar_t__ (* detect ) (struct drm_encoder*,struct drm_connector*) ;} ;
struct drm_encoder {struct drm_encoder_helper_funcs* helper_private; } ;
struct drm_device {int dev; } ;
struct drm_connector {int name; struct drm_device* dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_8__ {int input; } ;
struct TYPE_7__ {int type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nouveau_drm*,char*,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct drm_connector*,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (struct drm_connector*,struct i2c_adapter*) ;
 TYPE_2__* FUNC_4 (struct drm_connector*,struct i2c_adapter*) ;
 scalar_t__ FUNC_5 () ;
 struct nouveau_encoder* FUNC_6 (struct drm_connector*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 struct nouveau_connector* FUNC_8 (struct drm_connector*) ;
 struct nouveau_encoder* FUNC_9 (struct drm_connector*) ;
 struct nouveau_encoder* FUNC_10 (struct drm_connector*) ;
 int FUNC_11 (struct drm_connector*,struct nouveau_encoder*) ;
 struct nouveau_drm* FUNC_12 (struct drm_device*) ;
 int VAR_9 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (struct drm_encoder*,struct drm_connector*) ;
 struct drm_encoder* FUNC_18 (struct nouveau_encoder*) ;
 int FUNC_19 () ;

__attribute__((used)) static enum drm_connector_status
FUNC_20(struct drm_connector *VAR_10, bool VAR_11)
{
 struct drm_device *VAR_12 = VAR_10->dev;
 struct nouveau_drm *VAR_13 = FUNC_12(VAR_12);
 struct nouveau_connector *VAR_14 = FUNC_8(VAR_10);
 struct nouveau_encoder *VAR_15 = ((void*)0);
 struct nouveau_encoder *VAR_16;
 struct i2c_adapter *VAR_17;
 int VAR_18;
 int VAR_19;
 enum drm_connector_status VAR_20 = VAR_8;


 if (VAR_14->edid) {
  FUNC_1(VAR_10, ((void*)0));
  FUNC_7(VAR_14->edid);
  VAR_14->edid = ((void*)0);
 }







 if (FUNC_5()) {
  FUNC_13(VAR_12->dev);
 } else {
  VAR_19 = FUNC_14(VAR_12->dev);
  if (VAR_19 < 0 && VAR_19 != -VAR_5)
   return VAR_20;
 }

 VAR_15 = FUNC_9(VAR_10);
 if (VAR_15 && (VAR_17 = VAR_15->i2c) != ((void*)0)) {
  if ((FUNC_19() &
       VAR_6) &&
      VAR_14->type == VAR_0)
   VAR_14->edid = FUNC_4(VAR_10,
             VAR_17);
  else
   VAR_14->edid = FUNC_3(VAR_10, VAR_17);

  FUNC_1(VAR_10,
       VAR_14->edid);
  if (!VAR_14->edid) {
   FUNC_0(VAR_13, "DDC responded, but no EDID for %s\n",
     VAR_10->name);
   goto detect_analog;
  }






  VAR_16 = ((void*)0);
  if (VAR_15->dcb->type == VAR_2)
   VAR_16 = FUNC_6(VAR_10, VAR_1);
  if (VAR_15->dcb->type == VAR_1)
   VAR_16 = FUNC_6(VAR_10, VAR_2);

  if (VAR_16 && ((VAR_15->dcb->type == VAR_1 &&
        VAR_16->dcb->type == VAR_2) ||
       (VAR_15->dcb->type == VAR_2 &&
        VAR_16->dcb->type == VAR_1))) {
   if (VAR_14->edid->input & VAR_4)
    VAR_18 = VAR_2;
   else
    VAR_18 = VAR_1;

   VAR_15 = FUNC_6(VAR_10, VAR_18);
  }

  FUNC_11(VAR_10, VAR_15);
  VAR_20 = VAR_7;
  FUNC_2(&VAR_14->aux, VAR_14->edid);
  goto out;
 }

 VAR_15 = FUNC_10(VAR_10);
 if (VAR_15) {
  FUNC_11(VAR_10, VAR_15);
  VAR_20 = VAR_7;
  goto out;
 }

detect_analog:
 VAR_15 = FUNC_6(VAR_10, VAR_1);
 if (!VAR_15 && !VAR_9)
  VAR_15 = FUNC_6(VAR_10, VAR_3);
 if (VAR_15 && VAR_11) {
  struct drm_encoder *VAR_21 = FUNC_18(VAR_15);
  const struct drm_encoder_helper_funcs *VAR_22 =
      VAR_21->helper_private;

  if (VAR_22->detect(VAR_21, VAR_10) ==
      VAR_7) {
   FUNC_11(VAR_10, VAR_15);
   VAR_20 = VAR_7;
   goto out;
  }

 }

 out:

 FUNC_15(VAR_12->dev);
 FUNC_16(VAR_12->dev);

 return VAR_20;
}
