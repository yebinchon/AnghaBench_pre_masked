
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {struct pool* pool; } ;
struct pool {int mapping_pool; int pmd; } ;
struct dm_thin_new_mapping {int cell; int bio; scalar_t__ virt_begin; scalar_t__ virt_end; scalar_t__ data_block; struct thin_c* tc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct thin_c*,int ) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct dm_thin_new_mapping*,int *) ;
 int FUNC_5 (struct pool*,char*,int) ;

__attribute__((used)) static void FUNC_6(struct dm_thin_new_mapping *VAR_0)
{
 int VAR_1;
 struct thin_c *VAR_2 = VAR_0->tc;
 struct pool *VAR_3 = VAR_2->pool;





 VAR_1 = FUNC_3(VAR_3->pmd, VAR_0->data_block,
       VAR_0->data_block + (VAR_0->virt_end - VAR_0->virt_begin));
 if (VAR_1) {
  FUNC_5(VAR_3, "dm_pool_dec_data_range", VAR_1);
  FUNC_1(VAR_0->bio);
 } else
  FUNC_0(VAR_0->bio);

 FUNC_2(VAR_2, VAR_0->cell);
 FUNC_4(VAR_0, &VAR_3->mapping_pool);
}
