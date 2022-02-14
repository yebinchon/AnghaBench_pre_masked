
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apm_user {scalar_t__ magic; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static int FUNC_1(struct apm_user *VAR_1, const char *VAR_2)
{
 if (VAR_1 == ((void*)0) || VAR_1->magic != VAR_0) {
  FUNC_0("%s passed bad filp\n", VAR_2);
  return 1;
 }
 return 0;
}
