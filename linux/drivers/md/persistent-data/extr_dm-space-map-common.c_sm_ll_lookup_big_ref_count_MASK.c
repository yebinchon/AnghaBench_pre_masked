
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ll_disk {int ref_count_root; int ref_count_info; } ;
typedef int dm_block_t ;
typedef int __le32 ;


 int FUNC_0 (int *,int ,int *,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ll_disk *VAR_0, dm_block_t VAR_1,
          uint32_t *VAR_2)
{
 __le32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_0->ref_count_info, VAR_0->ref_count_root, &VAR_1, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 *VAR_2 = FUNC_1(VAR_3);

 return VAR_4;
}
