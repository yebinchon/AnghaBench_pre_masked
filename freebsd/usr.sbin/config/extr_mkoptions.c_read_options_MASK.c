
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,char*,char*) ;

__attribute__((used)) static void
FUNC_3(void)
{
 char VAR_4[VAR_0];

 FUNC_0(&VAR_3);
 FUNC_1("../../conf/options", 0);
 (void)FUNC_2(VAR_4, sizeof VAR_4, "../../conf/options.%s",
     VAR_2);
 if (!FUNC_1(VAR_4, 0)) {
  (void)FUNC_2(VAR_4, sizeof VAR_4, "options.%s", VAR_2);
  FUNC_1(VAR_4, 0);
 }
 FUNC_1("../../conf/options-compat", VAR_1);
}
