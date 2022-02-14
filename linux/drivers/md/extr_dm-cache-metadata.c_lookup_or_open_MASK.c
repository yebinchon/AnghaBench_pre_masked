
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int list; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (struct dm_cache_metadata*) ;
 int FUNC_1 (struct dm_cache_metadata*) ;
 int FUNC_2 (struct dm_cache_metadata*) ;
 int FUNC_3 (int *,int *) ;
 struct dm_cache_metadata* FUNC_4 (struct block_device*) ;
 struct dm_cache_metadata* FUNC_5 (struct block_device*,int ,int,size_t,unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct dm_cache_metadata *FUNC_8(struct block_device *VAR_2,
      sector_t VAR_3,
      bool VAR_4,
      size_t VAR_5,
      unsigned VAR_6)
{
 struct dm_cache_metadata *VAR_7, *VAR_8;

 FUNC_6(&VAR_1);
 VAR_7 = FUNC_4(VAR_2);
 FUNC_7(&VAR_1);

 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_6);
 if (!FUNC_0(VAR_7)) {
  FUNC_6(&VAR_1);
  VAR_8 = FUNC_4(VAR_2);
  if (VAR_8) {
   FUNC_7(&VAR_1);
   FUNC_1(VAR_7);
   FUNC_2(VAR_7);
   return VAR_8;
  }
  FUNC_3(&VAR_7->list, &VAR_0);
  FUNC_7(&VAR_1);
 }

 return VAR_7;
}
