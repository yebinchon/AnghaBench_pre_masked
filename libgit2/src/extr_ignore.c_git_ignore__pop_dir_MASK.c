
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {char* ptr; size_t size; } ;
struct TYPE_14__ {scalar_t__ length; } ;
struct TYPE_12__ {int dir_root; scalar_t__ depth; TYPE_7__ dir; TYPE_4__ ign_path; } ;
typedef TYPE_2__ git_ignores ;
struct TYPE_13__ {TYPE_1__* entry; } ;
typedef TYPE_3__ git_attr_file ;
struct TYPE_11__ {char* path; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_7__*,char) ;
 int FUNC_2 (TYPE_7__*) ;
 TYPE_3__* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (char const*,char const*,size_t) ;
 char* FUNC_6 (char const*,char) ;

int FUNC_7(git_ignores *VAR_0)
{
 if (VAR_0->ign_path.length > 0) {
  git_attr_file *VAR_1 = FUNC_3(&VAR_0->ign_path);
  const char *VAR_2 = VAR_1->entry->path, *VAR_3;
  if ((VAR_3 = FUNC_6(VAR_2, '/')) != ((void*)0)) {
   size_t VAR_4 = (VAR_3 - VAR_2) + 1;
   const char *VAR_5 = VAR_0->dir.ptr + VAR_0->dir_root;
   size_t VAR_6 = VAR_0->dir.size - VAR_0->dir_root;

   if (VAR_6 == VAR_4 && !FUNC_5(VAR_5, VAR_2, VAR_4)) {
    FUNC_4(&VAR_0->ign_path);
    FUNC_0(VAR_1);
   }
  }
 }

 if (--VAR_0->depth > 0) {
  FUNC_1(&VAR_0->dir, '/');
  FUNC_2(&VAR_0->dir);
 }

 return 0;
}
