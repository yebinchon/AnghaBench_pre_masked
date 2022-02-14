
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct block_device {int dummy; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef int sector_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct request_queue* FUNC_2 (struct block_device*) ;
 scalar_t__ FUNC_3 (struct block_device*) ;
 int FUNC_4 (struct bio*,int ,unsigned int,int ) ;
 int FUNC_5 (struct bio*,struct block_device*) ;
 int FUNC_6 (struct bio*,int ,int ) ;
 struct bio* FUNC_7 (struct bio*,int ,int ) ;
 int FUNC_8 () ;
 unsigned int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct block_device *VAR_4,
  sector_t VAR_5, sector_t VAR_6, gfp_t VAR_7,
  struct bio **VAR_8)
{
 struct request_queue *VAR_9 = FUNC_2(VAR_4);
 struct bio *VAR_10 = *VAR_8;
 int VAR_11 = 0;
 unsigned int VAR_12;

 if (!VAR_9)
  return -VAR_0;

 if (FUNC_3(VAR_4))
  return -VAR_1;

 while (VAR_6 != 0) {
  VAR_10 = FUNC_7(VAR_10, FUNC_1(VAR_6),
       VAR_7);
  VAR_10->bi_iter.bi_sector = VAR_5;
  FUNC_5(VAR_10, VAR_4);
  FUNC_6(VAR_10, VAR_3, 0);

  while (VAR_6 != 0) {
   VAR_12 = FUNC_9((sector_t) VAR_2, VAR_6 << 9);
   VAR_11 = FUNC_4(VAR_10, FUNC_0(0), VAR_12, 0);
   VAR_6 -= VAR_11 >> 9;
   VAR_5 += VAR_11 >> 9;
   if (VAR_11 < VAR_12)
    break;
  }
  FUNC_8();
 }

 *VAR_8 = VAR_10;
 return 0;
}
