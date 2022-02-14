
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {unsigned int nr_chunks; scalar_t__ nr_reserved_seq; int unmap_nr_seq; int unmap_seq_list; int nr_seq; int nr_reserved_seq_zones; int reserved_seq_zones_list; int unmap_nr_rnd; int unmap_rnd_list; int nr_rnd; int map_rnd_list; int map_seq_list; struct dmz_mblock** map_mblk; int nr_map_blocks; struct dmz_dev* dev; } ;
struct dmz_mblock {scalar_t__ data; } ;
struct dmz_mblk {int dummy; } ;
struct dmz_map {int bzone_id; int dzone_id; } ;
struct dmz_dev {unsigned int nr_zones; } ;
struct dm_zone {unsigned int chunk; int link; int flags; struct dm_zone* bzone; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct dmz_mblock*) ;
 int FUNC_1 (struct dmz_mblock*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct dmz_dev*,char*,unsigned int,unsigned int) ;
 struct dm_zone* FUNC_5 (struct dmz_metadata*,unsigned int) ;
 struct dmz_mblock* FUNC_6 (struct dmz_metadata*,unsigned int) ;
 int FUNC_7 (struct dmz_metadata*,struct dm_zone*) ;
 scalar_t__ FUNC_8 (struct dm_zone*) ;
 scalar_t__ FUNC_9 (struct dm_zone*) ;
 scalar_t__ FUNC_10 (struct dm_zone*) ;
 struct dmz_mblock** FUNC_11 (int ,int,int ) ;
 unsigned int FUNC_12 (int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static int FUNC_15(struct dmz_metadata *VAR_7)
{
 struct dmz_dev *VAR_8 = VAR_7->dev;
 struct dm_zone *VAR_9, *VAR_10;
 struct dmz_mblock *VAR_11 = ((void*)0);
 struct dmz_map *VAR_12;
 unsigned int VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
 unsigned int VAR_16;
 unsigned int VAR_17;


 VAR_7->map_mblk = FUNC_11(VAR_7->nr_map_blocks,
    sizeof(struct dmz_mblk *), VAR_6);
 if (!VAR_7->map_mblk)
  return -VAR_5;


 while (VAR_15 < VAR_7->nr_chunks) {
  if (!VAR_11) {

   VAR_11 = FUNC_6(VAR_7, VAR_13 + 1);
   if (FUNC_0(VAR_11))
    return FUNC_1(VAR_11);
   VAR_7->map_mblk[VAR_13] = VAR_11;
   VAR_12 = (struct dmz_map *) VAR_11->data;
   VAR_13++;
   VAR_14 = 0;
  }


  VAR_16 = FUNC_12(VAR_12[VAR_14].dzone_id);
  if (VAR_16 == VAR_3)
   goto next;

  if (VAR_16 >= VAR_8->nr_zones) {
   FUNC_4(VAR_8, "Chunk %u mapping: invalid data zone ID %u",
        VAR_15, VAR_16);
   return -VAR_4;
  }

  VAR_9 = FUNC_5(VAR_7, VAR_16);
  FUNC_14(VAR_1, &VAR_9->flags);
  VAR_9->chunk = VAR_15;
  FUNC_7(VAR_7, VAR_9);

  if (FUNC_10(VAR_9))
   FUNC_13(&VAR_9->link, &VAR_7->map_rnd_list);
  else
   FUNC_13(&VAR_9->link, &VAR_7->map_seq_list);


  VAR_17 = FUNC_12(VAR_12[VAR_14].bzone_id);
  if (VAR_17 == VAR_3)
   goto next;

  if (VAR_17 >= VAR_8->nr_zones) {
   FUNC_4(VAR_8, "Chunk %u mapping: invalid buffer zone ID %u",
        VAR_15, VAR_17);
   return -VAR_4;
  }

  VAR_10 = FUNC_5(VAR_7, VAR_17);
  if (!FUNC_10(VAR_10)) {
   FUNC_4(VAR_8, "Chunk %u mapping: invalid buffer zone %u",
        VAR_15, VAR_17);
   return -VAR_4;
  }

  FUNC_14(VAR_1, &VAR_10->flags);
  FUNC_14(VAR_0, &VAR_10->flags);
  VAR_10->chunk = VAR_15;
  VAR_10->bzone = VAR_9;
  VAR_9->bzone = VAR_10;
  FUNC_7(VAR_7, VAR_10);
  FUNC_13(&VAR_10->link, &VAR_7->map_rnd_list);
next:
  VAR_15++;
  VAR_14++;
  if (VAR_14 >= VAR_2)
   VAR_11 = ((void*)0);
 }






 for (VAR_13 = 0; VAR_13 < VAR_8->nr_zones; VAR_13++) {
  VAR_9 = FUNC_5(VAR_7, VAR_13);
  if (FUNC_9(VAR_9))
   continue;

  if (FUNC_10(VAR_9))
   VAR_7->nr_rnd++;
  else
   VAR_7->nr_seq++;

  if (FUNC_8(VAR_9)) {

   continue;
  }


  FUNC_14(VAR_1, &VAR_9->flags);
  VAR_9->chunk = VAR_3;
  if (FUNC_10(VAR_9)) {
   FUNC_13(&VAR_9->link, &VAR_7->unmap_rnd_list);
   FUNC_2(&VAR_7->unmap_nr_rnd);
  } else if (FUNC_3(&VAR_7->nr_reserved_seq_zones) < VAR_7->nr_reserved_seq) {
   FUNC_13(&VAR_9->link, &VAR_7->reserved_seq_zones_list);
   FUNC_2(&VAR_7->nr_reserved_seq_zones);
   VAR_7->nr_seq--;
  } else {
   FUNC_13(&VAR_9->link, &VAR_7->unmap_seq_list);
   FUNC_2(&VAR_7->unmap_nr_seq);
  }
 }

 return 0;
}
