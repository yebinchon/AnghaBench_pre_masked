
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int eq_head; } ;
struct hisi_qm {TYPE_2__ status; TYPE_1__* pdev; scalar_t__ io_base; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hisi_qm*,int ,int ,int ,int ) ;
 int FUNC_2 (int,void*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct hisi_qm *VAR_5 = VAR_4;

 if (FUNC_3(VAR_5->io_base + VAR_2))
  return FUNC_2(VAR_3, VAR_4);

 FUNC_0(&VAR_5->pdev->dev, "invalid int source\n");
 FUNC_1(VAR_5, 0, VAR_1, VAR_5->status.eq_head, 0);

 return VAR_0;
}
