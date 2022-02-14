
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bio_prison {int cells; int cell_pool; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dm_bio_prison*) ;
 struct dm_bio_prison* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;

struct dm_bio_prison *FUNC_4(void)
{
 struct dm_bio_prison *VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 int VAR_5;

 if (!VAR_4)
  return ((void*)0);

 FUNC_3(&VAR_4->lock);

 VAR_5 = FUNC_2(&VAR_4->cell_pool, VAR_1, VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 VAR_4->cells = VAR_2;

 return VAR_4;
}
