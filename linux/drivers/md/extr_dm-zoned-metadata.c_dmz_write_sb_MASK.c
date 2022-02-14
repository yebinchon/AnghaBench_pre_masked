
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct dmz_super {void* crc; void* nr_bitmap_blocks; void* nr_map_blocks; void* nr_chunks; void* nr_reserved_seq; void* nr_meta_blocks; void* sb_block; void* gen; void* version; void* magic; } ;
struct dmz_metadata {TYPE_2__* dev; int nr_bitmap_blocks; int nr_map_blocks; int nr_chunks; int nr_reserved_seq; int nr_meta_blocks; scalar_t__ sb_gen; TYPE_1__* sb; } ;
struct dmz_mblock {int page; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {int bdev; } ;
struct TYPE_3__ {struct dmz_super* sb; struct dmz_mblock* mblk; scalar_t__ block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int *) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,unsigned char*,int ) ;
 int FUNC_4 (struct dmz_metadata*,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct dmz_metadata *VAR_5, unsigned int VAR_6)
{
 sector_t VAR_7 = VAR_5->sb[VAR_6].block;
 struct dmz_mblock *VAR_8 = VAR_5->sb[VAR_6].mblk;
 struct dmz_super *VAR_9 = VAR_5->sb[VAR_6].sb;
 u64 VAR_10 = VAR_5->sb_gen + 1;
 int VAR_11;

 VAR_9->magic = FUNC_1(VAR_1);
 VAR_9->version = FUNC_1(VAR_2);

 VAR_9->gen = FUNC_2(VAR_10);

 VAR_9->sb_block = FUNC_2(VAR_7);
 VAR_9->nr_meta_blocks = FUNC_1(VAR_5->nr_meta_blocks);
 VAR_9->nr_reserved_seq = FUNC_1(VAR_5->nr_reserved_seq);
 VAR_9->nr_chunks = FUNC_1(VAR_5->nr_chunks);

 VAR_9->nr_map_blocks = FUNC_1(VAR_5->nr_map_blocks);
 VAR_9->nr_bitmap_blocks = FUNC_1(VAR_5->nr_bitmap_blocks);

 VAR_9->crc = 0;
 VAR_9->crc = FUNC_1(FUNC_3(VAR_10, (unsigned char *)VAR_9, VAR_0));

 VAR_11 = FUNC_4(VAR_5, VAR_4, VAR_7, VAR_8->page);
 if (VAR_11 == 0)
  VAR_11 = FUNC_0(VAR_5->dev->bdev, VAR_3, ((void*)0));

 return VAR_11;
}
