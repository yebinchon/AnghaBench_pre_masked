
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1conf {int bio_split; struct r1conf* barrier; struct r1conf* nr_queued; struct r1conf* nr_waiting; struct r1conf* nr_pending; struct r1conf* poolinfo; int tmppage; struct r1conf* mirrors; int r1bio_pool; } ;
struct mddev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct r1conf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mddev *VAR_0, void *VAR_1)
{
 struct r1conf *VAR_2 = VAR_1;

 FUNC_2(&VAR_2->r1bio_pool);
 FUNC_1(VAR_2->mirrors);
 FUNC_3(VAR_2->tmppage);
 FUNC_1(VAR_2->poolinfo);
 FUNC_1(VAR_2->nr_pending);
 FUNC_1(VAR_2->nr_waiting);
 FUNC_1(VAR_2->nr_queued);
 FUNC_1(VAR_2->barrier);
 FUNC_0(&VAR_2->bio_split);
 FUNC_1(VAR_2);
}
