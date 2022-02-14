
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_bridge_data {int current_memory_agp; int agp_in_use; } ;


 int VAR_0 ;
 struct agp_bridge_data* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 struct agp_bridge_data* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int *) ;

struct agp_bridge_data *FUNC_3(void)
{
 struct agp_bridge_data *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(&VAR_3->agp_in_use, 0);
 FUNC_0(&VAR_3->current_memory_agp, 0);

 if (FUNC_2(&VAR_2))
  VAR_1 = VAR_3;

 return VAR_3;
}
