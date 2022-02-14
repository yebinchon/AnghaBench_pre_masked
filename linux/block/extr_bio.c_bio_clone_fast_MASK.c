
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_set {int dummy; } ;
struct bio {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct bio*,struct bio*) ;
 struct bio* FUNC_1 (int ,int ,struct bio_set*) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,struct bio*,int ) ;
 int FUNC_4 (struct bio*) ;

struct bio *FUNC_5(struct bio *VAR_0, gfp_t VAR_1, struct bio_set *VAR_2)
{
 struct bio *VAR_3;

 VAR_3 = FUNC_1(VAR_1, 0, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(VAR_3, VAR_0);

 if (FUNC_2(VAR_0)) {
  int VAR_4;

  VAR_4 = FUNC_3(VAR_3, VAR_0, VAR_1);

  if (VAR_4 < 0) {
   FUNC_4(VAR_3);
   return ((void*)0);
  }
 }

 return VAR_3;
}
