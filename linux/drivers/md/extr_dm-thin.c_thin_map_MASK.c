
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {int dummy; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;


 int FUNC_0 (struct dm_target*,int ) ;
 int FUNC_1 (struct dm_target*,struct bio*) ;

__attribute__((used)) static int FUNC_2(struct dm_target *VAR_0, struct bio *VAR_1)
{
 VAR_1->bi_iter.bi_sector = FUNC_0(VAR_0, VAR_1->bi_iter.bi_sector);

 return FUNC_1(VAR_0, VAR_1);
}
