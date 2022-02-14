
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {int map_seq_list; int map_rnd_list; } ;
struct dm_zone {unsigned int chunk; int link; } ;


 int VAR_0 ;
 int FUNC_0 (struct dmz_metadata*,struct dm_zone*) ;
 scalar_t__ FUNC_1 (struct dm_zone*) ;
 int FUNC_2 (struct dmz_metadata*,unsigned int,int ,int ) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(struct dmz_metadata *VAR_1, struct dm_zone *VAR_2,
    unsigned int VAR_3)
{

 FUNC_2(VAR_1, VAR_3, FUNC_0(VAR_1, VAR_2),
         VAR_0);
 VAR_2->chunk = VAR_3;
 if (FUNC_1(VAR_2))
  FUNC_3(&VAR_2->link, &VAR_1->map_rnd_list);
 else
  FUNC_3(&VAR_2->link, &VAR_1->map_seq_list);
}
