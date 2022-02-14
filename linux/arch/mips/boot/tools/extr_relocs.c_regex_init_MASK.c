
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int,int *,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(void)
{
 char VAR_4[128];
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_3, VAR_2,
   VAR_0|VAR_1);

 if (VAR_5) {
  FUNC_2(VAR_5, &VAR_3, VAR_4, sizeof(VAR_4));
  FUNC_0("%s", VAR_4);
 }
}
