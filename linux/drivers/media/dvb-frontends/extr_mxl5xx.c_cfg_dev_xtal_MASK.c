
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mxl {TYPE_1__* base; } ;
struct TYPE_2__ {scalar_t__ can_clkout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mxl*,int,int,int,int) ;
 int FUNC_1 (struct mxl*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mxl *VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 if (VAR_2->base->can_clkout || !VAR_5)
  FUNC_0(VAR_2, 0x90200054, 23, 1, VAR_5);

 if (VAR_3 == 24000000)
  FUNC_1(VAR_2, VAR_1, 0);
 else
  FUNC_1(VAR_2, VAR_1, 1);

 FUNC_1(VAR_2, VAR_0, VAR_4);
}
