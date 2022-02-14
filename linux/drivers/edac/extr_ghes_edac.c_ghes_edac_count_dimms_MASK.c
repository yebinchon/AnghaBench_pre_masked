
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmi_header {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(const struct dmi_header *VAR_1, void *VAR_2)
{
 int *VAR_3 = VAR_2;

 if (VAR_1->type == VAR_0)
  (*VAR_3)++;
}
