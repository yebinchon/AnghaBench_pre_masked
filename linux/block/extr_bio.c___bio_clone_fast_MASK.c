
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bi_io_vec; int bi_iter; int bi_write_hint; int bi_ioprio; int bi_opf; int bi_partno; int bi_disk; scalar_t__ bi_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,struct bio*) ;
 scalar_t__ FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct bio*,int ) ;
 int FUNC_5 (struct bio*) ;

void FUNC_6(struct bio *VAR_2, struct bio *VAR_3)
{
 FUNC_0(VAR_2->bi_pool && FUNC_1(VAR_2));





 VAR_2->bi_disk = VAR_3->bi_disk;
 VAR_2->bi_partno = VAR_3->bi_partno;
 FUNC_4(VAR_2, VAR_0);
 if (FUNC_3(VAR_3, VAR_1))
  FUNC_4(VAR_2, VAR_1);
 VAR_2->bi_opf = VAR_3->bi_opf;
 VAR_2->bi_ioprio = VAR_3->bi_ioprio;
 VAR_2->bi_write_hint = VAR_3->bi_write_hint;
 VAR_2->bi_iter = VAR_3->bi_iter;
 VAR_2->bi_io_vec = VAR_3->bi_io_vec;

 FUNC_2(VAR_2, VAR_3);
 FUNC_5(VAR_2);
}
