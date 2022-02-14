
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio_vec {int dummy; } ;
struct bio_set {unsigned int front_pad; int bio_pool; int bvec_pool; scalar_t__ rescue_workqueue; } ;
struct bio {unsigned long bi_flags; unsigned int bi_max_vecs; struct bio_vec* bi_io_vec; struct bio_set* bi_pool; struct bio_vec* bi_inline_vecs; } ;
typedef scalar_t__ gfp_t ;
struct TYPE_2__ {int * bio_list; } ;


 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct bio*,int *,int ) ;
 int FUNC_2 (int *) ;
 struct bio_vec* FUNC_3 (scalar_t__,unsigned int,unsigned long*,int *) ;
 TYPE_1__* VAR_4 ;
 void* FUNC_4 (int,scalar_t__) ;
 void* FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (void*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct bio_set*) ;
 scalar_t__ FUNC_9 (int) ;

struct bio *FUNC_10(gfp_t VAR_5, unsigned int VAR_6,
        struct bio_set *VAR_7)
{
 gfp_t VAR_8 = VAR_5;
 unsigned VAR_9;
 unsigned VAR_10;
 struct bio_vec *VAR_11 = ((void*)0);
 struct bio *VAR_12;
 void *VAR_13;

 if (!VAR_7) {
  if (VAR_6 > VAR_2)
   return ((void*)0);

  VAR_13 = FUNC_4(sizeof(struct bio) +
       VAR_6 * sizeof(struct bio_vec),
       VAR_5);
  VAR_9 = 0;
  VAR_10 = VAR_6;
 } else {

  if (FUNC_0(!FUNC_7(&VAR_7->bvec_pool) &&
     VAR_6 > 0))
   return ((void*)0);
  if (VAR_4->bio_list &&
      (!FUNC_2(&VAR_4->bio_list[0]) ||
       !FUNC_2(&VAR_4->bio_list[1])) &&
      VAR_7->rescue_workqueue)
   VAR_5 &= ~VAR_3;

  VAR_13 = FUNC_5(&VAR_7->bio_pool, VAR_5);
  if (!VAR_13 && VAR_5 != VAR_8) {
   FUNC_8(VAR_7);
   VAR_5 = VAR_8;
   VAR_13 = FUNC_5(&VAR_7->bio_pool, VAR_5);
  }

  VAR_9 = VAR_7->front_pad;
  VAR_10 = VAR_0;
 }

 if (FUNC_9(!VAR_13))
  return ((void*)0);

 VAR_12 = VAR_13 + VAR_9;
 FUNC_1(VAR_12, ((void*)0), 0);

 if (VAR_6 > VAR_10) {
  unsigned long VAR_14 = 0;

  VAR_11 = FUNC_3(VAR_5, VAR_6, &VAR_14, &VAR_7->bvec_pool);
  if (!VAR_11 && VAR_5 != VAR_8) {
   FUNC_8(VAR_7);
   VAR_5 = VAR_8;
   VAR_11 = FUNC_3(VAR_5, VAR_6, &VAR_14, &VAR_7->bvec_pool);
  }

  if (FUNC_9(!VAR_11))
   goto err_free;

  VAR_12->bi_flags |= VAR_14 << VAR_1;
 } else if (VAR_6) {
  VAR_11 = VAR_12->bi_inline_vecs;
 }

 VAR_12->bi_pool = VAR_7;
 VAR_12->bi_max_vecs = VAR_6;
 VAR_12->bi_io_vec = VAR_11;
 return VAR_12;

err_free:
 FUNC_6(VAR_13, &VAR_7->bio_pool);
 return ((void*)0);
}
