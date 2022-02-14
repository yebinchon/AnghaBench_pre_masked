
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ak8975_data {int cntl_cache; TYPE_1__* def; int client; } ;
typedef enum ak_ctrl_mode { ____Placeholder_ak_ctrl_mode } ak_ctrl_mode ;
struct TYPE_2__ {int* ctrl_masks; int* ctrl_modes; int * ctrl_regs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct ak8975_data *VAR_2, enum ak_ctrl_mode VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 VAR_4 = (VAR_2->cntl_cache & ~VAR_2->def->ctrl_masks[VAR_1]) |
   VAR_2->def->ctrl_modes[VAR_3];
 VAR_5 = FUNC_0(VAR_2->client,
     VAR_2->def->ctrl_regs[VAR_0], VAR_4);
 if (VAR_5 < 0) {
  return VAR_5;
 }
 VAR_2->cntl_cache = VAR_4;

 FUNC_1(100, 500);

 return 0;
}
