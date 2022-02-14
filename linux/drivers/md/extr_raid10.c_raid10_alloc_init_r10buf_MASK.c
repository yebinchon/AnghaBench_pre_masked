
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rsync_pages {int dummy; } ;
struct r10conf {int copies; TYPE_1__* mddev; int r10buf_pool; } ;
struct r10bio {TYPE_2__* devs; } ;
struct bio {struct rsync_pages* bi_private; } ;
struct TYPE_4__ {struct bio* repl_bio; struct bio* bio; } ;
struct TYPE_3__ {int recovery; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bio*) ;
 struct r10bio* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static struct r10bio *FUNC_3(struct r10conf *VAR_3)
{
 struct r10bio *VAR_4 = FUNC_1(&VAR_3->r10buf_pool, VAR_0);
 struct rsync_pages *VAR_5;
 struct bio *VAR_6;
 int VAR_7;
 int VAR_8;

 if (FUNC_2(VAR_2, &VAR_3->mddev->recovery) ||
     FUNC_2(VAR_1, &VAR_3->mddev->recovery))
  VAR_7 = VAR_3->copies;
 else
  VAR_7 = 2;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_6 = VAR_4->devs[VAR_8].bio;
  VAR_5 = VAR_6->bi_private;
  FUNC_0(VAR_6);
  VAR_6->bi_private = VAR_5;
  VAR_6 = VAR_4->devs[VAR_8].repl_bio;
  if (VAR_6) {
   VAR_5 = VAR_6->bi_private;
   FUNC_0(VAR_6);
   VAR_6->bi_private = VAR_5;
  }
 }
 return VAR_4;
}
