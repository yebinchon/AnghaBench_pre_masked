
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct hidma_mgmt_dev {TYPE_1__* pdev; } ;
struct TYPE_7__ {char* name; int mode; } ;
struct TYPE_6__ {TYPE_3__ attr; int store; int show; } ;
struct hidma_chan_attr {int index; TYPE_2__ attr; struct hidma_mgmt_dev* mdev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hidma_chan_attr* FUNC_0 (int *,int,int ) ;
 char* FUNC_1 (int *,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct kobject*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(struct hidma_mgmt_dev *VAR_4, char *VAR_5,
          int VAR_6, int VAR_7,
          struct kobject *VAR_8)
{
 struct hidma_chan_attr *VAR_9;
 char *VAR_10;

 VAR_9 = FUNC_0(&VAR_4->pdev->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_1(&VAR_4->pdev->dev, VAR_5, VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_9->mdev = VAR_4;
 VAR_9->index = VAR_7;
 VAR_9->attr.attr.name = VAR_10;
 VAR_9->attr.attr.mode = VAR_6;
 VAR_9->attr.show = VAR_3;
 VAR_9->attr.store = VAR_2;
 FUNC_2(&VAR_9->attr.attr);

 return FUNC_3(VAR_8, &VAR_9->attr.attr);
}
