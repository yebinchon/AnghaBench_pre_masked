
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int iv; } ;
struct dm_target {struct dm_integrity_c* private; } ;
struct dm_integrity_c {unsigned int journal_sections; int journal_mac_alg; scalar_t__ journal_mac; int journal_crypt_alg; scalar_t__ journal_crypt; int internal_hash_alg; scalar_t__ internal_hash; scalar_t__ sb; struct skcipher_request** journal_tree; struct skcipher_request** sk_requests; scalar_t__ journal_io_scatterlist; scalar_t__ journal_scatterlist; int may_write_bitmap; int recalc_bitmap; int journal_xor; int journal_io; int journal; scalar_t__ meta_dev; scalar_t__ dev; scalar_t__ io; int journal_io_mempool; scalar_t__ bufio; struct skcipher_request** bbs; struct skcipher_request** recalc_tags; int recalc_buffer; scalar_t__ recalc_wq; scalar_t__ writer_wq; scalar_t__ commit_wq; scalar_t__ wait_wq; scalar_t__ metadata_wq; int wait_list; int in_progress; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct dm_integrity_c*,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct dm_target*,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (struct dm_integrity_c*) ;
 int FUNC_13 (struct skcipher_request**) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct skcipher_request*) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static void FUNC_19(struct dm_target *VAR_2)
{
 struct dm_integrity_c *VAR_3 = VAR_2->private;

 FUNC_0(!FUNC_1(&VAR_3->in_progress));
 FUNC_0(!FUNC_15(&VAR_3->wait_list));

 if (VAR_3->metadata_wq)
  FUNC_4(VAR_3->metadata_wq);
 if (VAR_3->wait_wq)
  FUNC_4(VAR_3->wait_wq);
 if (VAR_3->commit_wq)
  FUNC_4(VAR_3->commit_wq);
 if (VAR_3->writer_wq)
  FUNC_4(VAR_3->writer_wq);
 if (VAR_3->recalc_wq)
  FUNC_4(VAR_3->recalc_wq);
 FUNC_18(VAR_3->recalc_buffer);
 FUNC_13(VAR_3->recalc_tags);
 FUNC_13(VAR_3->bbs);
 if (VAR_3->bufio)
  FUNC_5(VAR_3->bufio);
 FUNC_16(&VAR_3->journal_io_mempool);
 if (VAR_3->io)
  FUNC_8(VAR_3->io);
 if (VAR_3->dev)
  FUNC_9(VAR_2, VAR_3->dev);
 if (VAR_3->meta_dev)
  FUNC_9(VAR_2, VAR_3->meta_dev);
 FUNC_7(VAR_3->journal);
 FUNC_7(VAR_3->journal_io);
 FUNC_7(VAR_3->journal_xor);
 FUNC_7(VAR_3->recalc_bitmap);
 FUNC_7(VAR_3->may_write_bitmap);
 if (VAR_3->journal_scatterlist)
  FUNC_6(VAR_3, VAR_3->journal_scatterlist);
 if (VAR_3->journal_io_scatterlist)
  FUNC_6(VAR_3, VAR_3->journal_io_scatterlist);
 if (VAR_3->sk_requests) {
  unsigned VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_3->journal_sections; VAR_4++) {
   struct skcipher_request *VAR_5 = VAR_3->sk_requests[VAR_4];
   if (VAR_5) {
    FUNC_14(VAR_5->iv);
    FUNC_17(VAR_5);
   }
  }
  FUNC_13(VAR_3->sk_requests);
 }
 FUNC_13(VAR_3->journal_tree);
 if (VAR_3->sb)
  FUNC_11(VAR_3->sb, VAR_0 << VAR_1);

 if (VAR_3->internal_hash)
  FUNC_2(VAR_3->internal_hash);
 FUNC_10(&VAR_3->internal_hash_alg);

 if (VAR_3->journal_crypt)
  FUNC_3(VAR_3->journal_crypt);
 FUNC_10(&VAR_3->journal_crypt_alg);

 if (VAR_3->journal_mac)
  FUNC_2(VAR_3->journal_mac);
 FUNC_10(&VAR_3->journal_mac_alg);

 FUNC_12(VAR_3);
}
