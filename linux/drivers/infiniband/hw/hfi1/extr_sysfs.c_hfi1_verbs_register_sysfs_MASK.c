
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct device {int kobj; } ;
struct ib_device {struct device dev; } ;
struct TYPE_6__ {struct ib_device ibdev; } ;
struct TYPE_7__ {TYPE_1__ rdi; } ;
struct hfi1_devdata {int num_sdma; TYPE_3__* per_sdma; TYPE_2__ verbs_dev; } ;
struct TYPE_9__ {int attr; } ;
struct TYPE_8__ {int kobj; } ;


 int FUNC_0 (TYPE_4__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,char*,int) ;
 TYPE_4__** VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(struct hfi1_devdata *VAR_2)
{
 struct ib_device *VAR_3 = &VAR_2->verbs_dev.rdi.ibdev;
 struct device *VAR_4 = &VAR_3->dev;
 int VAR_5, VAR_6, VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_2->num_sdma; VAR_5++) {
  VAR_7 = FUNC_2(&VAR_2->per_sdma[VAR_5].kobj,
        &VAR_1, &VAR_4->kobj,
        "sdma%d", VAR_5);
  if (VAR_7)
   goto bail;

  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
   VAR_7 = FUNC_3(&VAR_2->per_sdma[VAR_5].kobj,
      &VAR_0[VAR_6]->attr);
   if (VAR_7)
    goto bail;
  }
 }

 return 0;
bail:
 for (VAR_5 = 0; VAR_5 < VAR_2->num_sdma; VAR_5++)
  FUNC_1(&VAR_2->per_sdma[VAR_5].kobj);

 return VAR_7;
}
