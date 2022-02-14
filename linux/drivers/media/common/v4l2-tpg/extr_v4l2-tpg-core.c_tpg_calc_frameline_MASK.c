
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int top; } ;
struct tpg_data {TYPE_1__ crop; } ;





__attribute__((used)) static unsigned FUNC_0(const struct tpg_data *VAR_0, unsigned VAR_1,
        unsigned VAR_2)
{
 switch (VAR_2) {
 case 128:
  return VAR_0->crop.top + VAR_1 * 2;
 case 129:
  return VAR_0->crop.top + VAR_1 * 2 + 1;
 default:
  return VAR_1 + VAR_0->crop.top;
 }
}
