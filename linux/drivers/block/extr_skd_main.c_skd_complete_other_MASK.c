
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int id; int state; } ;
struct skd_special_context {TYPE_2__ req; } ;
struct skd_device {struct skd_special_context internal_skspcl; TYPE_1__* pdev; int lock; } ;
struct fit_completion_entry_v1 {int tag; } ;
struct fit_comp_error_info {int dummy; } ;
struct TYPE_3__ {int dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct skd_device*,struct fit_completion_entry_v1*,struct fit_comp_error_info*,struct skd_special_context*) ;

__attribute__((used)) static void FUNC_3(struct skd_device *VAR_3,
          struct fit_completion_entry_v1 *VAR_4,
          struct fit_comp_error_info *VAR_5)
{
 u32 VAR_6 = 0;
 u32 VAR_7;
 u32 VAR_8;
 struct skd_special_context *VAR_9;

 FUNC_1(&VAR_3->lock);

 VAR_6 = VAR_4->tag;
 VAR_7 = VAR_6 & VAR_1;
 VAR_8 = VAR_6 & VAR_0;

 FUNC_0(&VAR_3->pdev->dev, "table=0x%x id=0x%x slot=%d\n", VAR_7,
  VAR_6, VAR_8);






 switch (VAR_7) {
 case 128:





  break;

 case 129:
  if (VAR_8 == 0) {
   VAR_9 = &VAR_3->internal_skspcl;
   if (VAR_9->req.id == VAR_6 &&
       VAR_9->req.state == VAR_2) {
    FUNC_2(VAR_3,
            VAR_4, VAR_5, VAR_9);
    return;
   }
  }
  break;

 case 130:



  break;

 default:



  break;
 }




}
