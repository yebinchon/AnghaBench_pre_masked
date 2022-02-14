
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct page {int dummy; } ;
struct cache_sb {int dummy; } ;
struct TYPE_6__ {int bi_inline_vecs; } ;
struct cache {int cache_dev_name; int kobj; int sb; int discard; TYPE_2__ sb_bio; struct block_device* bdev; } ;
struct block_device {int bd_part; struct cache* bd_holder; } ;
struct TYPE_7__ {struct page* bv_page; } ;
struct TYPE_5__ {int kobj; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*,int ) ;
 TYPE_3__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct block_device*,int) ;
 int FUNC_7 (struct cache*) ;
 int FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (int *,int *,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,struct cache_sb*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 TYPE_1__* FUNC_14 (int ) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (char*,int ,char const*) ;
 char* FUNC_17 (struct cache*) ;

__attribute__((used)) static int FUNC_18(struct cache_sb *VAR_7, struct page *VAR_8,
    struct block_device *VAR_9, struct cache *VAR_10)
{
 const char *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 FUNC_2(VAR_9, VAR_10->cache_dev_name);
 FUNC_11(&VAR_10->sb, VAR_7, sizeof(struct cache_sb));
 VAR_10->bdev = VAR_9;
 VAR_10->bdev->bd_holder = VAR_10;

 FUNC_4(&VAR_10->sb_bio, VAR_10->sb_bio.bi_inline_vecs, 1);
 FUNC_3(&VAR_10->sb_bio)->bv_page = VAR_8;
 FUNC_8(VAR_8);

 if (FUNC_5(FUNC_1(VAR_9)))
  VAR_10->discard = FUNC_0(&VAR_10->sb);

 VAR_12 = FUNC_7(VAR_10);
 if (VAR_12 != 0) {






  FUNC_6(VAR_9, VAR_4|VAR_5|VAR_3);
  if (VAR_12 == -VAR_1)
   VAR_11 = "cache_alloc(): -ENOMEM";
  else if (VAR_12 == -VAR_2)
   VAR_11 = "cache_alloc(): cache device is too small";
  else
   VAR_11 = "cache_alloc(): unknown error";
  goto err;
 }

 if (FUNC_9(&VAR_10->kobj,
   &FUNC_14(VAR_9->bd_part)->kobj,
   "bcache")) {
  VAR_11 = "error calling kobject_add";
  VAR_12 = -VAR_1;
  goto out;
 }

 FUNC_12(&VAR_6);
 VAR_11 = FUNC_17(VAR_10);
 FUNC_13(&VAR_6);

 if (VAR_11) {
  VAR_12 = -VAR_0;
  goto out;
 }

 FUNC_15("registered cache device %s", VAR_10->cache_dev_name);

out:
 FUNC_10(&VAR_10->kobj);

err:
 if (VAR_11)
  FUNC_16("error %s: %s", VAR_10->cache_dev_name, VAR_11);

 return VAR_12;
}
