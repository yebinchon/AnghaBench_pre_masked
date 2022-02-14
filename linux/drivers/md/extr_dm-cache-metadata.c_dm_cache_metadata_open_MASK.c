
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int dummy; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 struct dm_cache_metadata* FUNC_0 (int ) ;
 int FUNC_1 (struct dm_cache_metadata*) ;
 int FUNC_2 (struct dm_cache_metadata*) ;
 struct dm_cache_metadata* FUNC_3 (struct block_device*,int ,int,size_t,unsigned int) ;
 int FUNC_4 (struct dm_cache_metadata*,int ) ;

struct dm_cache_metadata *FUNC_5(struct block_device *VAR_1,
       sector_t VAR_2,
       bool VAR_3,
       size_t VAR_4,
       unsigned VAR_5)
{
 struct dm_cache_metadata *VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3,
             VAR_4, VAR_5);

 if (!FUNC_1(VAR_6) && !FUNC_4(VAR_6, VAR_2)) {
  FUNC_2(VAR_6);
  return FUNC_0(-VAR_0);
 }

 return VAR_6;
}
