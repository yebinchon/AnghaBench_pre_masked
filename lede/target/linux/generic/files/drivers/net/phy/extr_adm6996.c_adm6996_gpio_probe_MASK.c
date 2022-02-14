
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct adm6996_gpio_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct adm6996_priv {int eesk; int eedi; int eecs; int write; int read; int model; int mib_lock; int reg_mutex; } ;
struct adm6996_gpio_platform_data {int model; int eesk; int eedi; int eecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adm6996_priv*,int ,int *) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 struct adm6996_priv* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct platform_device*,struct adm6996_priv*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_5)
{
 struct adm6996_gpio_platform_data *VAR_6 = VAR_5->dev.platform_data;
 struct adm6996_priv *VAR_7;
 int VAR_8;

 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_3(&VAR_5->dev, sizeof(struct adm6996_priv), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_4(&VAR_7->reg_mutex);
 FUNC_4(&VAR_7->mib_lock);

 VAR_7->eecs = VAR_6->eecs;
 VAR_7->eedi = VAR_6->eedi;
 VAR_7->eesk = VAR_6->eesk;

 VAR_7->model = VAR_6->model;
 VAR_7->read = VAR_3;
 VAR_7->write = VAR_4;

 VAR_8 = FUNC_2(&VAR_5->dev, VAR_7->eecs, "adm_eecs");
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_2(&VAR_5->dev, VAR_7->eedi, "adm_eedi");
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_2(&VAR_5->dev, VAR_7->eesk, "adm_eesk");
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_7, FUNC_1(&VAR_5->dev), ((void*)0));
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_5(VAR_5, VAR_7);

 return 0;
}
