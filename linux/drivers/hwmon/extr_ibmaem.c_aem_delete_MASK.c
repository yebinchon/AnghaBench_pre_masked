
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int user; } ;
struct aem_data {int id; int pdev; TYPE_1__ ipmi; int hwmon_dev; struct aem_data* rs_resp; int list; } ;


 int VAR_0 ;
 int FUNC_0 (struct aem_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct aem_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct aem_data *VAR_1)
{
 FUNC_5(&VAR_1->list);
 FUNC_0(VAR_1);
 FUNC_4(VAR_1->rs_resp);
 FUNC_1(VAR_1->hwmon_dev);
 FUNC_3(VAR_1->ipmi.user);
 FUNC_7(VAR_1->pdev, ((void*)0));
 FUNC_6(VAR_1->pdev);
 FUNC_2(&VAR_0, VAR_1->id);
 FUNC_4(VAR_1);
}
