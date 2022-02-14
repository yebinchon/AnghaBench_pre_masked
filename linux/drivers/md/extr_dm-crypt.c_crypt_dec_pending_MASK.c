
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int req; } ;
struct TYPE_4__ {TYPE_1__ r; } ;
struct dm_crypt_io {int integrity_metadata; struct crypt_config* cc; int integrity_metadata_from_pool; TYPE_2__ ctx; int io_pending; int error; struct bio* base_bio; } ;
struct crypt_config {int tag_pool; } ;
struct bio {int bi_status; } ;
typedef int blk_status_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct crypt_config*,int ,struct bio*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct dm_crypt_io *VAR_0)
{
 struct crypt_config *VAR_1 = VAR_0->cc;
 struct bio *VAR_2 = VAR_0->base_bio;
 blk_status_t VAR_3 = VAR_0->error;

 if (!FUNC_0(&VAR_0->io_pending))
  return;

 if (VAR_0->ctx.r.req)
  FUNC_2(VAR_1, VAR_0->ctx.r.req, VAR_2);

 if (FUNC_5(VAR_0->integrity_metadata_from_pool))
  FUNC_4(VAR_0->integrity_metadata, &VAR_0->cc->tag_pool);
 else
  FUNC_3(VAR_0->integrity_metadata);

 VAR_2->bi_status = VAR_3;
 FUNC_1(VAR_2);
}
