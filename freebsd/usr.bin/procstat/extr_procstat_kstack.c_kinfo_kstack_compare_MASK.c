
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_kstack {int kkst_tid; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{

        return ((const struct kinfo_kstack *)VAR_0)->kkst_tid -
            ((const struct kinfo_kstack *)VAR_1)->kkst_tid;
}
