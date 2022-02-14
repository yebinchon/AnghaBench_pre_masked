
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,struct object_id*) ;
 char* FUNC_3 (struct object_id*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(void)
{
 struct object_id VAR_0;
 char *VAR_1;

 if (FUNC_2("HEAD", &VAR_0))
  return FUNC_1(FUNC_0("cannot read HEAD"));

 VAR_1 = FUNC_3(&VAR_0);
 return FUNC_6(VAR_1, FUNC_5(VAR_1), FUNC_4(), 1);
}
