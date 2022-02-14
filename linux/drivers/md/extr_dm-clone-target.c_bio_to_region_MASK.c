
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clone {unsigned long region_shift; } ;
struct TYPE_2__ {unsigned long bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;



__attribute__((used)) static inline unsigned long FUNC_0(struct clone *VAR_0, struct bio *VAR_1)
{
 return (VAR_1->bi_iter.bi_sector >> VAR_0->region_shift);
}
