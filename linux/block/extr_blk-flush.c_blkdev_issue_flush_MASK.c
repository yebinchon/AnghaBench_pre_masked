
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int make_request_fn; } ;
struct block_device {int * bd_disk; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {int bi_opf; TYPE_1__ bi_iter; } ;
typedef int sector_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct request_queue* FUNC_0 (struct block_device*) ;
 struct bio* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,struct block_device*) ;
 int FUNC_4 (struct bio*) ;

int FUNC_5(struct block_device *VAR_3, gfp_t VAR_4,
  sector_t *VAR_5)
{
 struct request_queue *VAR_6;
 struct bio *VAR_7;
 int VAR_8 = 0;

 if (VAR_3->bd_disk == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_3);
 if (!VAR_6)
  return -VAR_0;







 if (!VAR_6->make_request_fn)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_4, 0);
 FUNC_3(VAR_7, VAR_3);
 VAR_7->bi_opf = VAR_1 | VAR_2;

 VAR_8 = FUNC_4(VAR_7);






 if (VAR_5)
  *VAR_5 = VAR_7->bi_iter.bi_sector;

 FUNC_2(VAR_7);
 return VAR_8;
}
