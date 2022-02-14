
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct threshold {int current_value; scalar_t__ value_set; } ;


 scalar_t__ FUNC_0 (struct threshold*,int ) ;

__attribute__((used)) static bool FUNC_1(struct threshold *VAR_0)
{
 return VAR_0->value_set && FUNC_0(VAR_0, VAR_0->current_value);
}
