
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {scalar_t__ mem_type; scalar_t__ start; } ;
struct TYPE_6__ {int resv; } ;
struct TYPE_5__ {scalar_t__ type; int offset; TYPE_1__ mem; TYPE_3__ base; } ;
struct amdgpu_bo {int flags; TYPE_2__ tbo; int pin_count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;

u64 FUNC_3(struct amdgpu_bo *VAR_5)
{
 FUNC_0(VAR_5->tbo.mem.mem_type == VAR_2);
 FUNC_0(!FUNC_2(VAR_5->tbo.base.resv) &&
       !VAR_5->pin_count && VAR_5->tbo.type != VAR_4);
 FUNC_0(VAR_5->tbo.mem.start == VAR_0);
 FUNC_0(VAR_5->tbo.mem.mem_type == VAR_3 &&
       !(VAR_5->flags & VAR_1));

 return FUNC_1(VAR_5->tbo.offset);
}
