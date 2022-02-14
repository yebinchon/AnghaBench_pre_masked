
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servtab {int se_service; } ;
typedef int buffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_3, struct servtab *VAR_4)
{
 int VAR_5;
 char VAR_6[VAR_0];

 FUNC_1(VAR_4->se_service, VAR_3);
 while (1) {
  while ((VAR_5 = FUNC_2(VAR_3, VAR_6, sizeof(VAR_6))) > 0)
   ;
  if (VAR_5 == 0 || VAR_2 != VAR_1)
   break;
 }
 FUNC_0(0);
}
