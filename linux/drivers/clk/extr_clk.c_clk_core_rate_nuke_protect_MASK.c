
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_core {int protect_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_core*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct clk_core *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_1);

 if (!VAR_2)
  return -VAR_0;

 if (VAR_2->protect_count == 0)
  return 0;

 VAR_3 = VAR_2->protect_count;
 VAR_2->protect_count = 1;
 FUNC_0(VAR_2);

 return VAR_3;
}
