
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elan_tp_data {int clickpad; int sm_version; int ic_type; int client; TYPE_1__* ops; int product_id; } ;
struct TYPE_2__ {int (* get_product_id ) (int ,int *) ;int (* get_sm_version ) (int ,int *,int *,int *) ;} ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct elan_tp_data *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->ops->get_product_id(VAR_0->client, &VAR_0->product_id);
 if (VAR_1)
  return VAR_1;

 VAR_1 = VAR_0->ops->get_sm_version(VAR_0->client, &VAR_0->ic_type,
       &VAR_0->sm_version, &VAR_0->clickpad);
 if (VAR_1)
  return VAR_1;

 return 0;
}
