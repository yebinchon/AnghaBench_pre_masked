
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {struct crypt_config* private; } ;
struct crypt_config {int bio_alloc_lock; struct crypt_config* authenc_key; struct crypt_config* cipher_auth; struct crypt_config* key_string; struct crypt_config* cipher_string; scalar_t__ dev; TYPE_1__* iv_gen_ops; int n_allocated_pages; int tag_pool; int req_pool; int page_pool; int bs; scalar_t__ crypt_queue; scalar_t__ io_queue; scalar_t__ write_thread; } ;
struct TYPE_2__ {int (* dtr ) (struct crypt_config*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct crypt_config*) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct dm_target*,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct crypt_config*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct crypt_config*) ;

__attribute__((used)) static void FUNC_15(struct dm_target *VAR_2)
{
 struct crypt_config *VAR_3 = VAR_2->private;

 VAR_2->private = ((void*)0);

 if (!VAR_3)
  return;

 if (VAR_3->write_thread)
  FUNC_6(VAR_3->write_thread);

 if (VAR_3->io_queue)
  FUNC_4(VAR_3->io_queue);
 if (VAR_3->crypt_queue)
  FUNC_4(VAR_3->crypt_queue);

 FUNC_3(VAR_3);

 FUNC_1(&VAR_3->bs);

 FUNC_8(&VAR_3->page_pool);
 FUNC_8(&VAR_3->req_pool);
 FUNC_8(&VAR_3->tag_pool);

 FUNC_0(FUNC_11(&VAR_3->n_allocated_pages) != 0);
 FUNC_10(&VAR_3->n_allocated_pages);

 if (VAR_3->iv_gen_ops && VAR_3->iv_gen_ops->dtr)
  VAR_3->iv_gen_ops->dtr(VAR_3);

 if (VAR_3->dev)
  FUNC_5(VAR_2, VAR_3->dev);

 FUNC_7(VAR_3->cipher_string);
 FUNC_7(VAR_3->key_string);
 FUNC_7(VAR_3->cipher_auth);
 FUNC_7(VAR_3->authenc_key);

 FUNC_9(&VAR_3->bio_alloc_lock);


 FUNC_7(VAR_3);

 FUNC_12(&VAR_0);
 FUNC_0(!VAR_1);
 VAR_1--;
 FUNC_2();
 FUNC_13(&VAR_0);
}
