
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct pktcdvd_device {int flags; int bdev; } ;
struct page {int dummy; } ;
struct TYPE_10__ {int head; } ;
struct packet_data {int frames; int write_size; int cache_valid; TYPE_3__* w_bio; int io_wait; scalar_t__ sector; int lock; TYPE_2__ orig_bios; struct page** pages; } ;
struct TYPE_9__ {scalar_t__ bi_sector; } ;
struct TYPE_11__ {int bi_vcnt; struct packet_data* bi_private; int bi_end_io; TYPE_1__ bi_iter; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_3__*,struct page*,int,unsigned int) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (int,struct pktcdvd_device*,char*,int,...) ;
 int VAR_5 ;
 int FUNC_8 (struct pktcdvd_device*,TYPE_3__*) ;
 int FUNC_9 (struct packet_data*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static void FUNC_13(struct pktcdvd_device *VAR_6, struct packet_data *VAR_7)
{
 int VAR_8;

 FUNC_4(VAR_7->w_bio);
 VAR_7->w_bio->bi_iter.bi_sector = VAR_7->sector;
 FUNC_5(VAR_7->w_bio, VAR_6->bdev);
 VAR_7->w_bio->bi_end_io = VAR_5;
 VAR_7->w_bio->bi_private = VAR_7;


 for (VAR_8 = 0; VAR_8 < VAR_7->frames; VAR_8++) {
  struct page *VAR_9 = VAR_7->pages[(VAR_8 * VAR_0) / VAR_3];
  unsigned VAR_10 = (VAR_8 * VAR_0) % VAR_3;

  if (!FUNC_2(VAR_7->w_bio, VAR_9, VAR_0, VAR_10))
   FUNC_0();
 }
 FUNC_7(2, VAR_6, "vcnt=%d\n", VAR_7->w_bio->bi_vcnt);




 FUNC_10(&VAR_7->lock);
 FUNC_3(VAR_7->w_bio, VAR_7->orig_bios.head);

 FUNC_9(VAR_7, VAR_2);
 FUNC_11(&VAR_7->lock);

 FUNC_7(2, VAR_6, "Writing %d frames for zone %llx\n",
  VAR_7->write_size, (unsigned long long)VAR_7->sector);

 if (FUNC_12(VAR_1, &VAR_6->flags) || (VAR_7->write_size < VAR_7->frames))
  VAR_7->cache_valid = 1;
 else
  VAR_7->cache_valid = 0;


 FUNC_1(&VAR_7->io_wait, 1);
 FUNC_6(VAR_7->w_bio, VAR_4, 0);
 FUNC_8(VAR_6, VAR_7->w_bio);
}
