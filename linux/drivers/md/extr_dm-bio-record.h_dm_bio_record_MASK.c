
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bio_details {int bi_iter; int bi_flags; int bi_partno; int bi_disk; } ;
struct bio {int bi_iter; int bi_flags; int bi_partno; int bi_disk; } ;



__attribute__((used)) static inline void FUNC_0(struct dm_bio_details *VAR_0, struct bio *VAR_1)
{
 VAR_0->bi_disk = VAR_1->bi_disk;
 VAR_0->bi_partno = VAR_1->bi_partno;
 VAR_0->bi_flags = VAR_1->bi_flags;
 VAR_0->bi_iter = VAR_1->bi_iter;
}
