
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_clone_region_hydration {struct clone* clone; } ;
struct clone {int hydration_pool; } ;


 int VAR_0 ;
 struct dm_clone_region_hydration* FUNC_0 (int *,int ) ;

__attribute__((used)) static struct dm_clone_region_hydration *FUNC_1(struct clone *VAR_1)
{
 struct dm_clone_region_hydration *VAR_2;





 VAR_2 = FUNC_0(&VAR_1->hydration_pool, VAR_0);
 VAR_2->clone = VAR_1;

 return VAR_2;
}
