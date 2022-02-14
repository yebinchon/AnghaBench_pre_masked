
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bi_sector; int bi_size; } ;
struct bio {TYPE_1__ bi_iter; struct bio* bi_private; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;

__attribute__((used)) static void FUNC_2(struct bio *VAR_0)
{
 struct bio *VAR_1 = VAR_0->bi_private;

 VAR_1->bi_iter.bi_size = VAR_0->bi_iter.bi_size;
 VAR_1->bi_iter.bi_sector = VAR_0->bi_iter.bi_sector;

 FUNC_1(VAR_0);

 FUNC_0(VAR_1);
}
