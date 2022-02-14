
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dispc_device {TYPE_2__* pdev; TYPE_1__* feat; } ;
struct TYPE_6__ {int paddr; int vaddr; int size; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int has_gamma_i734_bug; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct dispc_device *VAR_1)
{
 if (!VAR_1->feat->has_gamma_i734_bug)
  return;

 FUNC_0(&VAR_1->pdev->dev, VAR_0.size, VAR_0.vaddr,
      VAR_0.paddr);
}
