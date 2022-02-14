
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ patchid; } ;
struct adreno_gpu {TYPE_1__ rev; } ;


 scalar_t__ FUNC_0 (struct adreno_gpu*) ;

__attribute__((used)) static inline bool FUNC_1(struct adreno_gpu *VAR_0)
{
 return FUNC_0(VAR_0) && (VAR_0->rev.patchid > 0);
}
