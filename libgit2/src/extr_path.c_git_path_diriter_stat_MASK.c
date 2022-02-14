
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_4__ {int ptr; } ;
struct TYPE_5__ {TYPE_1__ path; } ;
typedef TYPE_2__ git_path_diriter ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct stat*) ;

int FUNC_2(struct stat *VAR_0, git_path_diriter *VAR_1)
{
 FUNC_0(VAR_0 && VAR_1);

 return FUNC_1(VAR_1->path.ptr, VAR_0);
}
