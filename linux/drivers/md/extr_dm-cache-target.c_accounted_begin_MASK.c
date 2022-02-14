
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_bio_data {int len; } ;
struct cache {int tracker; } ;
struct bio {int dummy; } ;


 scalar_t__ FUNC_0 (struct cache*,struct bio*) ;
 int FUNC_1 (struct bio*) ;
 struct per_bio_data* FUNC_2 (struct bio*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct cache *VAR_0, struct bio *VAR_1)
{
 struct per_bio_data *VAR_2;

 if (FUNC_0(VAR_0, VAR_1)) {
  VAR_2 = FUNC_2(VAR_1);
  VAR_2->len = FUNC_1(VAR_1);
  FUNC_3(&VAR_0->tracker, VAR_2->len);
 }
}
