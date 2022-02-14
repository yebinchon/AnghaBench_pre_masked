
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct fsi_msg {int dummy; } ;
struct fsi_master_acf {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fsi_msg*,scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct fsi_master_acf*,int ,int *,scalar_t__*) ;
 int FUNC_4 (struct fsi_master_acf*,struct fsi_msg*,int ) ;

__attribute__((used)) static int FUNC_5(struct fsi_master_acf *VAR_2, uint8_t VAR_3)
{
 struct fsi_msg VAR_4;
 uint8_t VAR_5;
 int VAR_6;

 FUNC_0(&VAR_4, VAR_3);

 VAR_6 = FUNC_4(VAR_2, &VAR_4, 0);
 if (VAR_6) {
  FUNC_2(VAR_2->dev, "Error %d sending term\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_3(VAR_2, 0, ((void*)0), &VAR_5);
 if (VAR_6 < 0) {
  FUNC_1(VAR_2->dev,
    "TERM failed; lost communication with slave\n");
  return -VAR_0;
 } else if (VAR_5 != VAR_1) {
  FUNC_1(VAR_2->dev, "TERM failed; response %d\n", VAR_5);
  return -VAR_0;
 }
 return 0;
}
