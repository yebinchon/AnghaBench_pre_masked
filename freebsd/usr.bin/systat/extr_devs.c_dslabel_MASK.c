
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* device_name; int unit_number; scalar_t__ selected; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int,int,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,char*,int ) ;

void
FUNC_2(int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_0(VAR_4, VAR_3, "Disks");
 FUNC_0(VAR_4 + 1, VAR_3, "KB/t");
 FUNC_0(VAR_4 + 2, VAR_3, "tps");
 FUNC_0(VAR_4 + 3, VAR_3, "MB/s");
 FUNC_0(VAR_4 + 4, VAR_3, "%%busy");






 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_1 && VAR_6 < VAR_2; VAR_5++)
  if (VAR_0[VAR_5].selected) {
   char VAR_7[80];
   FUNC_1(VAR_7, "%s%d", VAR_0[VAR_5].device_name,
    VAR_0[VAR_5].unit_number);
   FUNC_0(VAR_4, VAR_3 + 5 + 6 * VAR_6,
    " %5.5s", VAR_7);
   VAR_6++;
  }
}
