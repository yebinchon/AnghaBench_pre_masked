
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int ignore; int ignore_default; void* name; int fetch_recurse; int fetch_recurse_default; int update; int update_default; void* branch; void* url; void* path; } ;
typedef TYPE_1__ git_submodule ;
typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int VAR_2 ;
 int FUNC_1 (char const**,int *,int *,void*,char*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (void*,char const*) ;

__attribute__((used)) static int FUNC_10(git_submodule *VAR_3, git_config *VAR_4)
{
 git_buf VAR_5 = VAR_0;
 const char *VAR_6;
 int VAR_7, VAR_8 = 0;






 if ((VAR_7 = FUNC_1(&VAR_6, VAR_4, &VAR_5, VAR_3->name, "path")) == 0) {
  VAR_8 = 1;

  if (!FUNC_8(VAR_6)) {




   if (FUNC_9(VAR_3->name, VAR_6) != 0) {
    if (VAR_3->path != VAR_3->name)
     FUNC_2(VAR_3->path);
    VAR_3->path = FUNC_3(VAR_6);
    FUNC_0(VAR_3->path);
   }

  }
 } else if (VAR_7 != VAR_1) {
  goto cleanup;
 }

 if ((VAR_7 = FUNC_1(&VAR_6, VAR_4, &VAR_5, VAR_3->name, "url")) == 0) {

  if (!FUNC_8(VAR_6)) {
   VAR_8 = 1;
   VAR_3->url = FUNC_3(VAR_6);
   FUNC_0(VAR_3->url);
  }
 } else if (VAR_7 != VAR_1) {
  goto cleanup;
 }

 if ((VAR_7 = FUNC_1(&VAR_6, VAR_4, &VAR_5, VAR_3->name, "branch")) == 0) {
  VAR_8 = 1;
  VAR_3->branch = FUNC_3(VAR_6);
  FUNC_0(VAR_3->branch);
 } else if (VAR_7 != VAR_1) {
  goto cleanup;
 }

 if ((VAR_7 = FUNC_1(&VAR_6, VAR_4, &VAR_5, VAR_3->name, "update")) == 0) {
  VAR_8 = 1;
  if ((VAR_7 = FUNC_7(&VAR_3->update, VAR_6)) < 0)
   goto cleanup;
  VAR_3->update_default = VAR_3->update;
 } else if (VAR_7 != VAR_1) {
  goto cleanup;
 }

 if ((VAR_7 = FUNC_1(&VAR_6, VAR_4, &VAR_5, VAR_3->name, "fetchRecurseSubmodules")) == 0) {
  VAR_8 = 1;
  if ((VAR_7 = FUNC_6(&VAR_3->fetch_recurse, VAR_6)) < 0)
   goto cleanup;
  VAR_3->fetch_recurse_default = VAR_3->fetch_recurse;
 } else if (VAR_7 != VAR_1) {
  goto cleanup;
 }

 if ((VAR_7 = FUNC_1(&VAR_6, VAR_4, &VAR_5, VAR_3->name, "ignore")) == 0) {
  VAR_8 = 1;
  if ((VAR_7 = FUNC_5(&VAR_3->ignore, VAR_6)) < 0)
   goto cleanup;
  VAR_3->ignore_default = VAR_3->ignore;
 } else if (VAR_7 != VAR_1) {
  goto cleanup;
 }

 if (VAR_8)
  VAR_3->flags |= VAR_2;

 VAR_7 = 0;

cleanup:
 FUNC_4(&VAR_5);
 return VAR_7;
}
