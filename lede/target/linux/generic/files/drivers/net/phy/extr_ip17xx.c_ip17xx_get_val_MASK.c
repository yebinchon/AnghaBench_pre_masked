
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; } ;
struct switch_val {TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct ip17xx_state {int proc_mii; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ip17xx_state*,int ) ;
 struct ip17xx_state* FUNC_2 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_3(struct switch_dev *VAR_1, const struct switch_attr *VAR_2, struct switch_val *VAR_3)
{
 struct ip17xx_state *VAR_4 = FUNC_2(VAR_1);
 int VAR_5 = -VAR_0;
 if (FUNC_0(VAR_4->proc_mii))
  VAR_5 = FUNC_1(VAR_4, VAR_4->proc_mii);

 if (VAR_5 < 0) {
  return VAR_5;
 } else {
  VAR_3->value.i = VAR_5;
  return 0;
 }
}
