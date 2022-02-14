
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_bio_data {int req_nr; } ;
struct cache {int committer; } ;
struct bio {int dummy; } ;


 struct per_bio_data* FUNC_0 (struct bio*) ;
 int FUNC_1 (int *,struct bio*) ;
 int FUNC_2 (struct cache*,struct bio*,int ) ;
 int FUNC_3 (struct cache*,struct bio*) ;

__attribute__((used)) static bool FUNC_4(struct cache *VAR_0, struct bio *VAR_1)
{
 struct per_bio_data *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2->req_nr)
  FUNC_3(VAR_0, VAR_1);
 else
  FUNC_2(VAR_0, VAR_1, 0);

 FUNC_1(&VAR_0->committer, VAR_1);
 return 1;
}
