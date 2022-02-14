
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int qd_idx; int disks; scalar_t__ ddf_layout; } ;



__attribute__((used)) static inline int FUNC_0(struct stripe_head *VAR_0)
{
 if (VAR_0->ddf_layout)

  return 0;

 if (VAR_0->qd_idx == VAR_0->disks - 1)
  return 0;
 else
  return VAR_0->qd_idx + 1;
}
