
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bi_size; int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef int sector_t ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static void FUNC_1(struct bio *VAR_0, sector_t VAR_1, unsigned VAR_2)
{
 VAR_0->bi_iter.bi_sector = VAR_1;
 VAR_0->bi_iter.bi_size = FUNC_0(VAR_2);
}
