
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ref_name; scalar_t__ is_merge; } ;
typedef TYPE_1__ git_fetchhead_ref ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const git_fetchhead_ref *VAR_2 = (const git_fetchhead_ref *)VAR_0;
 const git_fetchhead_ref *VAR_3 = (const git_fetchhead_ref *)VAR_1;

 if (VAR_2->is_merge && !VAR_3->is_merge)
  return -1;
 if (VAR_3->is_merge && !VAR_2->is_merge)
  return 1;

 if (VAR_2->ref_name && VAR_3->ref_name)
  return FUNC_0(VAR_2->ref_name, VAR_3->ref_name);
 else if (VAR_2->ref_name)
  return -1;
 else if (VAR_3->ref_name)
  return 1;

 return 0;
}
