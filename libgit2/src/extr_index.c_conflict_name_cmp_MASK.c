
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ours; scalar_t__ ancestor; } ;
typedef TYPE_1__ git_index_name_entry ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const git_index_name_entry *VAR_2 = VAR_0;
 const git_index_name_entry *VAR_3 = VAR_1;

 if (VAR_2->ancestor && !VAR_3->ancestor)
  return 1;

 if (!VAR_2->ancestor && VAR_3->ancestor)
  return -1;

 if (VAR_2->ancestor)
  return FUNC_0(VAR_2->ancestor, VAR_3->ancestor);

 if (!VAR_2->ours || !VAR_3->ours)
  return 0;

 return FUNC_0(VAR_2->ours, VAR_3->ours);
}
