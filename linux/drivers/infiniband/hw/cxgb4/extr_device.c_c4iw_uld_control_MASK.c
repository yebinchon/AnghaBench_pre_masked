
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int pdev; } ;
struct uld_ctx {TYPE_4__ lldi; TYPE_3__* dev; } ;
typedef enum cxgb4_control { ____Placeholder_cxgb4_control } cxgb4_control ;
struct TYPE_5__ {int lock; int db_drop; int db_empty; int db_full; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;
struct TYPE_7__ {TYPE_2__ rdev; } ;





 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct uld_ctx*) ;
 int FUNC_5 (struct uld_ctx*) ;
 int FUNC_6 (struct uld_ctx*) ;

__attribute__((used)) static int FUNC_7(void *VAR_0, enum cxgb4_control VAR_1, ...)
{
 struct uld_ctx *VAR_2 = VAR_0;

 switch (VAR_1) {
 case 128:
  FUNC_6(VAR_2);
  VAR_2->dev->rdev.stats.db_full++;
  break;
 case 129:
  FUNC_5(VAR_2);
  FUNC_0(&VAR_2->dev->rdev.stats.lock);
  VAR_2->dev->rdev.stats.db_empty++;
  FUNC_1(&VAR_2->dev->rdev.stats.lock);
  break;
 case 130:
  FUNC_4(VAR_2);
  FUNC_0(&VAR_2->dev->rdev.stats.lock);
  VAR_2->dev->rdev.stats.db_drop++;
  FUNC_1(&VAR_2->dev->rdev.stats.lock);
  break;
 default:
  FUNC_3("%s: unknown control cmd %u\n",
   FUNC_2(VAR_2->lldi.pdev), VAR_1);
  break;
 }
 return 0;
}
