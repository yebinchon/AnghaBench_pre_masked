
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servtab {int se_service; } ;
typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,char*,int) ;
 scalar_t__ FUNC_3 (int,char*,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_1, struct servtab *VAR_2)
{
 char VAR_3[VAR_0];
 int VAR_4;

 FUNC_1(VAR_2->se_service, VAR_1);
 while ((VAR_4 = FUNC_2(VAR_1, VAR_3, sizeof(VAR_3))) > 0 &&
     FUNC_3(VAR_1, VAR_3, VAR_4) > 0)
  ;
 FUNC_0(0);
}
