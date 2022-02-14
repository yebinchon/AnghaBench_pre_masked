
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk3399_dmcfreq {unsigned long rate; } ;
struct device {int dummy; } ;


 struct rk3399_dmcfreq* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, unsigned long *VAR_1)
{
 struct rk3399_dmcfreq *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->rate;

 return 0;
}
