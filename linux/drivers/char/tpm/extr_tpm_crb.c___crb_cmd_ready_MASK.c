
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct crb_priv {scalar_t__ sm; TYPE_1__* regs_t; } ;
struct TYPE_2__ {int ctrl_req; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_6, struct crb_priv *VAR_7)
{
 if ((VAR_7->sm == VAR_2) ||
     (VAR_7->sm == VAR_1) ||
     (VAR_7->sm == VAR_0))
  return 0;

 FUNC_2(VAR_3, &VAR_7->regs_t->ctrl_req);
 if (!FUNC_0(&VAR_7->regs_t->ctrl_req,
     VAR_3 ,
     0,
     VAR_5)) {
  FUNC_1(VAR_6, "cmdReady timed out\n");
  return -VAR_4;
 }

 return 0;
}
