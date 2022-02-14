
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* device_name; int unit_number; scalar_t__ selected; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,char*) ;
 int VAR_4 ;
 int FUNC_3 (char*,char*,char*,int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_4(int VAR_6)
{
 int VAR_7;
 char VAR_8[10];

 FUNC_1(VAR_5, VAR_6++, VAR_0,
     "/0%  /10  /20  /30  /40  /50  /60  /70  /80  /90  /100");
 VAR_3 = 2 + VAR_2;
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  if (VAR_1[VAR_7].selected) {
   if (VAR_6 > FUNC_0(VAR_5) - 1 - VAR_3)
    break;
   FUNC_3(VAR_8, "%s%d", VAR_1[VAR_7].device_name,
    VAR_1[VAR_7].unit_number);
   FUNC_2(VAR_5, VAR_6++, 0, "%-5.5s MB/s|",
      VAR_8);
   FUNC_1(VAR_5, VAR_6++, 0, "      tps|");
   if (VAR_2)
    FUNC_1(VAR_5, VAR_6++, 0, "     KB/t|");
  }
 return (VAR_6);
}
