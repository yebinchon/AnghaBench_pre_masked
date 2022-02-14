
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {struct clone* private; } ;
struct clone {int cmd; int ios_in_flight; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {int bi_opf; TYPE_1__ bi_iter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 unsigned long FUNC_3 (struct clone*,struct bio*) ;
 scalar_t__ FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (struct dm_target*,int ) ;
 scalar_t__ FUNC_6 (struct clone*) ;
 int FUNC_7 (struct clone*,struct bio*) ;
 int FUNC_8 (struct clone*,struct bio*) ;
 int FUNC_9 (struct clone*,struct bio*) ;
 int FUNC_10 (struct clone*,struct bio*) ;
 int FUNC_11 (struct clone*,struct bio*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct dm_target *VAR_7, struct bio *VAR_8)
{
 struct clone *VAR_9 = VAR_7->private;
 unsigned long VAR_10;

 FUNC_0(&VAR_9->ios_in_flight);

 if (FUNC_12(FUNC_6(VAR_9) == VAR_0))
  return VAR_1;
 if (VAR_8->bi_opf & VAR_6) {
  FUNC_9(VAR_9, VAR_8);
  return VAR_3;
 }

 VAR_8->bi_iter.bi_sector = FUNC_5(VAR_7, VAR_8->bi_iter.bi_sector);






 if (FUNC_2(VAR_8) == VAR_5) {
  FUNC_8(VAR_9, VAR_8);
  return VAR_3;
 }
 VAR_10 = FUNC_3(VAR_9, VAR_8);
 if (FUNC_4(VAR_9->cmd, VAR_10)) {
  FUNC_9(VAR_9, VAR_8);
  return VAR_3;
 } else if (FUNC_1(VAR_8) == VAR_4) {
  FUNC_11(VAR_9, VAR_8);
  return VAR_2;
 }

 FUNC_10(VAR_9, VAR_8);
 FUNC_7(VAR_9, VAR_8);

 return VAR_3;
}
