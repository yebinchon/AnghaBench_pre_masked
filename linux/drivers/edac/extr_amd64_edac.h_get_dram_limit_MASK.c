
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
struct amd64_pvt {TYPE_2__* ranges; } ;
struct TYPE_6__ {int x86; } ;
struct TYPE_4__ {scalar_t__ hi; scalar_t__ lo; } ;
struct TYPE_5__ {TYPE_1__ lim; } ;


 TYPE_3__ VAR_0 ;

__attribute__((used)) static inline u64 FUNC_0(struct amd64_pvt *VAR_1, u8 VAR_2)
{
 u64 VAR_3 = (((u64)VAR_1->ranges[VAR_2].lim.lo & 0xffff0000) << 8) | 0x00ffffff;

 if (VAR_0.x86 == 0xf)
  return VAR_3;

 return (((u64)VAR_1->ranges[VAR_2].lim.hi & 0x000000ff) << 40) | VAR_3;
}
