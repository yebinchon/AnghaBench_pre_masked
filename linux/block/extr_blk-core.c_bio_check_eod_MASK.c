
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef unsigned int sector_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,unsigned int) ;

__attribute__((used)) static inline int FUNC_2(struct bio *VAR_1, sector_t VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_1);

 if (VAR_3 && VAR_2 &&
     (VAR_3 > VAR_2 ||
      VAR_1->bi_iter.bi_sector > VAR_2 - VAR_3)) {
  FUNC_1(VAR_1, VAR_2);
  return -VAR_0;
 }
 return 0;
}
