
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int bs; int io_bs; } ;
struct dm_table {int dummy; } ;
struct dm_md_mempools {int io_bs; int bs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct dm_table*) ;
 int FUNC_5 (struct dm_table*) ;
 struct dm_md_mempools* FUNC_6 (struct dm_table*) ;

__attribute__((used)) static int FUNC_7(struct mapped_device *VAR_0, struct dm_table *VAR_1)
{
 struct dm_md_mempools *VAR_2 = FUNC_6(VAR_1);
 int VAR_3 = 0;

 if (FUNC_4(VAR_1)) {





  FUNC_1(&VAR_0->bs);
  FUNC_1(&VAR_0->io_bs);

 } else if (FUNC_3(&VAR_0->bs)) {
  goto out;
 }

 FUNC_0(!VAR_2 ||
        FUNC_3(&VAR_0->bs) ||
        FUNC_3(&VAR_0->io_bs));

 VAR_3 = FUNC_2(&VAR_0->bs, &VAR_2->bs);
 if (VAR_3)
  goto out;
 VAR_3 = FUNC_2(&VAR_0->io_bs, &VAR_2->io_bs);
 if (VAR_3)
  FUNC_1(&VAR_0->bs);
out:

 FUNC_5(VAR_1);
 return VAR_3;
}
