
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adreno_rev {int patchid; int minor; int major; int core; } ;
struct TYPE_2__ {int patchid; int minor; int major; int core; } ;
struct adreno_info {TYPE_1__ rev; } ;


 int FUNC_0 (struct adreno_info*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct adreno_info* VAR_0 ;

const struct adreno_info *FUNC_2(struct adreno_rev VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  const struct adreno_info *VAR_3 = &VAR_0[VAR_2];
  if (FUNC_1(VAR_3->rev.core, VAR_1.core) &&
    FUNC_1(VAR_3->rev.major, VAR_1.major) &&
    FUNC_1(VAR_3->rev.minor, VAR_1.minor) &&
    FUNC_1(VAR_3->rev.patchid, VAR_1.patchid))
   return VAR_3;
 }

 return ((void*)0);
}
