
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdn_dp_device {int connector; int edid; int dev; int dpcd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct cdn_dp_device*) ;
 int FUNC_2 (struct cdn_dp_device*,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,struct cdn_dp_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct cdn_dp_device *VAR_4)
{
 int VAR_5;

 if (!FUNC_1(VAR_4))
  return -VAR_2;

 VAR_5 = FUNC_2(VAR_4, VAR_0, VAR_4->dpcd,
          VAR_1);
 if (VAR_5) {
  FUNC_0(VAR_4->dev, "Failed to get caps %d\n", VAR_5);
  return VAR_5;
 }

 FUNC_4(VAR_4->edid);
 VAR_4->edid = FUNC_3(&VAR_4->connector,
       VAR_3, VAR_4);
 return 0;
}
