
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* ksw_devname; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int ,char*,int ,char const*,...) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;

void
FUNC_4(void)
{
 const char *VAR_7;
 int VAR_8;

 FUNC_1();

 FUNC_3(VAR_6);

 FUNC_2(VAR_6, 0, 0, "%*s%*s%*s %s",
     -VAR_0, "Disk", VAR_2, VAR_1, VAR_5, "Used",
     "/0%  /10  /20  /30  /40  /50  /60  /70  /80  /90  /100");

 for (VAR_8 = 0; VAR_8 <= VAR_4; ++VAR_8) {
  if (VAR_8 == VAR_4) {
   if (VAR_4 == 1)
    break;
   VAR_7 = "Total";
  } else
   VAR_7 = VAR_3[VAR_8].ksw_devname;
  FUNC_2(VAR_6, VAR_8 + 1, 0, "%*s", -VAR_0, VAR_7);
 }
 FUNC_0(12, 0, 18);
}
