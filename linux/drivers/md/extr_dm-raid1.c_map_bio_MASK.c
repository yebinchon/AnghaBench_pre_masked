
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mirror {TYPE_1__* dev; } ;
struct TYPE_4__ {int bi_sector; } ;
struct bio {TYPE_2__ bi_iter; } ;
struct TYPE_3__ {int bdev; } ;


 int FUNC_0 (struct bio*,int ) ;
 int FUNC_1 (struct mirror*,struct bio*) ;

__attribute__((used)) static void FUNC_2(struct mirror *VAR_0, struct bio *VAR_1)
{
 FUNC_0(VAR_1, VAR_0->dev->bdev);
 VAR_1->bi_iter.bi_sector = FUNC_1(VAR_0, VAR_1);
}
