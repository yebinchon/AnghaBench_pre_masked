
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* path; } ;
typedef TYPE_2__ git_index_entry ;
struct TYPE_7__ {scalar_t__ (* pfxcomp ) (char*,char*) ;} ;
struct TYPE_9__ {TYPE_1__ base; } ;
typedef TYPE_3__ git_diff_generated ;


 size_t FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static bool FUNC_2(
 git_diff_generated *VAR_0,
 const git_index_entry *VAR_1,
 const git_index_entry *VAR_2)
{
 size_t VAR_3;

 if (!VAR_1 || VAR_0->base.pfxcomp(VAR_1->path, VAR_2->path) != 0)
  return 0;

 VAR_3 = FUNC_0(VAR_2->path);

 return (VAR_2->path[VAR_3 - 1] == '/' ||
   VAR_1->path[VAR_3] == '\0' ||
   VAR_1->path[VAR_3] == '/');
}
