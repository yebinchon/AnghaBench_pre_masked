
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct bcma_drv_pcie2 {TYPE_2__* core; } ;
struct TYPE_3__ {int rev; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bcma_drv_pcie2*,int ,int) ;
 int FUNC_1 (struct bcma_drv_pcie2*,int ,int ) ;
 int FUNC_2 (struct bcma_drv_pcie2*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct bcma_drv_pcie2 *VAR_6)
{
 u8 VAR_7 = VAR_6->core->id.rev;
 bool VAR_8, VAR_9;

 VAR_8 = VAR_7 == 7 || VAR_7 == 9 || VAR_7 == 11;
 VAR_9 = VAR_7 == 5 || VAR_7 == 7 || VAR_7 == 8 ||
       VAR_7 == 9 || VAR_7 == 11;

 if (!VAR_8 && !VAR_9)
  return;
}
