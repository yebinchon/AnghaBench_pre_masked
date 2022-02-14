
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cec_pin {int monitor_all; } ;
struct cec_adapter {struct cec_pin* pin; } ;



__attribute__((used)) static int FUNC_0(struct cec_adapter *VAR_0,
        bool VAR_1)
{
 struct cec_pin *VAR_2 = VAR_0->pin;

 VAR_2->monitor_all = VAR_1;
 return 0;
}
