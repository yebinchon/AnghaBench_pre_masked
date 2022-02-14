
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hisi_qm {TYPE_2__* ops; TYPE_1__* pdev; } ;
struct TYPE_4__ {int (* get_vft ) (struct hisi_qm*,int *,int *) ;} ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hisi_qm*,int *,int *) ;

int FUNC_2(struct hisi_qm *VAR_1, u32 *VAR_2, u32 *VAR_3)
{
 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 if (!VAR_1->ops->get_vft) {
  FUNC_0(&VAR_1->pdev->dev, "Don't support vft read!\n");
  return -VAR_0;
 }

 return VAR_1->ops->get_vft(VAR_1, VAR_2, VAR_3);
}
