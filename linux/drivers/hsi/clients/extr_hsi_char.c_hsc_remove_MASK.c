
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hsi_client {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct hsc_client_data {TYPE_1__ cdev; } ;
struct device {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct hsc_client_data* FUNC_1 (struct hsi_client*) ;
 int FUNC_2 (struct hsi_client*,int *) ;
 int FUNC_3 (struct hsc_client_data*) ;
 struct hsi_client* FUNC_4 (struct device*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1)
{
 struct hsi_client *VAR_2 = FUNC_4(VAR_1);
 struct hsc_client_data *VAR_3 = FUNC_1(VAR_2);
 dev_t VAR_4 = VAR_3->cdev.dev;

 FUNC_0(&VAR_3->cdev);
 FUNC_5(VAR_4, VAR_0);
 FUNC_2(VAR_2, ((void*)0));
 FUNC_3(VAR_3);

 return 0;
}
