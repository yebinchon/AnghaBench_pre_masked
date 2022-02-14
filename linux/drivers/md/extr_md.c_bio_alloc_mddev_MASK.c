
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int bio_set; } ;
struct bio {int dummy; } ;
typedef int gfp_t ;


 struct bio* FUNC_0 (int ,int) ;
 struct bio* FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int *) ;

struct bio *FUNC_3(gfp_t VAR_0, int VAR_1,
       struct mddev *VAR_2)
{
 if (!VAR_2 || !FUNC_2(&VAR_2->bio_set))
  return FUNC_0(VAR_0, VAR_1);

 return FUNC_1(VAR_0, VAR_1, &VAR_2->bio_set);
}
