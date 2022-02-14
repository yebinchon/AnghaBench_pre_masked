
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
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_5,
      const struct kernel_param *VAR_6)
{
 char VAR_7[16];
 char *VAR_8;

 FUNC_1(VAR_7, VAR_5, 15);
 VAR_7[15] = '\0';

 VAR_8 = FUNC_2(VAR_7);

 if (FUNC_0(VAR_8, "none") == 0)
  VAR_4 = VAR_2;
 else if (FUNC_0(VAR_8, "event") == 0)
  VAR_4 = VAR_1;
 else if (FUNC_0(VAR_8, "string") == 0)
  VAR_4 = VAR_3;
 else
  return -VAR_0;

 return 0;
}
