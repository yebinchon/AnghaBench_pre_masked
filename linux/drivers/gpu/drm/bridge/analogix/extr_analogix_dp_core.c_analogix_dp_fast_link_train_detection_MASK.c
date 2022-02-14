
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct analogix_dp_device {int fast_train_enable; int dev; int aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct analogix_dp_device *VAR_2)
{
 int VAR_3;
 u8 VAR_4;

 VAR_3 = FUNC_2(&VAR_2->aux, VAR_0, &VAR_4);
 if (VAR_3 != 1) {
  FUNC_1(VAR_2->dev, "failed to read downspread %d\n", VAR_3);
  return VAR_3;
 }
 VAR_2->fast_train_enable = !!(VAR_4 & VAR_1);
 FUNC_0(VAR_2->dev, "fast link training %s\n",
  VAR_2->fast_train_enable ? "supported" : "unsupported");
 return 0;
}
