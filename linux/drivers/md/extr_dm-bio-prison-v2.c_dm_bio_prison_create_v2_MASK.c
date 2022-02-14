
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct dm_bio_prison_v2 {int cells; int cell_pool; int lock; struct workqueue_struct* wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dm_bio_prison_v2*) ;
 struct dm_bio_prison_v2* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;

struct dm_bio_prison_v2 *FUNC_4(struct workqueue_struct *VAR_4)
{
 struct dm_bio_prison_v2 *VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 int VAR_6;

 if (!VAR_5)
  return ((void*)0);

 VAR_5->wq = VAR_4;
 FUNC_3(&VAR_5->lock);

 VAR_6 = FUNC_2(&VAR_5->cell_pool, VAR_1, VAR_3);
 if (VAR_6) {
  FUNC_0(VAR_5);
  return ((void*)0);
 }

 VAR_5->cells = VAR_2;

 return VAR_5;
}
