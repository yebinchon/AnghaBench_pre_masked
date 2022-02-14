
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r0conf {int nr_strip_zones; TYPE_2__* strip_zone; TYPE_1__** devlist; } ;
struct mddev {struct r0conf* private; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {int nb_dev; scalar_t__ zone_end; scalar_t__ dev_start; } ;
struct TYPE_3__ {int bdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (char*,unsigned long long,...) ;
 scalar_t__ FUNC_3 (char*,int,char*,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct mddev *VAR_1)
{
 int VAR_2, VAR_3;
 sector_t VAR_4 = 0;
 sector_t VAR_5 = 0;
 char VAR_6[VAR_0];
 struct r0conf *VAR_7 = VAR_1->private;
 int VAR_8 = VAR_7->strip_zone[0].nb_dev;
 FUNC_2("md: RAID0 configuration for %s - %d zone%s\n",
   FUNC_1(VAR_1),
   VAR_7->nr_strip_zones, VAR_7->nr_strip_zones==1?"":"s");
 for (VAR_2 = 0; VAR_2 < VAR_7->nr_strip_zones; VAR_2++) {
  char VAR_9[200];
  int VAR_10 = 0;

  for (VAR_3 = 0; VAR_3 < VAR_7->strip_zone[VAR_2].nb_dev; VAR_3++)
   VAR_10 += FUNC_3(VAR_9+VAR_10, 200-VAR_10, "%s%s", VAR_3?"/":"",
     FUNC_0(VAR_7->devlist[VAR_2*VAR_8
              + VAR_3]->bdev, VAR_6));
  FUNC_2("md: zone%d=[%s]\n", VAR_2, VAR_9);

  VAR_4 = VAR_7->strip_zone[VAR_2].zone_end - VAR_5;
  FUNC_2("      zone-offset=%10lluKB, device-offset=%10lluKB, size=%10lluKB\n",
   (unsigned long long)VAR_5>>1,
   (unsigned long long)VAR_7->strip_zone[VAR_2].dev_start>>1,
   (unsigned long long)VAR_4>>1);
  VAR_5 = VAR_7->strip_zone[VAR_2].zone_end;
 }
}
