
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef int sector_t ;


 int VAR_0 ;

__attribute__((used)) static inline sector_t FUNC_0(struct bio *VAR_1)
{
 return VAR_1->bi_iter.bi_sector / VAR_0;
}
