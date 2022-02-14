
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_2__ {int parent_ids; } ;
typedef TYPE_1__ git_commit ;


 int const* FUNC_0 (int ,size_t) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static const git_oid *FUNC_2(size_t VAR_0, void *VAR_1)
{
 const git_commit *VAR_2 = VAR_1;
 if (VAR_0 >= FUNC_1(VAR_2->parent_ids))
  return ((void*)0);
 return FUNC_0(VAR_2->parent_ids, VAR_0);
}
