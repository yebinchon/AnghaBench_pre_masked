
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panfrost_perfcnt {int lock; struct panfrost_file_priv* user; } ;
struct panfrost_file_priv {struct panfrost_device* pfdev; } ;
struct panfrost_device {int dev; struct panfrost_perfcnt* perfcnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct panfrost_device*,struct panfrost_file_priv*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct panfrost_file_priv *VAR_0)
{
 struct panfrost_device *VAR_1 = VAR_0->pfdev;
 struct panfrost_perfcnt *VAR_2 = VAR_1->perfcnt;

 FUNC_3(VAR_1->dev);
 FUNC_0(&VAR_2->lock);
 if (VAR_2->user == VAR_0)
  FUNC_2(VAR_1, VAR_0);
 FUNC_1(&VAR_2->lock);
 FUNC_4(VAR_1->dev);
 FUNC_5(VAR_1->dev);
}
