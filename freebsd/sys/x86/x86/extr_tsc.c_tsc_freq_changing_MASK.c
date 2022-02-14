
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_level {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(void *VAR_3, const struct cf_level *VAR_4, int *VAR_5)
{

 if (*VAR_5 != 0 || VAR_1 != &VAR_2)
  return;

 FUNC_0("timecounter TSC must not be in use when "
     "changing frequencies; change denied\n");
 *VAR_5 = VAR_0;
}
