
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cc_pending; } ;
struct dm_crypt_io {TYPE_1__ ctx; scalar_t__ error; int sector; int base_bio; struct crypt_config* cc; } ;
struct crypt_config {int dummy; } ;
typedef scalar_t__ blk_status_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct crypt_config*,TYPE_1__*) ;
 int FUNC_2 (struct crypt_config*,TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (struct dm_crypt_io*) ;
 int FUNC_4 (struct dm_crypt_io*) ;
 int FUNC_5 (struct dm_crypt_io*) ;

__attribute__((used)) static void FUNC_6(struct dm_crypt_io *VAR_0)
{
 struct crypt_config *VAR_1 = VAR_0->cc;
 blk_status_t VAR_2;

 FUNC_4(VAR_0);

 FUNC_2(VAR_1, &VAR_0->ctx, VAR_0->base_bio, VAR_0->base_bio,
      VAR_0->sector);

 VAR_2 = FUNC_1(VAR_1, &VAR_0->ctx);
 if (VAR_2)
  VAR_0->error = VAR_2;

 if (FUNC_0(&VAR_0->ctx.cc_pending))
  FUNC_5(VAR_0);

 FUNC_3(VAR_0);
}
