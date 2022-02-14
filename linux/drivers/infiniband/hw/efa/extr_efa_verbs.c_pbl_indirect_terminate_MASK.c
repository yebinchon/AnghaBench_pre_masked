
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sgl; int pbl_buf_size_in_pages; } ;
struct TYPE_6__ {TYPE_2__ indirect; } ;
struct pbl_context {TYPE_3__ phys; } ;
struct efa_dev {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct efa_dev*,struct pbl_context*) ;

__attribute__((used)) static void FUNC_3(struct efa_dev *VAR_1, struct pbl_context *VAR_2)
{
 FUNC_2(VAR_1, VAR_2);
 FUNC_0(&VAR_1->pdev->dev, VAR_2->phys.indirect.sgl,
       VAR_2->phys.indirect.pbl_buf_size_in_pages, VAR_0);
 FUNC_1(VAR_2->phys.indirect.sgl);
}
