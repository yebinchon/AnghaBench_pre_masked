
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adt7462_data {int fan_enabled; } ;



__attribute__((used)) static int FUNC_0(struct adt7462_data *VAR_0, int VAR_1)
{
 return VAR_0->fan_enabled & (1 << VAR_1);
}
