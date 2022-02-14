
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct dmz_super {scalar_t__ nr_bitmap_blocks; scalar_t__ nr_map_blocks; scalar_t__ nr_chunks; scalar_t__ nr_reserved_seq; scalar_t__ nr_meta_blocks; scalar_t__ version; scalar_t__ magic; scalar_t__ crc; int gen; } ;
struct dmz_metadata {unsigned int nr_rnd_zones; unsigned int nr_useable_zones; unsigned int nr_meta_blocks; unsigned int nr_reserved_seq; unsigned int nr_chunks; unsigned int nr_map_blocks; unsigned int nr_bitmap_blocks; unsigned int nr_meta_zones; unsigned int nr_data_zones; struct dmz_dev* dev; } ;
struct dmz_dev {int zone_nr_blocks; int zone_nr_blocks_shift; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,unsigned char*,int ) ;
 int FUNC_1 (struct dmz_dev*,char*,...) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct dmz_metadata *VAR_4, struct dmz_super *VAR_5)
{
 unsigned int VAR_6, VAR_7;
 struct dmz_dev *VAR_8 = VAR_4->dev;
 u32 VAR_9, VAR_10;
 u64 VAR_11;

 VAR_11 = FUNC_3(VAR_5->gen);
 VAR_10 = FUNC_2(VAR_5->crc);
 VAR_5->crc = 0;
 VAR_9 = FUNC_0(VAR_11, (unsigned char *)VAR_5, VAR_0);
 if (VAR_9 != VAR_10) {
  FUNC_1(VAR_8, "Invalid checksum (needed 0x%08x, got 0x%08x)",
       VAR_9, VAR_10);
  return -VAR_3;
 }

 if (FUNC_2(VAR_5->magic) != VAR_1) {
  FUNC_1(VAR_8, "Invalid meta magic (needed 0x%08x, got 0x%08x)",
       VAR_1, FUNC_2(VAR_5->magic));
  return -VAR_3;
 }

 if (FUNC_2(VAR_5->version) != VAR_2) {
  FUNC_1(VAR_8, "Invalid meta version (needed %d, got %d)",
       VAR_2, FUNC_2(VAR_5->version));
  return -VAR_3;
 }

 VAR_6 = (FUNC_2(VAR_5->nr_meta_blocks) + VAR_8->zone_nr_blocks - 1)
  >> VAR_8->zone_nr_blocks_shift;
 if (!VAR_6 ||
     VAR_6 >= VAR_4->nr_rnd_zones) {
  FUNC_1(VAR_8, "Invalid number of metadata blocks");
  return -VAR_3;
 }

 if (!FUNC_2(VAR_5->nr_reserved_seq) ||
     FUNC_2(VAR_5->nr_reserved_seq) >= (VAR_4->nr_useable_zones - VAR_6)) {
  FUNC_1(VAR_8, "Invalid number of reserved sequential zones");
  return -VAR_3;
 }

 VAR_7 = VAR_4->nr_useable_zones -
  (VAR_6 * 2 + FUNC_2(VAR_5->nr_reserved_seq));
 if (FUNC_2(VAR_5->nr_chunks) > VAR_7) {
  FUNC_1(VAR_8, "Invalid number of chunks %u / %u",
       FUNC_2(VAR_5->nr_chunks), VAR_7);
  return -VAR_3;
 }


 VAR_4->nr_meta_blocks = FUNC_2(VAR_5->nr_meta_blocks);
 VAR_4->nr_reserved_seq = FUNC_2(VAR_5->nr_reserved_seq);
 VAR_4->nr_chunks = FUNC_2(VAR_5->nr_chunks);
 VAR_4->nr_map_blocks = FUNC_2(VAR_5->nr_map_blocks);
 VAR_4->nr_bitmap_blocks = FUNC_2(VAR_5->nr_bitmap_blocks);
 VAR_4->nr_meta_zones = VAR_6;
 VAR_4->nr_data_zones = VAR_7;

 return 0;
}
