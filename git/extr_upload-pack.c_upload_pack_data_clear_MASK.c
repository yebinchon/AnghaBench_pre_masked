
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upload_pack_data {int deepen_not; int shallows; int haves; int wanted_refs; int wants; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct upload_pack_data *VAR_0)
{
 FUNC_0(&VAR_0->wants);
 FUNC_2(&VAR_0->wanted_refs, 1);
 FUNC_1(&VAR_0->haves);
 FUNC_0(&VAR_0->shallows);
 FUNC_2(&VAR_0->deepen_not, 0);
}
