
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clone {unsigned long region_shift; int region_size; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;


 unsigned long FUNC_0 (struct bio*) ;
 unsigned long FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct clone *VAR_0, struct bio *VAR_1,
        unsigned long *VAR_2, unsigned long *VAR_3)
{
 *VAR_2 = FUNC_1(VAR_1->bi_iter.bi_sector, VAR_0->region_size);
 *VAR_3 = FUNC_0(VAR_1) >> VAR_0->region_shift;
}
