
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned int offset; struct host1x_bo* bo; } ;
struct host1x_reloc {scalar_t__ shift; TYPE_1__ cmdbuf; } ;
struct host1x_bo {int dummy; } ;



__attribute__((used)) static bool FUNC_0(struct host1x_reloc *VAR_0, struct host1x_bo *VAR_1,
   unsigned int VAR_2)
{
 VAR_2 *= sizeof(u32);

 if (VAR_0->cmdbuf.bo != VAR_1 || VAR_0->cmdbuf.offset != VAR_2)
  return 0;


 if (VAR_0->shift)
  return 0;

 return 1;
}
