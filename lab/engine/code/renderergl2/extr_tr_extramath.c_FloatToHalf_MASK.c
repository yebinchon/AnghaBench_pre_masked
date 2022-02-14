
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fraction; int sign; scalar_t__ exponent; } ;
union f32_u {float f; TYPE_1__ pack; } ;
struct TYPE_4__ {int fraction; int sign; int exponent; } ;
union f16_u {int ui; TYPE_2__ pack; } ;
typedef int uint16_t ;


 int FUNC_0 (int,int ,int) ;

uint16_t FUNC_1(float VAR_0)
{
 union f32_u VAR_1;
 union f16_u VAR_2;

 VAR_1 = VAR_0;

 VAR_2 = FUNC_0((int)(VAR_1) - 112, 0, 31);
 VAR_2 = VAR_1 >> 13;
 VAR_2 = VAR_1;

 return VAR_2;
}
