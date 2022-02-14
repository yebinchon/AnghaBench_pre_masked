
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_5, const struct kernel_param *VAR_6)
{
 if (!VAR_5)
  return -VAR_3;

 if (!FUNC_0(VAR_5, "on", 2))
  VAR_4 = VAR_1;
 else if (!FUNC_0(VAR_5, "off", 3))
  VAR_4 = VAR_0;
 else if (!FUNC_0(VAR_5, "force", 5))
  VAR_4 = VAR_2;

 return 0;
}
