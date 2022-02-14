
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r0conf {int nr_strip_zones; TYPE_1__* strip_zone; } ;
struct mddev {scalar_t__ level; struct r0conf* private; } ;
struct TYPE_2__ {int nb_dev; int zone_end; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (char*,int ) ;
 void* FUNC_3 (struct mddev*,int ,int ) ;

__attribute__((used)) static void *FUNC_4(struct mddev *VAR_1)
{
 struct r0conf *VAR_2;




 if (VAR_1->level == 0) {

  VAR_2 = VAR_1->private;
  if (VAR_2->nr_strip_zones > 1) {
   FUNC_2("md/raid10:%s: cannot takeover raid 0 with more than one zone.\n",
    FUNC_1(VAR_1));
   return FUNC_0(-VAR_0);
  }
  return FUNC_3(VAR_1,
   VAR_2->strip_zone->zone_end,
   VAR_2->strip_zone->nb_dev);
 }
 return FUNC_0(-VAR_0);
}
