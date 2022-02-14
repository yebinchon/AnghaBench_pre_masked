
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct packref {int peel; int oid; } ;
struct TYPE_4__ {int refcache; } ;
typedef TYPE_1__ refdb_fs_backend ;
typedef int git_reference ;


 int * FUNC_0 (char const*,int *,int *) ;
 struct packref* FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(
 git_reference **VAR_0,
 refdb_fs_backend *VAR_1,
 const char *VAR_2)
{
 int VAR_3 = 0;
 struct packref *VAR_4;

 if ((VAR_3 = FUNC_4(VAR_1)) < 0)
  return VAR_3;

 if (FUNC_2(VAR_1->refcache) < 0)
  return -1;

 VAR_4 = FUNC_1(VAR_1->refcache, VAR_2);
 if (!VAR_4) {
  VAR_3 = FUNC_5(VAR_2);
 } else {
  *VAR_0 = FUNC_0(VAR_2, &VAR_4->oid, &VAR_4->peel);
  if (!*VAR_0)
   VAR_3 = -1;
 }

 FUNC_3(VAR_1->refcache);

 return VAR_3;
}
