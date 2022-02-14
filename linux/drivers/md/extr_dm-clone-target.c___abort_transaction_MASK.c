
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clone {int cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (struct clone*,int ) ;
 char* FUNC_2 (struct clone*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct clone*) ;

__attribute__((used)) static void FUNC_5(struct clone *VAR_2)
{
 const char *VAR_3 = FUNC_2(VAR_2);

 if (FUNC_4(VAR_2) >= VAR_1)
  return;

 FUNC_0("%s: Aborting current metadata transaction", VAR_3);
 if (FUNC_3(VAR_2->cmd)) {
  FUNC_0("%s: Failed to abort metadata transaction", VAR_3);
  FUNC_1(VAR_2, VAR_0);
 }
}
