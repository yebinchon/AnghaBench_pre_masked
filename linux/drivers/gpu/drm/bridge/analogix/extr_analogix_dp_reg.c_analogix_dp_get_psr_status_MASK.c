
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct analogix_dp_device {int dev; int aux; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__*) ;

__attribute__((used)) static ssize_t FUNC_2(struct analogix_dp_device *VAR_1)
{
 ssize_t VAR_2;
 u8 VAR_3;

 VAR_2 = FUNC_1(&VAR_1->aux, VAR_0, &VAR_3);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "PSR_STATUS read failed ret=%zd", VAR_2);
  return VAR_2;
 }
 return VAR_3;
}
