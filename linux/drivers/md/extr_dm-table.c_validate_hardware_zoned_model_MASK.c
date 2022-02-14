
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_table {int md; } ;
typedef enum blk_zoned_model { ____Placeholder_blk_zoned_model } blk_zoned_model ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dm_table*,unsigned int) ;
 int FUNC_3 (struct dm_table*,int) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct dm_table *VAR_2,
      enum blk_zoned_model VAR_3,
      unsigned int VAR_4)
{
 if (VAR_3 == VAR_0)
  return 0;

 if (!FUNC_3(VAR_2, VAR_3)) {
  FUNC_0("%s: zoned model is not consistent across all devices",
        FUNC_1(VAR_2->md));
  return -VAR_1;
 }


 if (!VAR_4 || !FUNC_4(VAR_4))
  return -VAR_1;

 if (!FUNC_2(VAR_2, VAR_4)) {
  FUNC_0("%s: zone sectors is not consistent across all devices",
        FUNC_1(VAR_2->md));
  return -VAR_1;
 }

 return 0;
}
