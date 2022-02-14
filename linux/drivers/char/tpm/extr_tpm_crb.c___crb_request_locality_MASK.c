
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct crb_priv {TYPE_1__* regs_h; } ;
struct TYPE_2__ {int loc_state; int loc_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_5,
      struct crb_priv *VAR_6, int VAR_7)
{
 u32 VAR_8 = VAR_1 |
      VAR_2;

 if (!VAR_6->regs_h)
  return 0;

 FUNC_2(VAR_0, &VAR_6->regs_h->loc_ctrl);
 if (!FUNC_0(&VAR_6->regs_h->loc_state, VAR_8, VAR_8,
     VAR_4)) {
  FUNC_1(VAR_5, "TPM_LOC_STATE_x.requestAccess timed out\n");
  return -VAR_3;
 }

 return 0;
}
