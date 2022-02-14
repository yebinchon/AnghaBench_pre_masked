
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hisi_qm {scalar_t__ io_base; int ver; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct hisi_qm *VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5,
    u32 VAR_6)
{
 FUNC_0(&VAR_2->pdev->dev,
   "QM v%d does not support hw error handle\n", VAR_2->ver);

 FUNC_1(VAR_1, VAR_2->io_base + VAR_0);
}
