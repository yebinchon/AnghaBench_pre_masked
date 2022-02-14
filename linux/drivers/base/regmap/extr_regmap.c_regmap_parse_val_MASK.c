
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int (* parse_val ) (void const*) ;} ;
struct regmap {TYPE_1__ format; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (void const*) ;

int FUNC_1(struct regmap *VAR_1, const void *VAR_2,
   unsigned int *VAR_3)
{
 if (!VAR_1->format.parse_val)
  return -VAR_0;

 *VAR_3 = VAR_1->format.parse_val(VAR_2);

 return 0;
}
