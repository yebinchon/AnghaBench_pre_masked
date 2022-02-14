
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int devbuf ;
struct TYPE_8__ {TYPE_2__* dinfo; } ;
struct TYPE_7__ {int selected; int position; } ;
struct TYPE_6__ {TYPE_1__* devices; } ;
struct TYPE_5__ {char* device_name; int unit_number; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,char*,char*,int ) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_9, VAR_10;
 char VAR_11[256];





 if (VAR_8 > 0)
  return;

 if (VAR_2 > 0)
  (void)FUNC_0("       tty");
 for (VAR_9 = 0, VAR_10=0;(VAR_9 < VAR_6) && (VAR_10 < VAR_5);VAR_9++){
  int VAR_12;
  if ((VAR_4[VAR_9].selected != 0)
   && (VAR_4[VAR_9].selected <= VAR_5)) {
   VAR_12 = VAR_4[VAR_9].position;
   FUNC_1(VAR_11, sizeof(VAR_11), "%s%d",
         VAR_3.dinfo->devices[VAR_12].device_name,
         VAR_3.dinfo->devices[VAR_12].unit_number);
   if (VAR_7 > 0)
    (void)FUNC_0("%13.6s ", VAR_11);
   else
    FUNC_0("%16.6s ", VAR_11);
   VAR_10++;
  }
 }
 if (VAR_0 > 0)
  (void)FUNC_0("            cpu\n");
 else
  (void)FUNC_0("\n");

 if (VAR_2 > 0)
  (void)FUNC_0(" tin  tout");

 for (VAR_9=0, VAR_10 = 0;(VAR_9 < VAR_6) && (VAR_10 < VAR_5);VAR_9++){
  if ((VAR_4[VAR_9].selected != 0)
   && (VAR_4[VAR_9].selected <= VAR_5)) {
   if (VAR_7 > 0) {
    if (VAR_1 == 0)
     (void)FUNC_0(" sps tps msps ");
    else
     (void)FUNC_0(" blk xfr msps ");
   } else {
    if (VAR_1 == 0)
     FUNC_0(" KB/t  tps  MB/s ");
    else
     FUNC_0(" KB/t xfrs    MB ");
   }
   VAR_10++;
  }
 }
 if (VAR_0 > 0)
  (void)FUNC_0(" us ni sy in id\n");
 else
  FUNC_0("\n");

}
