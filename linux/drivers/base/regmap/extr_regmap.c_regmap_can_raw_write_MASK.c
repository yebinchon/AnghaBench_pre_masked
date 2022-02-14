
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ format_reg; scalar_t__ format_val; } ;
struct regmap {TYPE_2__ format; TYPE_1__* bus; } ;
struct TYPE_3__ {scalar_t__ write; } ;



bool FUNC_0(struct regmap *VAR_0)
{
 return VAR_0->bus && VAR_0->bus->write && VAR_0->format.format_val &&
  VAR_0->format.format_reg;
}
