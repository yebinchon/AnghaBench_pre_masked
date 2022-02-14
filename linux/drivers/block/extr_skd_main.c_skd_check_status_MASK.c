
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sns_info {int mask; scalar_t__ type; scalar_t__ stat; scalar_t__ key; scalar_t__ asc; scalar_t__ ascq; scalar_t__ action; } ;
struct skd_device {TYPE_1__* pdev; } ;
struct fit_comp_error_info {scalar_t__ key; scalar_t__ code; scalar_t__ qual; scalar_t__ type; int fruc; } ;
typedef enum skd_check_status_action { ____Placeholder_skd_check_status_action } skd_check_status_action ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct sns_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,scalar_t__,scalar_t__,scalar_t__,...) ;
 struct sns_info* VAR_3 ;

__attribute__((used)) static enum skd_check_status_action
FUNC_3(struct skd_device *VAR_4,
   u8 VAR_5, struct fit_comp_error_info *VAR_6)
{
 int VAR_7;

 FUNC_2(&VAR_4->pdev->dev, "key/asc/ascq/fruc %02x/%02x/%02x/%02x\n",
  VAR_6->key, VAR_6->code, VAR_6->qual, VAR_6->fruc);

 FUNC_1(&VAR_4->pdev->dev,
  "stat: t=%02x stat=%02x k=%02x c=%02x q=%02x fruc=%02x\n",
  VAR_6->type, VAR_5, VAR_6->key, VAR_6->code, VAR_6->qual,
  VAR_6->fruc);


 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
  struct sns_info *VAR_8 = &VAR_3[VAR_7];

  if (VAR_8->mask & 0x10)
   if (VAR_6->type != VAR_8->type)
    continue;

  if (VAR_8->mask & 0x08)
   if (VAR_5 != VAR_8->stat)
    continue;

  if (VAR_8->mask & 0x04)
   if (VAR_6->key != VAR_8->key)
    continue;

  if (VAR_8->mask & 0x02)
   if (VAR_6->code != VAR_8->asc)
    continue;

  if (VAR_8->mask & 0x01)
   if (VAR_6->qual != VAR_8->ascq)
    continue;

  if (VAR_8->action == VAR_2) {
   FUNC_2(&VAR_4->pdev->dev,
    "SMART Alert: sense key/asc/ascq %02x/%02x/%02x\n",
    VAR_6->key, VAR_6->code, VAR_6->qual);
  }
  return VAR_8->action;
 }




 if (VAR_5) {
  FUNC_1(&VAR_4->pdev->dev, "status check: error\n");
  return VAR_0;
 }

 FUNC_1(&VAR_4->pdev->dev, "status check good default\n");
 return VAR_1;
}
