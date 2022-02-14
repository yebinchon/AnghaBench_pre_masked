
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int sb_wait; int pending_writes; int sb_flags; } ;
struct md_rdev {int flags; struct mddev* mddev; } ;
struct bio {int bi_opf; scalar_t__ bi_status; struct md_rdev* bi_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct mddev*,struct md_rdev*) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (struct md_rdev*,struct mddev*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct bio *VAR_4)
{
 struct md_rdev *VAR_5 = VAR_4->bi_private;
 struct mddev *VAR_6 = VAR_5->mddev;

 if (VAR_4->bi_status) {
  FUNC_4("md: super_written gets error=%d\n", VAR_4->bi_status);
  FUNC_3(VAR_6, VAR_5);
  if (!FUNC_7(VAR_0, &VAR_5->flags)
      && (VAR_4->bi_opf & VAR_2)) {
   FUNC_6(VAR_3, &VAR_6->sb_flags);
   FUNC_6(VAR_1, &VAR_5->flags);
  }
 } else
  FUNC_2(VAR_1, &VAR_5->flags);

 if (FUNC_0(&VAR_6->pending_writes))
  FUNC_8(&VAR_6->sb_wait);
 FUNC_5(VAR_5, VAR_6);
 FUNC_1(VAR_4);
}
