
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {int map_rnd_list; int map_seq_list; } ;
struct dm_zone {int link; } ;


 scalar_t__ FUNC_0 (struct dm_zone*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dmz_metadata *VAR_0, struct dm_zone *VAR_1)
{
 if (FUNC_3(&VAR_1->link))
  return;

 FUNC_2(&VAR_1->link);
 if (FUNC_0(VAR_1)) {

  FUNC_1(&VAR_1->link, &VAR_0->map_seq_list);
 } else {

  FUNC_1(&VAR_1->link, &VAR_0->map_rnd_list);
 }
}
