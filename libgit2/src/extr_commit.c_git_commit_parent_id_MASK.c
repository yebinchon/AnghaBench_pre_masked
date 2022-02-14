
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_4__ {int parent_ids; } ;
typedef TYPE_1__ git_commit ;


 int FUNC_0 (TYPE_1__ const*) ;
 int const* FUNC_1 (int ,unsigned int) ;

const git_oid *FUNC_2(
 const git_commit *VAR_0, unsigned int VAR_1)
{
 FUNC_0(VAR_0);

 return FUNC_1(VAR_0->parent_ids, VAR_1);
}
