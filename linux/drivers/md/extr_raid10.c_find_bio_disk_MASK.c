
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r10conf {int copies; } ;
struct r10bio {TYPE_1__* devs; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int devnum; struct bio* repl_bio; struct bio* bio; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,struct r10bio*) ;

__attribute__((used)) static int FUNC_2(struct r10conf *VAR_0, struct r10bio *VAR_1,
    struct bio *VAR_2, int *VAR_3, int *VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0->copies; VAR_5++) {
  if (VAR_1->devs[VAR_5].bio == VAR_2)
   break;
  if (VAR_1->devs[VAR_5].repl_bio == VAR_2) {
   VAR_6 = 1;
   break;
  }
 }

 FUNC_0(VAR_5 == VAR_0->copies);
 FUNC_1(VAR_5, VAR_1);

 if (VAR_3)
  *VAR_3 = VAR_5;
 if (VAR_4)
  *VAR_4 = VAR_6;
 return VAR_1->devs[VAR_5].devnum;
}
