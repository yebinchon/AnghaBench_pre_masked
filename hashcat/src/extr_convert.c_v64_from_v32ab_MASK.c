
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b; int a; } ;
struct TYPE_4__ {int v64; TYPE_1__ v32; } ;
typedef TYPE_2__ vconv64_t ;
typedef int u64 ;
typedef int u32 ;



u64 FUNC_0 (const u32 VAR_0, const u32 VAR_1)
{
  vconv64_t VAR_2;

  VAR_2.v32.a = VAR_0;
  VAR_2.v32.b = VAR_1;

  return VAR_2.v64;
}
