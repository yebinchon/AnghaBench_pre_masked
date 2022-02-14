
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {unsigned long rate; int max_rate; int min_rate; } ;
struct clk_core {int dummy; } ;


 int FUNC_0 (struct clk_core*,int *,int *) ;
 int FUNC_1 (struct clk_core*) ;
 int FUNC_2 (struct clk_core*,int) ;
 int FUNC_3 (struct clk_core*,struct clk_rate_request*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static unsigned long FUNC_5(struct clk_core *VAR_1,
           unsigned long VAR_2)
{
 int VAR_3, VAR_4;
 struct clk_rate_request VAR_5;

 FUNC_4(&VAR_0);

 if (!VAR_1)
  return 0;


 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_0(VAR_1, &VAR_5.min_rate, &VAR_5.max_rate);
 VAR_5.rate = VAR_2;

 VAR_3 = FUNC_3(VAR_1, &VAR_5);


 FUNC_2(VAR_1, VAR_4);

 return VAR_3 ? 0 : VAR_5.rate;
}
