
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nullb {TYPE_3__* q; TYPE_2__* dev; } ;
struct TYPE_5__ {int discard_alignment; int discard_granularity; } ;
struct TYPE_7__ {TYPE_1__ limits; } ;
struct TYPE_6__ {int discard; int blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_2(struct nullb *VAR_2)
{
 if (VAR_2->dev->discard == 0)
  return;
 VAR_2->q->limits.discard_granularity = VAR_2->dev->blocksize;
 VAR_2->q->limits.discard_alignment = VAR_2->dev->blocksize;
 FUNC_1(VAR_2->q, VAR_1 >> 9);
 FUNC_0(VAR_0, VAR_2->q);
}
