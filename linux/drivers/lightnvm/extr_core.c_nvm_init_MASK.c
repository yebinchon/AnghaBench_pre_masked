
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvm_geo {int num_ch; int all_luns; int num_chk; int ws_opt; int ws_min; int vmnt; int minor_ver_id; int major_ver_id; } ;
struct nvm_dev {struct nvm_geo geo; int name; TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ (* identity ) (struct nvm_dev*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nvm_dev*) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct nvm_dev*) ;

__attribute__((used)) static int FUNC_5(struct nvm_dev *VAR_1)
{
 struct nvm_geo *VAR_2 = &VAR_1->geo;
 int VAR_3 = -VAR_0;

 if (VAR_1->ops->identity(VAR_1)) {
  FUNC_2("device could not be identified\n");
  goto err;
 }

 FUNC_1("ver:%u.%u nvm_vendor:%x\n", VAR_2->major_ver_id,
   VAR_2->minor_ver_id, VAR_2->vmnt);

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3) {
  FUNC_2("could not initialize core structures.\n");
  goto err;
 }

 FUNC_3("registered %s [%u/%u/%u/%u/%u]\n",
   VAR_1->name, VAR_1->geo.ws_min, VAR_1->geo.ws_opt,
   VAR_1->geo.num_chk, VAR_1->geo.all_luns,
   VAR_1->geo.num_ch);
 return 0;
err:
 FUNC_2("failed to initialize nvm\n");
 return VAR_3;
}
