
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsxx_cardinfo {TYPE_1__* gendisk; int queue; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int part0; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int ,int ,int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct rsxx_cardinfo *VAR_0,
    struct bio *VAR_1,
    unsigned long VAR_2)
{
 FUNC_1(VAR_0->queue, FUNC_0(VAR_1),
       &VAR_0->gendisk->part0, VAR_2);
}
