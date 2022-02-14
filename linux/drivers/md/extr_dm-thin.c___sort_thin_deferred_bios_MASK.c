
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_list {int dummy; } ;
struct thin_c {struct bio_list deferred_bio_list; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct thin_c*) ;
 int FUNC_1 (struct thin_c*,struct bio*) ;
 int FUNC_2 (struct bio_list*) ;
 int FUNC_3 (struct bio_list*,struct bio_list*) ;
 struct bio* FUNC_4 (struct bio_list*) ;

__attribute__((used)) static void FUNC_5(struct thin_c *VAR_0)
{
 struct bio *VAR_1;
 struct bio_list VAR_2;

 FUNC_2(&VAR_2);
 FUNC_3(&VAR_2, &VAR_0->deferred_bio_list);
 FUNC_2(&VAR_0->deferred_bio_list);


 while ((VAR_1 = FUNC_4(&VAR_2)))
  FUNC_1(VAR_0, VAR_1);






 FUNC_0(VAR_0);
}
