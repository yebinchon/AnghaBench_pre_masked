
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ifname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int,char*) ;
 int FUNC_8 (char*,char*,char*) ;

int
FUNC_9(int VAR_3, char *VAR_4[])
{
 int VAR_5, VAR_6, VAR_7;
 char VAR_8[VAR_0];

 if (VAR_3 < 2)
  FUNC_6();

 if ((VAR_5 = FUNC_4(VAR_2, VAR_1)) == -1)
  FUNC_1(1, "Cannot open bpf interface");

 VAR_6 = 2;
 if (FUNC_0(VAR_4[1], VAR_5) == -1) {
  if (FUNC_3(VAR_8, sizeof(VAR_8)))
   FUNC_1(1, "Failed to determine ethernet interface");
  if (FUNC_0(VAR_8, VAR_5) == -1)
   FUNC_1(1, "Cannot bind to interface `%s'", VAR_8);
  --VAR_6;
 } else
  FUNC_5(VAR_8, VAR_4[1], sizeof(VAR_8));

 if (VAR_6 >= VAR_3)
  FUNC_6();
 VAR_7 = 0;
 for (; VAR_6 < VAR_3; VAR_6++) {
  if (FUNC_7(VAR_5, VAR_4[VAR_6]) != 0) {
   VAR_7 = 1;
   FUNC_8("Cannot send Wake on LAN frame over `%s' to `%s'",
       VAR_8, VAR_4[VAR_6]);
  }
 }
 FUNC_2(VAR_7);
}
