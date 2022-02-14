
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_set {int bio_meta; } ;
struct bio {int bi_inline_vecs; } ;
struct bbio {struct bio bio; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*,int ,int ) ;
 int FUNC_1 (struct cache_set*) ;
 struct bbio* FUNC_2 (int *,int ) ;

struct bio *FUNC_3(struct cache_set *VAR_1)
{
 struct bbio *VAR_2 = FUNC_2(&VAR_1->bio_meta, VAR_0);
 struct bio *VAR_3 = &VAR_2->bio;

 FUNC_0(VAR_3, VAR_3->bi_inline_vecs, FUNC_1(VAR_1));

 return VAR_3;
}
