
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int ,struct object_id*,int *) ;
 int FUNC_3 (struct object_id*) ;

__attribute__((used)) static int FUNC_4(void)
{
 struct object_id VAR_0;

 if (FUNC_2("HEAD", 0, &VAR_0, ((void*)0)))
  return FUNC_1(FUNC_0("cannot resolve HEAD"));
 return FUNC_3(&VAR_0);
}
