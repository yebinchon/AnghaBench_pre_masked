
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ims_pcu {int update_firmware_status; TYPE_1__* dev; } ;
struct firmware {int size; } ;
struct TYPE_3__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int ) ;
 unsigned int FUNC_2 (struct firmware const*) ;
 int FUNC_3 (struct ims_pcu*,int ,int *,int ,int ) ;
 int FUNC_4 (struct ims_pcu*,struct firmware const*,unsigned int) ;
 int FUNC_5 (int *,int *,char*) ;

__attribute__((used)) static int FUNC_6(struct ims_pcu *VAR_2,
       const struct firmware *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 FUNC_1(VAR_2->dev, "Updating firmware %s, size: %zu\n",
   VAR_0, VAR_3->size);

 VAR_4 = FUNC_2(VAR_3);

 VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_3(VAR_2, VAR_1, ((void*)0), 0, 0);
 if (VAR_5)
  FUNC_0(VAR_2->dev,
   "Failed to start application image, error: %d\n",
   VAR_5);

out:
 VAR_2->update_firmware_status = VAR_5;
 FUNC_5(&VAR_2->dev->kobj, ((void*)0), "update_firmware_status");
 return VAR_5;
}
