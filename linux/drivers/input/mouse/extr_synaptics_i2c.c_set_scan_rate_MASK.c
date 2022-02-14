
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synaptics_i2c {int scan_ms; int scan_rate_param; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct synaptics_i2c *VAR_1, int VAR_2)
{
 VAR_1->scan_ms = VAR_0 / VAR_2;
 VAR_1->scan_rate_param = VAR_2;
}
