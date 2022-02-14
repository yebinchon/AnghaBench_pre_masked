
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct cdn_dp_device {int lock; TYPE_1__* dev; } ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,char*) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int VAR_3 ;
 int FUNC_2 (struct cdn_dp_device*) ;
 int FUNC_3 (struct cdn_dp_device*) ;
 int FUNC_4 (struct cdn_dp_device*) ;
 int FUNC_5 (struct cdn_dp_device*,int ,int) ;
 int FUNC_6 (struct cdn_dp_device*,int ) ;
 int FUNC_7 (struct cdn_dp_device*) ;
 int FUNC_8 (int ,struct drm_encoder*) ;
 struct cdn_dp_device* FUNC_9 (struct drm_encoder*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct drm_encoder *VAR_4)
{
 struct cdn_dp_device *VAR_5 = FUNC_9(VAR_4);
 int VAR_6, VAR_7;

 VAR_6 = FUNC_8(VAR_5->dev->of_node, VAR_4);
 if (VAR_6 < 0) {
  FUNC_1(VAR_5->dev, "Could not get vop id, %d", VAR_6);
  return;
 }

 FUNC_0(VAR_5->dev, "vop %s output to cdn-dp\n",
     (VAR_6) ? "LIT" : "BIG");
 if (VAR_6)
  VAR_7 = VAR_2 | (VAR_2 << 16);
 else
  VAR_7 = VAR_2 << 16;

 VAR_6 = FUNC_5(VAR_5, VAR_3, VAR_7);
 if (VAR_6)
  return;

 FUNC_10(&VAR_5->lock);

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_5->dev, "Failed to enable encoder %d\n",
         VAR_6);
  goto out;
 }
 if (!FUNC_2(VAR_5)) {
  VAR_6 = FUNC_7(VAR_5);
  if (VAR_6) {
   FUNC_1(VAR_5->dev, "Failed link train %d\n", VAR_6);
   goto out;
  }
 }

 VAR_6 = FUNC_6(VAR_5, VAR_0);
 if (VAR_6) {
  FUNC_1(VAR_5->dev, "Failed to idle video %d\n", VAR_6);
  goto out;
 }

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_5->dev, "Failed to config video %d\n", VAR_6);
  goto out;
 }

 VAR_6 = FUNC_6(VAR_5, VAR_1);
 if (VAR_6) {
  FUNC_1(VAR_5->dev, "Failed to valid video %d\n", VAR_6);
  goto out;
 }
out:
 FUNC_11(&VAR_5->lock);
}
