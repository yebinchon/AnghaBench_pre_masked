
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct object_id*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 char* FUNC_4 (struct object_id*) ;
 int FUNC_5 (int ,char*,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
 struct object_id VAR_0;


 if (!FUNC_0(FUNC_3()))
  return;

 if (!FUNC_1("HEAD", &VAR_0))
  FUNC_5(FUNC_2(), "%s", FUNC_4(&VAR_0));
 else
  FUNC_5(FUNC_2(), "%s", "");
}
