
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_set {int bio_integrity_pool; int bvec_integrity_pool; } ;
struct bio_integrity_payload {unsigned int bip_max_vcnt; unsigned long bip_slab; struct bio* bip_bio; scalar_t__ bip_inline_vecs; scalar_t__ bip_vec; } ;
struct bio {int bi_opf; struct bio_integrity_payload* bi_integrity; struct bio_set* bi_pool; } ;
typedef int gfp_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct bio_integrity_payload* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,unsigned int,unsigned long*,int *) ;
 unsigned int FUNC_2 (unsigned long) ;
 struct bio_integrity_payload* FUNC_3 (int ,int ) ;
 struct bio_integrity_payload* FUNC_4 (int *,int ) ;
 int FUNC_5 (struct bio_integrity_payload*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct bio_integrity_payload*,int ,int) ;
 int FUNC_8 (struct bio_integrity_payload*,int ,unsigned int) ;
 scalar_t__ FUNC_9 (int) ;

struct bio_integrity_payload *FUNC_10(struct bio *VAR_4,
        gfp_t VAR_5,
        unsigned int VAR_6)
{
 struct bio_integrity_payload *VAR_7;
 struct bio_set *VAR_8 = VAR_4->bi_pool;
 unsigned VAR_9;

 if (!VAR_8 || !FUNC_6(&VAR_8->bio_integrity_pool)) {
  VAR_7 = FUNC_3(FUNC_8(VAR_7, VAR_3, VAR_6), VAR_5);
  VAR_9 = VAR_6;
 } else {
  VAR_7 = FUNC_4(&VAR_8->bio_integrity_pool, VAR_5);
  VAR_9 = VAR_0;
 }

 if (FUNC_9(!VAR_7))
  return FUNC_0(-VAR_1);

 FUNC_7(VAR_7, 0, sizeof(*VAR_7));

 if (VAR_6 > VAR_9) {
  unsigned long VAR_10 = 0;

  VAR_7->bip_vec = FUNC_1(VAR_5, VAR_6, &VAR_10,
       &VAR_8->bvec_integrity_pool);
  if (!VAR_7->bip_vec)
   goto err;
  VAR_7->bip_max_vcnt = FUNC_2(VAR_10);
  VAR_7->bip_slab = VAR_10;
 } else {
  VAR_7->bip_vec = VAR_7->bip_inline_vecs;
  VAR_7->bip_max_vcnt = VAR_9;
 }

 VAR_7->bip_bio = VAR_4;
 VAR_4->bi_integrity = VAR_7;
 VAR_4->bi_opf |= VAR_2;

 return VAR_7;
err:
 FUNC_5(VAR_7, &VAR_8->bio_integrity_pool);
 return FUNC_0(-VAR_1);
}
