
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_bio_data {int dummy; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int) ;
 struct per_bio_data* FUNC_1 (struct bio*,int) ;

__attribute__((used)) static struct per_bio_data *FUNC_2(struct bio *VAR_0)
{
 struct per_bio_data *VAR_1 = FUNC_1(VAR_0, sizeof(struct per_bio_data));
 FUNC_0(!VAR_1);
 return VAR_1;
}
