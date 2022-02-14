
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_bio_data {int tick; scalar_t__ len; int * cell; int req_nr; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct bio*) ;
 struct per_bio_data* FUNC_1 (struct bio*) ;

__attribute__((used)) static struct per_bio_data *FUNC_2(struct bio *VAR_0)
{
 struct per_bio_data *VAR_1 = FUNC_1(VAR_0);

 VAR_1->tick = 0;
 VAR_1->req_nr = FUNC_0(VAR_0);
 VAR_1->cell = ((void*)0);
 VAR_1->len = 0;

 return VAR_1;
}
