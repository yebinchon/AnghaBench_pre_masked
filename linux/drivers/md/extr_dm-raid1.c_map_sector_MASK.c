
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mirror {TYPE_1__* ms; scalar_t__ offset; } ;
struct TYPE_4__ {int bi_sector; int bi_size; } ;
struct bio {TYPE_2__ bi_iter; } ;
typedef scalar_t__ sector_t ;
struct TYPE_3__ {int ti; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static sector_t FUNC_2(struct mirror *VAR_0, struct bio *VAR_1)
{
 if (FUNC_1(!VAR_1->bi_iter.bi_size))
  return 0;
 return VAR_0->offset + FUNC_0(VAR_0->ms->ti, VAR_1->bi_iter.bi_sector);
}
