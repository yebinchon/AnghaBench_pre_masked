
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct elan_tp_data {TYPE_2__* client; TYPE_1__* ops; int fw_completion; scalar_t__ in_fw_update; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {int (* get_report ) (TYPE_2__*,int*) ;} ;


 int VAR_0 ;

 size_t VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct elan_tp_data*,int*) ;
 int FUNC_3 (struct elan_tp_data*,int*) ;
 int FUNC_4 (struct device*,int ) ;
 int FUNC_5 (TYPE_2__*,int*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct elan_tp_data *VAR_5 = VAR_4;
 struct device *VAR_6 = &VAR_5->client->dev;
 int VAR_7;
 u8 VAR_8[VAR_0];






 if (VAR_5->in_fw_update) {
  FUNC_0(&VAR_5->fw_completion);
  goto out;
 }

 VAR_7 = VAR_5->ops->get_report(VAR_5->client, VAR_8);
 if (VAR_7)
  goto out;

 FUNC_4(VAR_6, 0);

 switch (VAR_8[VAR_1]) {
 case 129:
  FUNC_2(VAR_5, VAR_8);
  break;
 case 128:
  FUNC_3(VAR_5, VAR_8);
  break;
 default:
  FUNC_1(VAR_6, "invalid report id data (%x)\n",
   VAR_8[VAR_1]);
 }

out:
 return VAR_2;
}
