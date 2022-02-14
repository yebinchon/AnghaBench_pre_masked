
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_crypt_io {scalar_t__ sector; int base_bio; struct crypt_config* cc; } ;
struct crypt_config {scalar_t__ start; int bs; } ;
struct TYPE_2__ {scalar_t__ bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef int gfp_t ;


 struct bio* FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct dm_crypt_io*,struct bio*) ;
 int FUNC_3 (struct dm_crypt_io*) ;
 int FUNC_4 (struct dm_crypt_io*) ;
 scalar_t__ FUNC_5 (struct dm_crypt_io*,struct bio*) ;
 int FUNC_6 (struct bio*) ;

__attribute__((used)) static int FUNC_7(struct dm_crypt_io *VAR_0, gfp_t VAR_1)
{
 struct crypt_config *VAR_2 = VAR_0->cc;
 struct bio *VAR_3;







 VAR_3 = FUNC_0(VAR_0->base_bio, VAR_1, &VAR_2->bs);
 if (!VAR_3)
  return 1;

 FUNC_4(VAR_0);

 FUNC_2(VAR_0, VAR_3);
 VAR_3->bi_iter.bi_sector = VAR_2->start + VAR_0->sector;

 if (FUNC_5(VAR_0, VAR_3)) {
  FUNC_3(VAR_0);
  FUNC_1(VAR_3);
  return 1;
 }

 FUNC_6(VAR_3);
 return 0;
}
