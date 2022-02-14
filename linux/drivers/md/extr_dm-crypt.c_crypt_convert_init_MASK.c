
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypt_config {scalar_t__ iv_offset; } ;
struct convert_context {int restart; scalar_t__ cc_sector; int iter_out; int iter_in; struct bio* bio_out; struct bio* bio_in; } ;
struct bio {int bi_iter; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct crypt_config *VAR_0,
          struct convert_context *VAR_1,
          struct bio *VAR_2, struct bio *VAR_3,
          sector_t VAR_4)
{
 VAR_1->bio_in = VAR_3;
 VAR_1->bio_out = VAR_2;
 if (VAR_3)
  VAR_1->iter_in = VAR_3->bi_iter;
 if (VAR_2)
  VAR_1->iter_out = VAR_2->bi_iter;
 VAR_1->cc_sector = VAR_4 + VAR_0->iv_offset;
 FUNC_0(&VAR_1->restart);
}
