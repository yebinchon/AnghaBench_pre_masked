
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_priv {int ref; int fw_name; TYPE_1__* fwc; int size; } ;
struct firmware {struct fw_priv* priv; } ;
struct device {int dummy; } ;
typedef enum fw_opt { ____Placeholder_fw_opt } fw_opt ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct fw_priv*,struct firmware*) ;
 scalar_t__ FUNC_3 (struct fw_priv*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct firmware *VAR_5, struct device *VAR_6,
       enum fw_opt VAR_7)
{
 struct fw_priv *VAR_8 = VAR_5->priv;
 int VAR_9;

 FUNC_5(&VAR_4);
 if (!VAR_8->size || FUNC_3(VAR_8)) {
  FUNC_6(&VAR_4);
  return -VAR_0;
 }
 if (VAR_6 && (VAR_7 & VAR_3) &&
     !(VAR_7 & VAR_2)) {
  VAR_9 = FUNC_0(VAR_6, VAR_8->fw_name);
  if (VAR_9) {
   FUNC_6(&VAR_4);
   return VAR_9;
  }
 }





 if (!(VAR_7 & VAR_2) &&
     VAR_8->fwc->state == VAR_1) {
  if (FUNC_1(VAR_8->fw_name))
   FUNC_4(&VAR_8->ref);
 }


 FUNC_2(VAR_8, VAR_5);
 FUNC_6(&VAR_4);
 return 0;
}
