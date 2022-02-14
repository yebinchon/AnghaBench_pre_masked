
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_bio_data {int * cell; } ;
struct cache {int prison; } ;
struct bio {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct cache*,int *) ;
 struct per_bio_data* FUNC_2 (struct bio*) ;

__attribute__((used)) static void FUNC_3(struct cache *VAR_0, struct bio *VAR_1)
{
 struct per_bio_data *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->cell && FUNC_0(VAR_0->prison, VAR_2->cell))
  FUNC_1(VAR_0, VAR_2->cell);
 VAR_2->cell = ((void*)0);
}
