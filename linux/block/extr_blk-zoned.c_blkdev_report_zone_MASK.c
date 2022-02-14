
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct block_device {TYPE_1__* bd_part; } ;
struct blk_zone {scalar_t__ start; scalar_t__ len; scalar_t__ type; scalar_t__ wp; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {scalar_t__ nr_sects; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct block_device*) ;

__attribute__((used)) static bool FUNC_1(struct block_device *VAR_1, struct blk_zone *VAR_2)
{
 sector_t VAR_3 = FUNC_0(VAR_1);

 if (VAR_2->start < VAR_3)
  return 0;

 VAR_2->start -= VAR_3;
 if (VAR_2->start + VAR_2->len > VAR_1->bd_part->nr_sects)
  return 0;

 if (VAR_2->type == VAR_0)
  VAR_2->wp = VAR_2->start + VAR_2->len;
 else
  VAR_2->wp -= VAR_3;
 return 1;
}
