
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* Print ) (int ,char*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int VAR_1 ;
 int FUNC_7 () ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ,char*,int) ;
 int VAR_6 ;

int FUNC_9(void)
{
 char *VAR_7;





 VAR_7 = FUNC_5("synfile", "syn.c");
 VAR_6 = FUNC_3(VAR_7);
 VAR_7 = FUNC_5("rndfile", "rnd.c");
 VAR_4 = FUNC_1(VAR_7);
 VAR_7 = FUNC_5("matchfile", "match.c");
 VAR_3 = FUNC_0(VAR_7);

 if (!FUNC_6("nochat", "0"))
 {
  VAR_7 = FUNC_5("rchatfile", "rchat.c");
  VAR_5 = FUNC_2(VAR_7);
 }

 FUNC_4();




 return VAR_0;
}
