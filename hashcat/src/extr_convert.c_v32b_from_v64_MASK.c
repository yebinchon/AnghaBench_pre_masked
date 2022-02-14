
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b; } ;
struct TYPE_4__ {TYPE_1__ v32; int v64; } ;
typedef TYPE_2__ vconv64_t ;
typedef int u64 ;
typedef int u32 ;



u32 FUNC_0 (const u64 VAR_0)
{
  vconv64_t VAR_1;

  VAR_1.v64 = VAR_0;

  return VAR_1.v32.b;
}
