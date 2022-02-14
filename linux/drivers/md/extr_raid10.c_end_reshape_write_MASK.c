
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r10conf {TYPE_1__* mirrors; } ;
struct r10bio {struct mddev* mddev; } ;
struct mddev {struct r10conf* private; } ;
struct md_rdev {int dummy; } ;
struct bio {scalar_t__ bi_status; } ;
struct TYPE_2__ {struct md_rdev* rdev; struct md_rdev* replacement; } ;


 int FUNC_0 (struct r10bio*) ;
 int FUNC_1 (struct r10conf*,struct r10bio*,struct bio*,int*,int*) ;
 struct r10bio* FUNC_2 (struct bio*) ;
 int FUNC_3 (struct mddev*,struct md_rdev*) ;
 int FUNC_4 (struct md_rdev*,struct mddev*) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct bio *VAR_0)
{
 struct r10bio *VAR_1 = FUNC_2(VAR_0);
 struct mddev *VAR_2 = VAR_1->mddev;
 struct r10conf *VAR_3 = VAR_2->private;
 int VAR_4;
 int VAR_5;
 int VAR_6;
 struct md_rdev *VAR_7 = ((void*)0);

 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_0, &VAR_5, &VAR_6);
 if (VAR_6)
  VAR_7 = VAR_3->mirrors[VAR_4].replacement;
 if (!VAR_7) {
  FUNC_5();
  VAR_7 = VAR_3->mirrors[VAR_4].rdev;
 }

 if (VAR_0->bi_status) {

  FUNC_3(VAR_2, VAR_7);
 }

 FUNC_4(VAR_7, VAR_2);
 FUNC_0(VAR_1);
}
