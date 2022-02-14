
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int discard_granularity; int discard_alignment; int max_discard_sectors; } ;
struct request_queue {TYPE_1__ limits; } ;
struct bio_set {int dummy; } ;
struct TYPE_4__ {unsigned int bi_sector; } ;
struct bio {TYPE_2__ bi_iter; } ;
typedef unsigned int sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*) ;
 unsigned int FUNC_1 (struct bio*) ;
 struct bio* FUNC_2 (struct bio*,unsigned int,int ,struct bio_set*) ;
 unsigned int FUNC_3 (int,unsigned int) ;
 unsigned int FUNC_4 (int ,int ) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static struct bio *FUNC_7(struct request_queue *VAR_1,
      struct bio *VAR_2,
      struct bio_set *VAR_3,
      unsigned *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 int VAR_7;
 sector_t VAR_8;
 unsigned VAR_9;

 *VAR_4 = 1;


 VAR_6 = FUNC_3(VAR_1->limits.discard_granularity >> 9, 1U);

 VAR_5 = FUNC_4(VAR_1->limits.max_discard_sectors,
   FUNC_0(VAR_1));
 VAR_5 -= VAR_5 % VAR_6;

 if (FUNC_6(!VAR_5)) {

  return ((void*)0);
 }

 if (FUNC_1(VAR_2) <= VAR_5)
  return ((void*)0);

 VAR_9 = VAR_5;





 VAR_7 = (VAR_1->limits.discard_alignment >> 9) % VAR_6;

 VAR_8 = VAR_2->bi_iter.bi_sector + VAR_9 - VAR_7;
 VAR_8 = FUNC_5(VAR_8, VAR_6);

 if (VAR_9 > VAR_8)
  VAR_9 -= VAR_8;

 return FUNC_2(VAR_2, VAR_9, VAR_0, VAR_3);
}
