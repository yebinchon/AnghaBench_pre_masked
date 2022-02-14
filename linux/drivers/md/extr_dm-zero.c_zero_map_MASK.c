
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int dummy; } ;
struct bio {int bi_opf; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;

__attribute__((used)) static int FUNC_3(struct dm_target *VAR_3, struct bio *VAR_4)
{
 switch (FUNC_1(VAR_4)) {
 case 129:
  if (VAR_4->bi_opf & VAR_2) {

   return VAR_0;
  }
  FUNC_2(VAR_4);
  break;
 case 128:

  break;
 default:
  return VAR_0;
 }

 FUNC_0(VAR_4);


 return VAR_1;
}
