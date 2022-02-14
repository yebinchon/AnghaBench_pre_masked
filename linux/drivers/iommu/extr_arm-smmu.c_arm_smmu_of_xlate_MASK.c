
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct of_phandle_args {int args_count; int np; int * args; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,int *,int) ;
 int FUNC_2 (int ,char*,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct of_phandle_args *VAR_3)
{
 u32 VAR_4, VAR_5 = 0;

 if (VAR_3->args_count > 0)
  VAR_5 |= FUNC_0(VAR_0, VAR_3->args[0]);

 if (VAR_3->args_count > 1)
  VAR_5 |= FUNC_0(VAR_1, VAR_3->args[1]);
 else if (!FUNC_2(VAR_3->np, "stream-match-mask", &VAR_4))
  VAR_5 |= FUNC_0(VAR_1, VAR_4);

 return FUNC_1(VAR_2, &VAR_5, 1);
}
