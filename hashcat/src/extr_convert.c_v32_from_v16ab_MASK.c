
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b; int a; } ;
struct TYPE_4__ {int v32; TYPE_1__ v16; } ;
typedef TYPE_2__ vconv32_t ;
typedef int u32 ;
typedef int u16 ;



u32 FUNC_0 (const u16 VAR_0, const u16 VAR_1)
{
  vconv32_t VAR_2;

  VAR_2.v16.a = VAR_0;
  VAR_2.v16.b = VAR_1;

  return VAR_2.v32;
}
