
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sa1111_dev {unsigned int skpcr_mask; int devid; } ;
struct sa1111 {int lock; scalar_t__ base; TYPE_1__* pdata; } ;
struct TYPE_2__ {int (* enable ) (int ,int ) ;int data; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 struct sa1111* FUNC_1 (struct sa1111_dev*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

int FUNC_6(struct sa1111_dev *VAR_1)
{
 struct sa1111 *VAR_2 = FUNC_1(VAR_1);
 unsigned long VAR_3;
 unsigned int VAR_4;
 int VAR_5 = 0;

 if (VAR_2->pdata && VAR_2->pdata->enable)
  VAR_5 = VAR_2->pdata->enable(VAR_2->pdata->data, VAR_1->devid);

 if (VAR_5 == 0) {
  FUNC_2(&VAR_2->lock, VAR_3);
  VAR_4 = FUNC_0(VAR_2->base + VAR_0);
  FUNC_5(VAR_4 | VAR_1->skpcr_mask, VAR_2->base + VAR_0);
  FUNC_3(&VAR_2->lock, VAR_3);
 }
 return VAR_5;
}
