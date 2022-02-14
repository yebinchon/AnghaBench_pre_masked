
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {int prison; } ;
struct dm_bio_prison_cell {int dummy; } ;


 int FUNC_0 (int ,struct dm_bio_prison_cell*) ;
 int FUNC_1 (int ,void (*) (void*,struct dm_bio_prison_cell*),void*,struct dm_bio_prison_cell*) ;

__attribute__((used)) static void FUNC_2(struct pool *VAR_0,
          void (*VAR_1)(void *, struct dm_bio_prison_cell *),
          void *VAR_2,
          struct dm_bio_prison_cell *VAR_3)
{
 FUNC_1(VAR_0->prison, VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_0->prison, VAR_3);
}
