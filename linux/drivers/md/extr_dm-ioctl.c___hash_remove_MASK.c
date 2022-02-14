
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_cell {int md; struct dm_table* new_map; int name_list; int uuid_list; } ;
struct dm_table {int dummy; } ;


 struct dm_table* FUNC_0 (int ,int*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct dm_table*) ;
 int FUNC_5 (struct hash_cell*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct dm_table *FUNC_9(struct hash_cell *VAR_1)
{
 struct dm_table *VAR_2;
 int VAR_3;


 FUNC_6(&VAR_1->uuid_list);
 FUNC_6(&VAR_1->name_list);
 FUNC_7(&VAR_0);
 FUNC_3(VAR_1->md, ((void*)0));
 FUNC_8(&VAR_0);

 VAR_2 = FUNC_0(VAR_1->md, &VAR_3);
 if (VAR_2)
  FUNC_4(VAR_2);
 FUNC_2(VAR_1->md, VAR_3);

 VAR_2 = ((void*)0);
 if (VAR_1->new_map)
  VAR_2 = VAR_1->new_map;
 FUNC_1(VAR_1->md);
 FUNC_5(VAR_1);

 return VAR_2;
}
