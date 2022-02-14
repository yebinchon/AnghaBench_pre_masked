
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int flush_work; int flush_pending; } ;
struct md_rdev {struct mddev* mddev; } ;
struct bio {struct md_rdev* bi_private; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct bio*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct md_rdev*,struct mddev*) ;

__attribute__((used)) static void FUNC_4(struct bio *VAR_1)
{
 struct md_rdev *VAR_2 = VAR_1->bi_private;
 struct mddev *VAR_3 = VAR_2->mddev;

 FUNC_3(VAR_2, VAR_3);

 if (FUNC_0(&VAR_3->flush_pending)) {

  FUNC_2(VAR_0, &VAR_3->flush_work);
 }
 FUNC_1(VAR_1);
}
