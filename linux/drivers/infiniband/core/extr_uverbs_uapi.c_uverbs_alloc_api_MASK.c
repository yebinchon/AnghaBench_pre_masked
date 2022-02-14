
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uverbs_api {int driver_id; int radix; } ;
struct TYPE_2__ {int driver_id; } ;
struct ib_device {int dev; int driver_def; TYPE_1__ ops; } ;


 int VAR_0 ;
 struct uverbs_api* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,int) ;
 struct uverbs_api* FUNC_3 (int,int ) ;
 int FUNC_4 (struct uverbs_api*) ;
 int FUNC_5 (struct uverbs_api*) ;
 int FUNC_6 (struct uverbs_api*,struct ib_device*,int ,int) ;
 int VAR_2 ;
 int FUNC_7 (struct uverbs_api*) ;

struct uverbs_api *FUNC_8(struct ib_device *VAR_3)
{
 struct uverbs_api *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_4->radix, VAR_1);
 VAR_4->driver_id = VAR_3->ops.driver_id;

 VAR_5 = FUNC_6(VAR_4, VAR_3, VAR_2, 0);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_6(VAR_4, VAR_3, VAR_3->driver_def, 1);
 if (VAR_5)
  goto err;

 FUNC_5(VAR_4);
 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  goto err;

 return VAR_4;
err:
 if (VAR_5 != -VAR_0)
  FUNC_2(&VAR_3->dev,
   "Setup of uverbs_api failed, kernel parsing tree description is not valid (%d)??\n",
   VAR_5);

 FUNC_7(VAR_4);
 return FUNC_0(VAR_5);
}
