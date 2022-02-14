
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resync_pages {int dummy; } ;
struct r10conf {int copies; } ;
struct r10bio {TYPE_1__* devs; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {struct bio* repl_bio; struct bio* bio; } ;


 int FUNC_0 (struct bio*) ;
 struct resync_pages* FUNC_1 (struct bio*) ;
 int FUNC_2 (struct resync_pages*) ;
 int FUNC_3 (struct r10bio*,struct r10conf*) ;
 int FUNC_4 (struct resync_pages*) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, void *VAR_1)
{
 struct r10conf *VAR_2 = VAR_1;
 struct r10bio *VAR_3 = VAR_0;
 int VAR_4;
 struct resync_pages *VAR_5 = ((void*)0);

 for (VAR_4 = VAR_2->copies; VAR_4--; ) {
  struct bio *VAR_6 = VAR_3->devs[VAR_4].bio;

  if (VAR_6) {
   VAR_5 = FUNC_1(VAR_6);
   FUNC_4(VAR_5);
   FUNC_0(VAR_6);
  }

  VAR_6 = VAR_3->devs[VAR_4].repl_bio;
  if (VAR_6)
   FUNC_0(VAR_6);
 }


 FUNC_2(VAR_5);

 FUNC_3(VAR_3, VAR_2);
}
