
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_duty {int den; int num; } ;
struct clk_core {struct clk_duty duty; } ;


 int FUNC_0 (struct clk_core*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct clk_core *VAR_0,
       unsigned int VAR_1)
{
 struct clk_duty *VAR_2 = &VAR_0->duty;
 int VAR_3;

 FUNC_1();

 VAR_3 = FUNC_0(VAR_0);
 if (!VAR_3)
  VAR_3 = FUNC_3(VAR_1, VAR_2->num, VAR_2->den);

 FUNC_2();

 return VAR_3;
}
