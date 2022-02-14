
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int pdev; } ;
struct uld_ctx {TYPE_2__* dev; TYPE_3__ lldi; int reg_work; } ;
struct ib_event {int * device; int event; } ;
typedef enum cxgb4_state { ____Placeholder_cxgb4_state } cxgb4_state ;
struct TYPE_6__ {int flags; } ;
struct TYPE_7__ {int ibdev; TYPE_1__ rdev; } ;







 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_4 (struct uld_ctx*) ;
 int FUNC_5 (struct ib_event*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_11(void *VAR_4, enum cxgb4_state VAR_5)
{
 struct uld_ctx *VAR_6 = VAR_4;

 FUNC_7("new_state %u\n", VAR_5);
 switch (VAR_5) {
 case 128:
  FUNC_9("%s: Up\n", FUNC_6(VAR_6->lldi.pdev));
  if (!VAR_6->dev) {
   VAR_6->dev = FUNC_3(&VAR_6->lldi);
   if (FUNC_1(VAR_6->dev)) {
    FUNC_8("%s: initialization failed: %ld\n",
           FUNC_6(VAR_6->lldi.pdev),
           FUNC_2(VAR_6->dev));
    VAR_6->dev = ((void*)0);
    break;
   }

   FUNC_0(&VAR_6->reg_work, VAR_2);
   FUNC_10(VAR_3, &VAR_6->reg_work);
  }
  break;
 case 131:
  FUNC_9("%s: Down\n", FUNC_6(VAR_6->lldi.pdev));
  if (VAR_6->dev)
   FUNC_4(VAR_6);
  break;
 case 130:
 case 129:
  FUNC_9("%s: Fatal Error\n", FUNC_6(VAR_6->lldi.pdev));
  if (VAR_6->dev) {
   struct ib_event VAR_7 = {};

   VAR_6->dev->rdev.flags |= VAR_1;
   VAR_7.event = VAR_0;
   VAR_7.device = &VAR_6->dev->ibdev;
   FUNC_5(&VAR_7);
   FUNC_4(VAR_6);
  }
  break;
 case 132:
  FUNC_9("%s: Detach\n", FUNC_6(VAR_6->lldi.pdev));
  if (VAR_6->dev)
   FUNC_4(VAR_6);
  break;
 }
 return 0;
}
