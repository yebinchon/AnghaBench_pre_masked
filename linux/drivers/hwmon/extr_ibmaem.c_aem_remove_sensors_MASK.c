
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct aem_data {TYPE_1__* pdev; TYPE_3__* sensors; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_12__ {TYPE_2__ attr; } ;
struct TYPE_11__ {TYPE_6__ dev_attr; } ;
struct TYPE_10__ {TYPE_6__ dev_attr; } ;
struct TYPE_9__ {TYPE_6__ dev_attr; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_6__*) ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static void FUNC_1(struct aem_data *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!VAR_3->sensors[VAR_4].dev_attr.attr.name)
   continue;
  FUNC_0(&VAR_3->pdev->dev,
       &VAR_3->sensors[VAR_4].dev_attr);
 }

 FUNC_0(&VAR_3->pdev->dev,
      &VAR_1.dev_attr);
 FUNC_0(&VAR_3->pdev->dev,
      &VAR_2.dev_attr);
}
