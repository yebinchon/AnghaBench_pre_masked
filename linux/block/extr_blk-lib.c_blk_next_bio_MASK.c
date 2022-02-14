
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int dummy; } ;
typedef int gfp_t ;


 struct bio* FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (struct bio*,struct bio*) ;
 int FUNC_2 (struct bio*) ;

struct bio *FUNC_3(struct bio *VAR_0, unsigned int VAR_1, gfp_t VAR_2)
{
 struct bio *VAR_3 = FUNC_0(VAR_2, VAR_1);

 if (VAR_0) {
  FUNC_1(VAR_0, VAR_3);
  FUNC_2(VAR_0);
 }

 return VAR_3;
}
