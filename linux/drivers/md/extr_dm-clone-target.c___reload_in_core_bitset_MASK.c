
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clone {int cmd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (struct clone*,scalar_t__) ;
 char* FUNC_3 (struct clone*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct clone*) ;

__attribute__((used)) static void FUNC_6(struct clone *VAR_1)
{
 const char *VAR_2 = FUNC_3(VAR_1);

 if (FUNC_5(VAR_1) == VAR_0)
  return;


 FUNC_1("%s: Reloading on-disk bitmap", VAR_2);
 if (FUNC_4(VAR_1->cmd)) {
  FUNC_0("%s: Failed to reload on-disk bitmap", VAR_2);
  FUNC_2(VAR_1, VAR_0);
 }
}
