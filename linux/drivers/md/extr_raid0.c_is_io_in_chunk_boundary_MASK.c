
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int dummy; } ;
struct TYPE_2__ {unsigned int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef unsigned int sector_t ;


 unsigned int FUNC_0 (struct bio*) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;

__attribute__((used)) static inline int FUNC_4(struct mddev *VAR_0,
   unsigned int VAR_1, struct bio *VAR_2)
{
 if (FUNC_2(FUNC_1(VAR_1))) {
  return VAR_1 >=
   ((VAR_2->bi_iter.bi_sector & (VAR_1-1))
     + FUNC_0(VAR_2));
 } else{
  sector_t VAR_3 = VAR_2->bi_iter.bi_sector;
  return VAR_1 >= (FUNC_3(VAR_3, VAR_1)
      + FUNC_0(VAR_2));
 }
}
