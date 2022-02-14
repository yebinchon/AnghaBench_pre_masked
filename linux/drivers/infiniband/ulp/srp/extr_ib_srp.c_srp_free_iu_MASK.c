
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srp_iu {struct srp_iu* buf; int direction; int size; int dma; } ;
struct srp_host {TYPE_1__* srp_dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct srp_iu*) ;

__attribute__((used)) static void FUNC_2(struct srp_host *VAR_0, struct srp_iu *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_0(VAR_0->srp_dev->dev, VAR_1->dma, VAR_1->size,
       VAR_1->direction);
 FUNC_1(VAR_1->buf);
 FUNC_1(VAR_1);
}
