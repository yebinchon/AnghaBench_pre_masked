
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int bi_size; } ;
struct bio {TYPE_1__ bi_iter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct bio *VAR_1)
{

 if (FUNC_1(FUNC_0(VAR_1) == VAR_0))
  return 512;
 return VAR_1->bi_iter.bi_size;
}
