
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int dummy; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {int bi_opf; TYPE_1__ bi_iter; } ;
typedef int sector_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct mddev*,struct bio*) ;
 int FUNC_4 (struct mddev*,struct bio*) ;
 int FUNC_5 (struct mddev*,struct bio*,int ,int *) ;
 int FUNC_6 (struct mddev*,struct bio*,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static bool FUNC_8(struct mddev *VAR_2, struct bio *VAR_3)
{
 sector_t VAR_4;

 if (FUNC_7(VAR_3->bi_opf & VAR_1)) {
  FUNC_3(VAR_2, VAR_3);
  return 1;
 }
 VAR_4 = FUNC_0(
  VAR_3->bi_iter.bi_sector, FUNC_2(VAR_3));

 if (FUNC_1(VAR_3) == VAR_0)
  FUNC_5(VAR_2, VAR_3, VAR_4, ((void*)0));
 else {
  if (!FUNC_4(VAR_2,VAR_3))
   return 0;
  FUNC_6(VAR_2, VAR_3, VAR_4);
 }
 return 1;
}
