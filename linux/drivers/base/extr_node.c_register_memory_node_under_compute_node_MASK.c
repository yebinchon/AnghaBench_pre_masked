
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct node_access_nodes {TYPE_1__ dev; } ;
struct TYPE_4__ {int kobj; } ;
struct node {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 struct node** VAR_2 ;
 struct node_access_nodes* FUNC_1 (struct node*,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (int *,char*,int ) ;

int FUNC_5(unsigned int VAR_3,
         unsigned int VAR_4,
         unsigned VAR_5)
{
 struct node *VAR_6, *VAR_7;
 struct node_access_nodes *VAR_8, *VAR_9;
 int VAR_10;

 if (!FUNC_2(VAR_4) || !FUNC_2(VAR_3))
  return -VAR_0;

 VAR_6 = VAR_2[VAR_4];
 VAR_7 = VAR_2[VAR_3];
 VAR_8 = FUNC_1(VAR_6, VAR_5);
 VAR_9 = FUNC_1(VAR_7, VAR_5);
 if (!VAR_8 || !VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_3(&VAR_8->dev.kobj, "targets",
          &VAR_7->dev.kobj,
          FUNC_0(&VAR_7->dev));
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(&VAR_9->dev.kobj, "initiators",
          &VAR_6->dev.kobj,
          FUNC_0(&VAR_6->dev));
 if (VAR_10)
  goto err;

 return 0;
 err:
 FUNC_4(&VAR_8->dev.kobj, "targets",
         FUNC_0(&VAR_7->dev));
 return VAR_10;
}
