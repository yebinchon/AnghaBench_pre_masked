
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cc_pending; int iter_out; struct bio* bio_out; } ;
struct dm_crypt_io {int sector; TYPE_2__ ctx; scalar_t__ error; TYPE_3__* base_bio; struct crypt_config* cc; } ;
struct crypt_config {int dummy; } ;
struct bio {int bi_iter; } ;
typedef int sector_t ;
typedef scalar_t__ blk_status_t ;
struct TYPE_5__ {int bi_size; } ;
struct TYPE_7__ {TYPE_1__ bi_iter; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 struct bio* FUNC_2 (struct dm_crypt_io*,int ) ;
 scalar_t__ FUNC_3 (struct crypt_config*,TYPE_2__*) ;
 int FUNC_4 (struct crypt_config*,TYPE_2__*,int *,TYPE_3__*,int ) ;
 int FUNC_5 (struct dm_crypt_io*) ;
 int FUNC_6 (struct dm_crypt_io*) ;
 int FUNC_7 (struct dm_crypt_io*,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct dm_crypt_io *VAR_1)
{
 struct crypt_config *VAR_2 = VAR_1->cc;
 struct bio *VAR_3;
 int VAR_4;
 sector_t VAR_5 = VAR_1->sector;
 blk_status_t VAR_6;




 FUNC_6(VAR_1);
 FUNC_4(VAR_2, &VAR_1->ctx, ((void*)0), VAR_1->base_bio, VAR_5);

 VAR_3 = FUNC_2(VAR_1, VAR_1->base_bio->bi_iter.bi_size);
 if (FUNC_8(!VAR_3)) {
  VAR_1->error = VAR_0;
  goto dec;
 }

 VAR_1->ctx.bio_out = VAR_3;
 VAR_1->ctx.iter_out = VAR_3->bi_iter;

 VAR_5 += FUNC_1(VAR_3);

 FUNC_6(VAR_1);
 VAR_6 = FUNC_3(VAR_2, &VAR_1->ctx);
 if (VAR_6)
  VAR_1->error = VAR_6;
 VAR_4 = FUNC_0(&VAR_1->ctx.cc_pending);


 if (VAR_4) {
  FUNC_7(VAR_1, 0);
  VAR_1->sector = VAR_5;
 }

dec:
 FUNC_5(VAR_1);
}
