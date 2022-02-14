
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_integrity_io {scalar_t__ completion; int orig_bi_end_io; scalar_t__ orig_bi_integrity; int orig_bi_partno; int orig_bi_disk; int orig_bi_iter; } ;
struct bio {int bi_end_io; int bi_opf; scalar_t__ bi_integrity; int bi_partno; int bi_disk; int bi_iter; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct dm_integrity_io*) ;
 struct dm_integrity_io* FUNC_2 (struct bio*,int) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_1)
{
 struct dm_integrity_io *VAR_2 = FUNC_2(VAR_1, sizeof(struct dm_integrity_io));

 VAR_1->bi_iter = VAR_2->orig_bi_iter;
 VAR_1->bi_disk = VAR_2->orig_bi_disk;
 VAR_1->bi_partno = VAR_2->orig_bi_partno;
 if (VAR_2->orig_bi_integrity) {
  VAR_1->bi_integrity = VAR_2->orig_bi_integrity;
  VAR_1->bi_opf |= VAR_0;
 }
 VAR_1->bi_end_io = VAR_2->orig_bi_end_io;

 if (VAR_2->completion)
  FUNC_0(VAR_2->completion);

 FUNC_1(VAR_2);
}
