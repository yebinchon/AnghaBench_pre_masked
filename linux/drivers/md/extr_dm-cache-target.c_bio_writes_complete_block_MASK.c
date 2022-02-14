
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache {int sectors_per_block; } ;
struct TYPE_2__ {int bi_size; } ;
struct bio {TYPE_1__ bi_iter; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct bio*) ;

__attribute__((used)) static bool FUNC_1(struct cache *VAR_2, struct bio *VAR_3)
{
 return (FUNC_0(VAR_3) == VAR_1) &&
  (VAR_3->bi_iter.bi_size == (VAR_2->sectors_per_block << VAR_0));
}
