
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {scalar_t__ nr_reserved_seq; int free_wq; int unmap_nr_seq; int unmap_seq_list; int nr_reserved_seq_zones; int reserved_seq_zones_list; int unmap_nr_rnd; int unmap_rnd_list; } ;
struct dm_zone {int link; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct dm_zone*) ;
 scalar_t__ FUNC_3 (struct dm_zone*) ;
 int FUNC_4 (struct dmz_metadata*,struct dm_zone*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct dmz_metadata *VAR_0, struct dm_zone *VAR_1)
{

 if (FUNC_3(VAR_1))
  FUNC_4(VAR_0, VAR_1);


 if (FUNC_2(VAR_1)) {
  FUNC_5(&VAR_1->link, &VAR_0->unmap_rnd_list);
  FUNC_0(&VAR_0->unmap_nr_rnd);
 } else if (FUNC_1(&VAR_0->nr_reserved_seq_zones) <
     VAR_0->nr_reserved_seq) {
  FUNC_5(&VAR_1->link, &VAR_0->reserved_seq_zones_list);
  FUNC_0(&VAR_0->nr_reserved_seq_zones);
 } else {
  FUNC_5(&VAR_1->link, &VAR_0->unmap_seq_list);
  FUNC_0(&VAR_0->unmap_nr_seq);
 }

 FUNC_6(&VAR_0->free_wq);
}
