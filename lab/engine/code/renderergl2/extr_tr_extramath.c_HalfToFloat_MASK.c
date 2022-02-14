
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int exponent; int fraction; int sign; } ;
union f32_u {float f; TYPE_1__ pack; } ;
struct TYPE_4__ {int fraction; int sign; scalar_t__ exponent; } ;
union f16_u {TYPE_2__ pack; int ui; } ;
typedef int uint16_t ;



float FUNC_0(uint16_t VAR_0)
{
 union f32_u VAR_1;
 union f16_u VAR_2;

 VAR_2 = VAR_0;

 VAR_1 = (int)(VAR_2) + 112;
 VAR_1 = VAR_2 << 13;
 VAR_1 = VAR_2;

 return VAR_1;
}
