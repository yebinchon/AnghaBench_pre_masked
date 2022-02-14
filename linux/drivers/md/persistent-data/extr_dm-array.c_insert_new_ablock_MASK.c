
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dm_block {int dummy; } ;
struct dm_array_info {int dummy; } ;
struct array_block {int dummy; } ;
typedef int dm_block_t ;


 int FUNC_0 (struct dm_array_info*,size_t,int ,struct dm_block**,struct array_block**) ;
 int FUNC_1 (struct dm_array_info*,struct array_block*,void const*,int ) ;
 int FUNC_2 (struct dm_array_info*,unsigned int,struct dm_block*,int *) ;
 int FUNC_3 (struct dm_array_info*,struct dm_block*) ;

__attribute__((used)) static int FUNC_4(struct dm_array_info *VAR_0, size_t VAR_1,
        uint32_t VAR_2,
        unsigned VAR_3, uint32_t VAR_4,
        const void *VAR_5, dm_block_t *VAR_6)
{
 int VAR_7;
 struct dm_block *VAR_8;
 struct array_block *VAR_9;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_8, &VAR_9);
 if (VAR_7)
  return VAR_7;

 FUNC_1(VAR_0, VAR_9, VAR_5, VAR_4);
 VAR_7 = FUNC_2(VAR_0, VAR_3, VAR_8, VAR_6);
 FUNC_3(VAR_0, VAR_8);

 return VAR_7;
}
