
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_minor {scalar_t__ type; int index; TYPE_1__* dev; } ;
struct device {int release; int parent; int * type; int class; int devt; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct device* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct device*,struct drm_minor*) ;
 int FUNC_3 (struct device*,char const*,int ) ;
 int FUNC_4 (struct device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct device* FUNC_5 (int,int ) ;
 int FUNC_6 (struct device*) ;

struct device *FUNC_7(struct drm_minor *VAR_7)
{
 const char *VAR_8;
 struct device *VAR_9;
 int VAR_10;

 if (VAR_7->type == VAR_1)
  VAR_8 = "renderD%d";
 else
  VAR_8 = "card%d";

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return FUNC_0(-VAR_2);

 FUNC_4(VAR_9);
 VAR_9->devt = FUNC_1(VAR_0, VAR_7->index);
 VAR_9->class = VAR_4;
 VAR_9->type = &VAR_5;
 VAR_9->parent = VAR_7->dev->dev;
 VAR_9->release = VAR_6;
 FUNC_2(VAR_9, VAR_7);

 VAR_10 = FUNC_3(VAR_9, VAR_8, VAR_7->index);
 if (VAR_10 < 0)
  goto err_free;

 return VAR_9;

err_free:
 FUNC_6(VAR_9);
 return FUNC_0(VAR_10);
}
