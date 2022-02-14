
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(char *VAR_3, const struct kernel_param *VAR_4)
{
 VAR_3[0] = '\0';
 if (VAR_2)
  FUNC_0(&VAR_1, VAR_3,
          VAR_0);
 return FUNC_1(VAR_3) + 1;
}
