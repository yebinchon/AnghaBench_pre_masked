
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ top; } ;
struct tpg_data {int buf_height; TYPE_1__ compose; } ;





__attribute__((used)) static unsigned FUNC_0(const struct tpg_data *VAR_0, unsigned VAR_1,
        unsigned VAR_2)
{
 VAR_1 += VAR_0->compose.top;
 switch (VAR_2) {
 case 128:
  if (VAR_1 & 1)
   return VAR_0->buf_height / 2 + VAR_1 / 2;
  return VAR_1 / 2;
 case 129:
  if (VAR_1 & 1)
   return VAR_1 / 2;
  return VAR_0->buf_height / 2 + VAR_1 / 2;
 default:
  return VAR_1;
 }
}
