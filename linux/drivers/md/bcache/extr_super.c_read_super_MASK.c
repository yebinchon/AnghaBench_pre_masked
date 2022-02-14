
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct page {int dummy; } ;
struct cache_sb {int offset; int version; int flags; int seq; int first_bucket; int keys; int* d; scalar_t__ csum; int block_size; int data_offset; int nbuckets; int bucket_size; int nr_in_set; int nr_this_dev; int last_mount; int set_uuid; int uuid; int magic; int label; } ;
struct buffer_head {struct page* b_page; scalar_t__ b_data; } ;
struct block_device {int bd_disk; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct buffer_head* FUNC_0 (struct block_device*,int,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (struct block_device*) ;
 scalar_t__ FUNC_3 (struct cache_sb*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 void* FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 void* FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (char*,int,int,int,int) ;
 int FUNC_14 (struct buffer_head*) ;

__attribute__((used)) static const char *FUNC_15(struct cache_sb *VAR_9, struct block_device *VAR_10,
         struct page **VAR_11)
{
 const char *VAR_12;
 struct cache_sb *VAR_13;
 struct buffer_head *VAR_14 = FUNC_0(VAR_10, 1, VAR_7);
 unsigned int VAR_15;

 if (!VAR_14)
  return "IO error";

 VAR_13 = (struct cache_sb *) VAR_14->b_data;

 VAR_9->offset = FUNC_10(VAR_13->offset);
 VAR_9->version = FUNC_10(VAR_13->version);

 FUNC_12(VAR_9->magic, VAR_13->magic, 16);
 FUNC_12(VAR_9->uuid, VAR_13->uuid, 16);
 FUNC_12(VAR_9->set_uuid, VAR_13->set_uuid, 16);
 FUNC_12(VAR_9->label, VAR_13->label, VAR_5);

 VAR_9->flags = FUNC_10(VAR_13->flags);
 VAR_9->seq = FUNC_10(VAR_13->seq);
 VAR_9->last_mount = FUNC_9(VAR_13->last_mount);
 VAR_9->first_bucket = FUNC_8(VAR_13->first_bucket);
 VAR_9->keys = FUNC_8(VAR_13->keys);

 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++)
  VAR_9->d[VAR_15] = FUNC_10(VAR_13->d[VAR_15]);

 FUNC_13("read sb version %llu, flags %llu, seq %llu, journal size %u",
   VAR_9->version, VAR_9->flags, VAR_9->seq, VAR_9->keys);

 VAR_12 = "Not a bcache superblock";
 if (VAR_9->offset != VAR_6)
  goto err;

 if (FUNC_11(VAR_9->magic, VAR_8, 16))
  goto err;

 VAR_12 = "Too many journal buckets";
 if (VAR_9->keys > VAR_4)
  goto err;

 VAR_12 = "Bad checksum";
 if (VAR_13->csum != FUNC_3(VAR_13))
  goto err;

 VAR_12 = "Bad UUID";
 if (FUNC_1(VAR_9->uuid, 16))
  goto err;

 VAR_9->block_size = FUNC_8(VAR_13->block_size);

 VAR_12 = "Superblock block size smaller than device block size";
 if (VAR_9->block_size << 9 < FUNC_2(VAR_10))
  goto err;

 switch (VAR_9->version) {
 case 131:
  VAR_9->data_offset = VAR_0;
  break;
 case 130:
  VAR_9->data_offset = FUNC_10(VAR_13->data_offset);

  VAR_12 = "Bad data offset";
  if (VAR_9->data_offset < VAR_0)
   goto err;

  break;
 case 129:
 case 128:
  VAR_9->nbuckets = FUNC_10(VAR_13->nbuckets);
  VAR_9->bucket_size = FUNC_8(VAR_13->bucket_size);

  VAR_9->nr_in_set = FUNC_8(VAR_13->nr_in_set);
  VAR_9->nr_this_dev = FUNC_8(VAR_13->nr_this_dev);

  VAR_12 = "Too many buckets";
  if (VAR_9->nbuckets > VAR_1)
   goto err;

  VAR_12 = "Not enough buckets";
  if (VAR_9->nbuckets < 1 << 7)
   goto err;

  VAR_12 = "Bad block/bucket size";
  if (!FUNC_6(VAR_9->block_size) ||
      VAR_9->block_size > VAR_3 ||
      !FUNC_6(VAR_9->bucket_size) ||
      VAR_9->bucket_size < VAR_3)
   goto err;

  VAR_12 = "Invalid superblock: device too small";
  if (FUNC_4(VAR_10->bd_disk) <
      VAR_9->bucket_size * VAR_9->nbuckets)
   goto err;

  VAR_12 = "Bad UUID";
  if (FUNC_1(VAR_9->set_uuid, 16))
   goto err;

  VAR_12 = "Bad cache device number in set";
  if (!VAR_9->nr_in_set ||
      VAR_9->nr_in_set <= VAR_9->nr_this_dev ||
      VAR_9->nr_in_set > VAR_2)
   goto err;

  VAR_12 = "Journal buckets not sequential";
  for (VAR_15 = 0; VAR_15 < VAR_9->keys; VAR_15++)
   if (VAR_9->d[VAR_15] != VAR_9->first_bucket + VAR_15)
    goto err;

  VAR_12 = "Too many journal buckets";
  if (VAR_9->first_bucket + VAR_9->keys > VAR_9->nbuckets)
   goto err;

  VAR_12 = "Invalid superblock: first bucket comes before end of super";
  if (VAR_9->first_bucket * VAR_9->bucket_size < 16)
   goto err;

  break;
 default:
  VAR_12 = "Unsupported superblock version";
  goto err;
 }

 VAR_9->last_mount = (u32)FUNC_7();
 VAR_12 = ((void*)0);

 FUNC_5(VAR_14->b_page);
 *VAR_11 = VAR_14->b_page;
err:
 FUNC_14(VAR_14);
 return VAR_12;
}
