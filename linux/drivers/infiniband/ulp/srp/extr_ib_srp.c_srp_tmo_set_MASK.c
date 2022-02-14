
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int* arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,char const*) ;
 int VAR_2 ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_3, const struct kernel_param *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_0(&VAR_5, VAR_3);
 if (VAR_6)
  goto out;

 if (VAR_4->arg == &VAR_2)
  VAR_6 = FUNC_1(VAR_5, VAR_1,
        VAR_0);
 else if (VAR_4->arg == &VAR_1)
  VAR_6 = FUNC_1(VAR_2, VAR_5, VAR_0);
 else
  VAR_6 = FUNC_1(VAR_2, VAR_1,
        VAR_5);
 if (VAR_6)
  goto out;
 *(int *)VAR_4->arg = VAR_5;

out:
 return VAR_6;
}
