
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct firmware {int dummy; } ;
struct device {int dummy; } ;
struct cyapa {TYPE_2__* ops; TYPE_1__* client; } ;
struct TYPE_4__ {int (* check_fw ) (struct cyapa*,struct firmware const*) ;int (* bl_enter ) (struct cyapa*) ;int (* bl_activate ) (struct cyapa*) ;int (* bl_initiate ) (struct cyapa*,struct firmware const*) ;int (* update_fw ) (struct cyapa*,struct firmware const*) ;} ;
struct TYPE_3__ {struct device dev; } ;


 int FUNC_0 (struct cyapa*) ;
 int FUNC_1 (struct cyapa*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct firmware const*) ;
 int FUNC_6 (struct firmware const**,char const*,struct device*) ;
 int FUNC_7 (struct cyapa*,struct firmware const*) ;
 int FUNC_8 (struct cyapa*) ;
 int FUNC_9 (struct cyapa*) ;
 int FUNC_10 (struct cyapa*,struct firmware const*) ;
 int FUNC_11 (struct cyapa*,struct firmware const*) ;

__attribute__((used)) static int FUNC_12(struct cyapa *VAR_0, const char *VAR_1)
{
 struct device *VAR_2 = &VAR_0->client->dev;
 const struct firmware *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_6(&VAR_3, VAR_1, VAR_2);
 if (VAR_4) {
  FUNC_2(VAR_2, "Could not load firmware from %s: %d\n",
   VAR_1, VAR_4);
  return VAR_4;
 }

 VAR_4 = VAR_0->ops->check_fw(VAR_0, VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_2, "Invalid CYAPA firmware image: %s\n",
    VAR_1);
  goto done;
 }






 FUNC_3(VAR_2);


 FUNC_1(VAR_0);

 VAR_4 = VAR_0->ops->bl_enter(VAR_0);
 if (VAR_4) {
  FUNC_2(VAR_2, "bl_enter failed, %d\n", VAR_4);
  goto err_detect;
 }

 VAR_4 = VAR_0->ops->bl_activate(VAR_0);
 if (VAR_4) {
  FUNC_2(VAR_2, "bl_activate failed, %d\n", VAR_4);
  goto err_detect;
 }

 VAR_4 = VAR_0->ops->bl_initiate(VAR_0, VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_2, "bl_initiate failed, %d\n", VAR_4);
  goto err_detect;
 }

 VAR_4 = VAR_0->ops->update_fw(VAR_0, VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_2, "update_fw failed, %d\n", VAR_4);
  goto err_detect;
 }

err_detect:
 FUNC_0(VAR_0);
 FUNC_4(VAR_2);

done:
 FUNC_5(VAR_3);
 return VAR_4;
}
