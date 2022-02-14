
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dm_crypt_io {struct crypt_config* cc; } ;
struct crypt_config {int bio_alloc_lock; int page_pool; int bs; } ;
struct bio {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bio*,struct page*,unsigned int,int ) ;
 struct bio* FUNC_1 (int ,unsigned int,int *) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct dm_crypt_io*,struct bio*) ;
 int FUNC_4 (struct crypt_config*,struct bio*) ;
 scalar_t__ FUNC_5 (struct dm_crypt_io*,struct bio*) ;
 struct page* FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct bio *FUNC_10(struct dm_crypt_io *VAR_6, unsigned VAR_7)
{
 struct crypt_config *VAR_8 = VAR_6->cc;
 struct bio *VAR_9;
 unsigned int VAR_10 = (VAR_7 + VAR_3 - 1) >> VAR_2;
 gfp_t VAR_11 = VAR_1 | VAR_5;
 unsigned VAR_12, VAR_13, VAR_14;
 struct page *VAR_15;

retry:
 if (FUNC_9(VAR_11 & VAR_4))
  FUNC_7(&VAR_8->bio_alloc_lock);

 VAR_9 = FUNC_1(VAR_0, VAR_10, &VAR_8->bs);
 if (!VAR_9)
  goto out;

 FUNC_3(VAR_6, VAR_9);

 VAR_14 = VAR_7;

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_15 = FUNC_6(&VAR_8->page_pool, VAR_11);
  if (!VAR_15) {
   FUNC_4(VAR_8, VAR_9);
   FUNC_2(VAR_9);
   VAR_11 |= VAR_4;
   goto retry;
  }

  VAR_13 = (VAR_14 > VAR_3) ? VAR_3 : VAR_14;

  FUNC_0(VAR_9, VAR_15, VAR_13, 0);

  VAR_14 -= VAR_13;
 }


 if (FUNC_5(VAR_6, VAR_9)) {
  FUNC_4(VAR_8, VAR_9);
  FUNC_2(VAR_9);
  VAR_9 = ((void*)0);
 }
out:
 if (FUNC_9(VAR_11 & VAR_4))
  FUNC_8(&VAR_8->bio_alloc_lock);

 return VAR_9;
}
