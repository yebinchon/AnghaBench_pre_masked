
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int map; } ;
struct dm_table {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (struct dm_table*,int *,int *) ;
 struct dm_table* FUNC_3 (int ,int) ;

__attribute__((used)) static struct dm_table *FUNC_4(struct mapped_device *VAR_0)
{
 struct dm_table *VAR_1 = FUNC_3(VAR_0->map, 1);

 if (!VAR_1)
  return ((void*)0);

 FUNC_2(VAR_1, ((void*)0), ((void*)0));
 FUNC_0(VAR_0->map, ((void*)0));
 FUNC_1(VAR_0);

 return VAR_1;
}
