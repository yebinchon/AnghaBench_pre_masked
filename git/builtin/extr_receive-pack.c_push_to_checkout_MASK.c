
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {int argv; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (struct argv_array*,char*,int ) ;
 int FUNC_2 (unsigned char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *) ;

__attribute__((used)) static const char *FUNC_4(unsigned char *VAR_1,
        struct argv_array *VAR_2,
        const char *VAR_3)
{
 FUNC_1(VAR_2, "GIT_WORK_TREE=%s", FUNC_0(VAR_3));
 if (FUNC_3(VAR_2->argv, VAR_0,
   FUNC_2(VAR_1), ((void*)0)))
  return "push-to-checkout hook declined";
 else
  return ((void*)0);
}
