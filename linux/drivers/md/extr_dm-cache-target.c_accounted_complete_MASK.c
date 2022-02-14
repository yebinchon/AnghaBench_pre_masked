
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_bio_data {int len; } ;
struct cache {int tracker; } ;
struct bio {int dummy; } ;


 struct per_bio_data* FUNC_0 (struct bio*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct cache *VAR_0, struct bio *VAR_1)
{
 struct per_bio_data *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(&VAR_0->tracker, VAR_2->len);
}
