
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * req; } ;
struct TYPE_3__ {TYPE_2__ r; } ;
struct dm_crypt_io {int integrity_metadata_from_pool; int io_pending; int * integrity_metadata; TYPE_1__ ctx; scalar_t__ error; int sector; struct bio* base_bio; struct crypt_config* cc; } ;
struct crypt_config {int dummy; } ;
struct bio {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct dm_crypt_io *VAR_0, struct crypt_config *VAR_1,
     struct bio *VAR_2, sector_t VAR_3)
{
 VAR_0->cc = VAR_1;
 VAR_0->base_bio = VAR_2;
 VAR_0->sector = VAR_3;
 VAR_0->error = 0;
 VAR_0->ctx.r.req = ((void*)0);
 VAR_0->integrity_metadata = ((void*)0);
 VAR_0->integrity_metadata_from_pool = 0;
 FUNC_0(&VAR_0->io_pending, 0);
}
