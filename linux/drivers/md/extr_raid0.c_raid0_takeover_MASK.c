
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int level; scalar_t__ layout; scalar_t__ bitmap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (char*,int,...) ;
 void* FUNC_3 (struct mddev*) ;
 void* FUNC_4 (struct mddev*) ;
 void* FUNC_5 (struct mddev*) ;

__attribute__((used)) static void *FUNC_6(struct mddev *VAR_3)
{







 if (VAR_3->bitmap) {
  FUNC_2("md/raid0: %s: cannot takeover array with bitmap\n",
   FUNC_1(VAR_3));
  return FUNC_0(-VAR_1);
 }
 if (VAR_3->level == 4)
  return FUNC_5(VAR_3);

 if (VAR_3->level == 5) {
  if (VAR_3->layout == VAR_0)
   return FUNC_5(VAR_3);

  FUNC_2("md/raid0:%s: Raid can only takeover Raid5 with layout: %d\n",
   FUNC_1(VAR_3), VAR_0);
 }

 if (VAR_3->level == 10)
  return FUNC_4(VAR_3);

 if (VAR_3->level == 1)
  return FUNC_3(VAR_3);

 FUNC_2("Takeover from raid%i to raid0 not supported\n",
  VAR_3->level);

 return FUNC_0(-VAR_2);
}
