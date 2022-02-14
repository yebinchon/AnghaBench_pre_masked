
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int ,unsigned long) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char*,int,unsigned long*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int FUNC_7(const char *VAR_5, const struct kernel_param *VAR_6)
{







 int VAR_7 = FUNC_5(VAR_5);
 char VAR_8[VAR_0];
 unsigned long VAR_9;

 while (VAR_7 && VAR_5[VAR_7-1] == '\n')
  VAR_7--;
 if (VAR_7 >= VAR_0)
  return -VAR_1;
 FUNC_4(VAR_8, VAR_5, VAR_7+1);
 if (FUNC_6(VAR_8, "md_", 3) == 0)
  return FUNC_3(0, VAR_8);
 if (FUNC_6(VAR_8, "md", 2) == 0 &&
     FUNC_1(VAR_8[2]) &&
     FUNC_2(VAR_8+2, 10, &VAR_9) == 0 &&
     VAR_9 <= VAR_4)
  return FUNC_3(FUNC_0(VAR_3, VAR_9), ((void*)0));

 return -VAR_2;
}
