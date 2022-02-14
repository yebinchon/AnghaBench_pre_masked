
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct era {int md; } ;
struct dm_target {struct era* private; } ;
struct bio {int bi_opf; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct era*,struct bio*) ;
 int FUNC_2 (struct era*,struct bio*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct era*,struct bio*) ;

__attribute__((used)) static int FUNC_5(struct dm_target *VAR_4, struct bio *VAR_5)
{
 struct era *VAR_6 = VAR_4->private;
 dm_block_t VAR_7 = FUNC_2(VAR_6, VAR_5);






 FUNC_4(VAR_6, VAR_5);




 if (!(VAR_5->bi_opf & VAR_2) &&
     (FUNC_0(VAR_5) == VAR_3) &&
     !FUNC_3(VAR_6->md, VAR_7)) {
  FUNC_1(VAR_6, VAR_5);
  return VAR_1;
 }

 return VAR_0;
}
