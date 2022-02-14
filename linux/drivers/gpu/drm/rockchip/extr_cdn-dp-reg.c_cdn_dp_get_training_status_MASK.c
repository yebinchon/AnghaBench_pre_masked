
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int num_lanes; int rate; } ;
struct cdn_dp_device {int dev; TYPE_1__ link; } ;
typedef int status ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct cdn_dp_device*,int *,int) ;
 int FUNC_2 (struct cdn_dp_device*,int ,int ,int ,int *) ;
 int FUNC_3 (struct cdn_dp_device*,int ,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct cdn_dp_device *VAR_2)
{
 u8 VAR_3[10];
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_1, VAR_0,
      0, ((void*)0));
 if (VAR_4)
  goto err_get_training_status;

 VAR_4 = FUNC_3(VAR_2, VAR_1,
           VAR_0,
           sizeof(VAR_3));
 if (VAR_4)
  goto err_get_training_status;

 VAR_4 = FUNC_1(VAR_2, VAR_3, sizeof(VAR_3));
 if (VAR_4)
  goto err_get_training_status;

 VAR_2->link.rate = FUNC_4(VAR_3[0]);
 VAR_2->link.num_lanes = VAR_3[1];

err_get_training_status:
 if (VAR_4)
  FUNC_0(VAR_2->dev, "get training status failed: %d\n", VAR_4);
 return VAR_4;
}
