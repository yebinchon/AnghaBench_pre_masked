
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int val_bytes; scalar_t__ format_write; } ;
struct regmap {TYPE_1__ format; } ;


 int VAR_0 ;

int FUNC_0(struct regmap *VAR_1)
{
 if (VAR_1->format.format_write)
  return -VAR_0;

 return VAR_1->format.val_bytes;
}
