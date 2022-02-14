
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reset_state; int state; } ;
struct hnae3_handle {TYPE_2__* pdev; TYPE_1__ rinfo; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hnae3_handle*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct hnae3_handle *VAR_3)
{
 if (FUNC_3(VAR_0, &VAR_3->rinfo.state))
  return 0;

 VAR_3->rinfo.reset_state = VAR_1;
 FUNC_1(&VAR_3->pdev->dev, "In reset process RoCE client uninit.\n");
 FUNC_2(VAR_2);
 FUNC_0(VAR_3, 0);

 return 0;
}
