
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int quiesce; int wait_for_overlap; int wait_for_quiescent; int active_aligned_reads; int active_stripes; } ;
struct mddev {struct r5conf* private; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct r5conf*) ;
 int FUNC_2 (struct r5conf*,int) ;
 int FUNC_3 (struct r5conf*,int ) ;
 int FUNC_4 (struct r5conf*) ;
 int FUNC_5 (int ,int,int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct mddev *VAR_1, int VAR_2)
{
 struct r5conf *VAR_3 = VAR_1->private;

 if (VAR_2) {

  FUNC_1(VAR_3);



  FUNC_3(VAR_3, VAR_0);
  VAR_3->quiesce = 2;
  FUNC_5(VAR_3->wait_for_quiescent,
        FUNC_0(&VAR_3->active_stripes) == 0 &&
        FUNC_0(&VAR_3->active_aligned_reads) == 0,
        FUNC_4(VAR_3),
        FUNC_1(VAR_3));
  VAR_3->quiesce = 1;
  FUNC_4(VAR_3);

  FUNC_6(&VAR_3->wait_for_overlap);
 } else {

  FUNC_1(VAR_3);
  VAR_3->quiesce = 0;
  FUNC_6(&VAR_3->wait_for_quiescent);
  FUNC_6(&VAR_3->wait_for_overlap);
  FUNC_4(VAR_3);
 }
 FUNC_2(VAR_3, VAR_2);
}
