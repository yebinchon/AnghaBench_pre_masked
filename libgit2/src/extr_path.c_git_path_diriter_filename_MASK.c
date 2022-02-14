
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; char* ptr; } ;
struct TYPE_5__ {int parent_len; TYPE_1__ path; } ;
typedef TYPE_2__ git_path_diriter ;


 int FUNC_0 (int) ;

int FUNC_1(
 const char **VAR_0,
 size_t *VAR_1,
 git_path_diriter *VAR_2)
{
 FUNC_0(VAR_0 && VAR_1 && VAR_2);

 FUNC_0(VAR_2->path.size > VAR_2->parent_len);

 *VAR_0 = &VAR_2->path.ptr[VAR_2->parent_len+1];
 *VAR_1 = VAR_2->path.size - VAR_2->parent_len - 1;
 return 0;
}
