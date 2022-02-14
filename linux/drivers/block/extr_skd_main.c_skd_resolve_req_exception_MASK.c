
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int status; } ;
struct skd_request_context {int status; int retries; int err_info; TYPE_2__ completion; } ;
struct skd_device {int timer_countdown; int state; TYPE_1__* pdev; } ;
struct request {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct skd_device*,int ,int *) ;
 int FUNC_5 (struct skd_device*,struct skd_request_context*,char*) ;
 int FUNC_6 (struct skd_device*) ;

__attribute__((used)) static void FUNC_7(struct skd_device *VAR_4,
          struct skd_request_context *VAR_5,
          struct request *VAR_6)
{
 u8 VAR_7 = VAR_5->completion.status;

 switch (FUNC_4(VAR_4, VAR_7, &VAR_5->err_info)) {
 case 130:
 case 129:
  VAR_5->status = VAR_1;
  FUNC_1(VAR_6);
  break;

 case 132:
  FUNC_5(VAR_4, VAR_5, "retry(busy)");
  FUNC_2(VAR_6, 1);
  FUNC_3(&VAR_4->pdev->dev, "drive BUSY imminent\n");
  VAR_4->state = VAR_2;
  VAR_4->timer_countdown = FUNC_0(20);
  FUNC_6(VAR_4);
  break;

 case 128:
  if (++VAR_5->retries < VAR_3) {
   FUNC_5(VAR_4, VAR_5, "retry");
   FUNC_2(VAR_6, 1);
   break;
  }


 case 131:
 default:
  VAR_5->status = VAR_0;
  FUNC_1(VAR_6);
  break;
 }
}
