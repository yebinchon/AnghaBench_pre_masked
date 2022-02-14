
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int * FUNC_3 (int ,int *,char*) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (char const*,int *,int) ;

__attribute__((used)) static int FUNC_6(const char *VAR_5, const struct kernel_param *VAR_6)
{
 int VAR_7 = FUNC_5(VAR_5, ((void*)0), 10);

 if (VAR_7 != 0 && VAR_7 != 1)
  return -VAR_0;

 if (VAR_7 && !VAR_1) {
  if (VAR_3)
   FUNC_4(VAR_3);
  VAR_3 = ((void*)0);
  FUNC_2(VAR_4);
 } else if (!VAR_7 && VAR_1) {
  VAR_3 = FUNC_3(VAR_2, ((void*)0), "cmmthread");
  if (FUNC_0(VAR_3))
   return FUNC_1(VAR_3);
 }

 VAR_1 = VAR_7;
 return 0;
}
