
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cec_pin {int la_mask; } ;
struct cec_adapter {struct cec_pin* pin; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct cec_adapter *VAR_1, u8 VAR_2)
{
 struct cec_pin *VAR_3 = VAR_1->pin;

 if (VAR_2 == VAR_0)
  VAR_3->la_mask = 0;
 else
  VAR_3->la_mask |= (1 << VAR_2);
 return 0;
}
