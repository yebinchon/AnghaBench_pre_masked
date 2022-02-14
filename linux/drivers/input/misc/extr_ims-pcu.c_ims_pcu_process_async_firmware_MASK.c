
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ims_pcu {int async_firmware_done; int cmd_mutex; int dev; } ;
struct firmware {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct firmware const*) ;
 int FUNC_3 (struct ims_pcu*,struct firmware const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct firmware const*) ;

__attribute__((used)) static void FUNC_7(const struct firmware *VAR_1,
        void *VAR_2)
{
 struct ims_pcu *VAR_3 = VAR_2;
 int VAR_4;

 if (!VAR_1) {
  FUNC_1(VAR_3->dev, "Failed to get firmware %s\n",
   VAR_0);
  goto out;
 }

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4) {
  FUNC_1(VAR_3->dev, "Firmware %s is invalid\n",
   VAR_0);
  goto out;
 }

 FUNC_4(&VAR_3->cmd_mutex);
 FUNC_3(VAR_3, VAR_1);
 FUNC_5(&VAR_3->cmd_mutex);

 FUNC_6(VAR_1);

out:
 FUNC_0(&VAR_3->async_firmware_done);
}
