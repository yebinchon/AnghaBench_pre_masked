
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* Print ) (int ,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(void)
{
 char *VAR_7;


 VAR_5 = FUNC_2("g_gametype", "0");

 VAR_7 = FUNC_1("itemconfig", "items.c");

 VAR_6 = FUNC_3(VAR_7);
 if (!VAR_6)
 {
  VAR_3.Print(VAR_2, "couldn't load item config\n");
  return VAR_0;
 }

 VAR_4 = FUNC_0("droppedweight", "1000");

 return VAR_1;
}
