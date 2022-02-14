
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct device {int dummy; } ;
struct cmdq_task {TYPE_3__* pkt; int pa_base; TYPE_2__* cmdq; } ;
struct TYPE_6__ {int* va_base; int cmd_buf_size; } ;
struct TYPE_4__ {struct device* dev; } ;
struct TYPE_5__ {TYPE_1__ mbox; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 int FUNC_3 (struct device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct cmdq_task *VAR_3)
{
 struct device *VAR_4 = VAR_3->cmdq->mbox.dev;
 u64 *VAR_5 = VAR_3->pkt->va_base;
 int VAR_6;

 FUNC_2(VAR_4, VAR_3->pa_base, VAR_3->pkt->cmd_buf_size,
    VAR_2);
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->pkt); VAR_6++)
  if (FUNC_1(VAR_5[VAR_6]))
   VAR_5[VAR_6] = (u64)VAR_0 << 32 |
      VAR_1;
 FUNC_3(VAR_4, VAR_3->pa_base, VAR_3->pkt->cmd_buf_size,
       VAR_2);
}
