
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g762_data {unsigned long clk_freq; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct g762_data* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1, unsigned long VAR_2)
{
 struct g762_data *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 > 0xffffff)
  return -VAR_0;
 if (!VAR_2)
  VAR_2 = 32768;

 VAR_3->clk_freq = VAR_2;

 return 0;
}
