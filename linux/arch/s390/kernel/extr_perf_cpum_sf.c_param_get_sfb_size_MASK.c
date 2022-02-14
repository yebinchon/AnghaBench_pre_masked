
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(char *VAR_3, const struct kernel_param *VAR_4)
{
 if (!FUNC_0())
  return -VAR_2;
 return FUNC_1(VAR_3, "%lu,%lu", VAR_1, VAR_0);
}
