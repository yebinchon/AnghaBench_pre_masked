
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pool {int sectors_per_block; } ;
struct TYPE_2__ {int bi_size; } ;
struct bio {TYPE_1__ bi_iter; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pool *VAR_1, struct bio *VAR_2)
{
 return VAR_2->bi_iter.bi_size ==
  (VAR_1->sectors_per_block << VAR_0);
}
