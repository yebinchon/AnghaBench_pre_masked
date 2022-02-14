
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct hash_cell {struct dm_table* new_map; struct mapped_device* md; } ;
struct dm_table {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct mapped_device*,int*) ;
 struct hash_cell* FUNC_2 (struct mapped_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct dm_table *FUNC_5(struct mapped_device *VAR_1, int *VAR_2)
{
 struct hash_cell *VAR_3;
 struct dm_table *VAR_4 = ((void*)0);


 FUNC_1(VAR_1, VAR_2);

 FUNC_3(&VAR_0);
 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3 || VAR_3->md != VAR_1) {
  FUNC_0("device has been removed from the dev hash table.");
  goto out;
 }

 VAR_4 = VAR_3->new_map;

out:
 FUNC_4(&VAR_0);

 return VAR_4;
}
