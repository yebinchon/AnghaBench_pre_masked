
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_stats {int mutex; } ;
struct dm_stat {int n_entries; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_stat*,int ,int ,int) ;
 struct dm_stat* FUNC_1 (struct dm_stats*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dm_stats *VAR_1, int VAR_2)
{
 struct dm_stat *VAR_3;

 FUNC_2(&VAR_1->mutex);

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3) {
  FUNC_3(&VAR_1->mutex);
  return -VAR_0;
 }

 FUNC_0(VAR_3, 0, VAR_3->n_entries, 1);

 FUNC_3(&VAR_1->mutex);

 return 1;
}
