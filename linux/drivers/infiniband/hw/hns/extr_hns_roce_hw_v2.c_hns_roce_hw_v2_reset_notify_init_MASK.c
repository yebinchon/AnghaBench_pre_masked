
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* reset_state; int state; } ;
struct hnae3_handle {TYPE_2__ rinfo; int * priv; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct hnae3_handle *VAR_3)
{
 struct device *VAR_4 = &VAR_3->pdev->dev;
 int VAR_5;

 if (FUNC_3(VAR_0,
          &VAR_3->rinfo.state)) {
  VAR_3->rinfo.reset_state = VAR_2;
  return 0;
 }

 VAR_3->rinfo.reset_state = VAR_1;

 FUNC_2(&VAR_3->pdev->dev, "In reset process RoCE client reinit.\n");
 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5) {




  VAR_3->priv = ((void*)0);
  FUNC_1(VAR_4, "In reset process RoCE reinit failed %d.\n", VAR_5);
 } else {
  VAR_3->rinfo.reset_state = VAR_2;
  FUNC_2(VAR_4, "Reset done, RoCE client reinit finished.\n");
 }

 return VAR_5;
}
