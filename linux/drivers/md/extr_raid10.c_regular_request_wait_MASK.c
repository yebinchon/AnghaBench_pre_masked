
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r10conf {scalar_t__ reshape_progress; int wait_barrier; int mddev; } ;
struct mddev {int recovery; } ;
struct TYPE_2__ {scalar_t__ bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct r10conf*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct r10conf*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct mddev *VAR_1, struct r10conf *VAR_2,
     struct bio *VAR_3, sector_t VAR_4)
{
 FUNC_3(VAR_2);
 while (FUNC_2(VAR_0, &VAR_1->recovery) &&
     VAR_3->bi_iter.bi_sector < VAR_2->reshape_progress &&
     VAR_3->bi_iter.bi_sector + VAR_4 > VAR_2->reshape_progress) {
  FUNC_1(VAR_2->mddev, "wait reshape");
  FUNC_0(VAR_2);
  FUNC_4(VAR_2->wait_barrier,
      VAR_2->reshape_progress <= VAR_3->bi_iter.bi_sector ||
      VAR_2->reshape_progress >= VAR_3->bi_iter.bi_sector +
      VAR_4);
  FUNC_3(VAR_2);
 }
}
