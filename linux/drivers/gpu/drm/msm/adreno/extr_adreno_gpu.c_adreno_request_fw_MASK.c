
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firmware {int dummy; } ;
struct drm_device {int dev; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct adreno_gpu {scalar_t__ fwloc; TYPE_1__ base; } ;


 int FUNC_0 (int ,char*,char const*,...) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct firmware const* FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 char* FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct firmware const**,char*,int ) ;
 int FUNC_6 (struct firmware const**,char const*,int ) ;

const struct firmware *
FUNC_7(struct adreno_gpu *VAR_7, const char *VAR_8)
{
 struct drm_device *VAR_9 = VAR_7->base.dev;
 const struct firmware *VAR_10 = ((void*)0);
 char *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(VAR_6, "qcom/%s", VAR_8);
 if (!VAR_11)
  return FUNC_2(-VAR_1);





 if ((VAR_7->fwloc == VAR_5) ||
     (VAR_7->fwloc == VAR_4)) {

  VAR_12 = FUNC_6(&VAR_10, VAR_11, VAR_9->dev);
  if (!VAR_12) {
   FUNC_1(VAR_9->dev, "loaded %s from new location\n",
    VAR_11);
   VAR_7->fwloc = VAR_4;
   goto out;
  } else if (VAR_7->fwloc != VAR_5) {
   FUNC_0(VAR_9->dev, "failed to load %s: %d\n",
    VAR_11, VAR_12);
   VAR_10 = FUNC_2(VAR_12);
   goto out;
  }
 }




 if ((VAR_7->fwloc == VAR_5) ||
     (VAR_7->fwloc == VAR_3)) {

  VAR_12 = FUNC_6(&VAR_10, VAR_8, VAR_9->dev);
  if (!VAR_12) {
   FUNC_1(VAR_9->dev, "loaded %s from legacy location\n",
    VAR_11);
   VAR_7->fwloc = VAR_3;
   goto out;
  } else if (VAR_7->fwloc != VAR_5) {
   FUNC_0(VAR_9->dev, "failed to load %s: %d\n",
    VAR_8, VAR_12);
   VAR_10 = FUNC_2(VAR_12);
   goto out;
  }
 }





 if ((VAR_7->fwloc == VAR_5) ||
     (VAR_7->fwloc == VAR_2)) {

  VAR_12 = FUNC_5(&VAR_10, VAR_11, VAR_9->dev);
  if (!VAR_12) {
   FUNC_1(VAR_9->dev, "loaded %s with helper\n",
    VAR_11);
   VAR_7->fwloc = VAR_2;
   goto out;
  } else if (VAR_7->fwloc != VAR_5) {
   FUNC_0(VAR_9->dev, "failed to load %s: %d\n",
    VAR_11, VAR_12);
   VAR_10 = FUNC_2(VAR_12);
   goto out;
  }
 }

 FUNC_0(VAR_9->dev, "failed to load %s\n", VAR_8);
 VAR_10 = FUNC_2(-VAR_0);
out:
 FUNC_4(VAR_11);
 return VAR_10;
}
