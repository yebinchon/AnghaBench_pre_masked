
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gic_chip_data {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(void *VAR_1)
{
 struct gic_chip_data *VAR_2 = VAR_1;

 VAR_2->flags |= VAR_0;

 return 1;
}
