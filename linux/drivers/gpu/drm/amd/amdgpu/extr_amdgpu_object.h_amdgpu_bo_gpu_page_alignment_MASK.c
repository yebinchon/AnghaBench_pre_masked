
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int page_alignment; } ;
struct TYPE_4__ {TYPE_1__ mem; } ;
struct amdgpu_bo {TYPE_2__ tbo; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline unsigned FUNC_0(struct amdgpu_bo *VAR_2)
{
 return (VAR_2->tbo.mem.page_alignment << VAR_1) / VAR_0;
}
