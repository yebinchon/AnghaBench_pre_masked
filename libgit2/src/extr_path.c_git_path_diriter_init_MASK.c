
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ size; int ptr; } ;
struct TYPE_7__ {scalar_t__ parent_len; unsigned int flags; TYPE_3__ path; int ic; int * dir; } ;
typedef TYPE_1__ git_path_diriter ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,char const*) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int * FUNC_7 (int ) ;

int FUNC_8(
 git_path_diriter *VAR_3,
 const char *VAR_4,
 unsigned int VAR_5)
{
 FUNC_0(VAR_3 && VAR_4);

 FUNC_6(VAR_3, 0, sizeof(git_path_diriter));

 if (FUNC_2(&VAR_3->path, VAR_4) < 0)
  return -1;

 FUNC_5(&VAR_3->path);

 if (VAR_3->path.size == 0) {
  FUNC_3(VAR_0, "could not open directory '%s'", VAR_4);
  return -1;
 }

 if ((VAR_3->dir = FUNC_7(VAR_3->path.ptr)) == ((void*)0)) {
  FUNC_1(&VAR_3->path);

  FUNC_3(VAR_1, "failed to open directory '%s'", VAR_4);
  return -1;
 }






 VAR_3->parent_len = VAR_3->path.size;
 VAR_3->flags = VAR_5;

 return 0;
}
