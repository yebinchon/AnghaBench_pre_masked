
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_2__ {size_t total; int const** parents; } ;
typedef TYPE_1__ commit_parent_oids ;



__attribute__((used)) static const git_oid *FUNC_0(size_t VAR_0, void *VAR_1)
{
 commit_parent_oids *VAR_2 = VAR_1;
 return (VAR_0 < VAR_2->total) ? VAR_2->parents[VAR_0] : ((void*)0);
}
