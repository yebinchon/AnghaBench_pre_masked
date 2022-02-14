
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmz_target {int dummy; } ;
struct TYPE_2__ {int bi_size; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef int sector_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct bio*,unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct bio*) ;

__attribute__((used)) static void FUNC_3(struct dmz_target *VAR_1, struct bio *VAR_2,
     sector_t VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = VAR_4 << VAR_0;


 FUNC_1(VAR_2->bi_iter.bi_size, VAR_5);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2->bi_iter.bi_size, VAR_5);

 FUNC_0(VAR_2, VAR_5);
}
