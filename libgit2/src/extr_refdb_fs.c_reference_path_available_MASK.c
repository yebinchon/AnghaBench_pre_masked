
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct packref {int name; } ;
struct TYPE_4__ {int refcache; } ;
typedef TYPE_1__ refdb_fs_backend ;
typedef int git_refdb_backend ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*) ;
 struct packref* FUNC_1 (int ,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char const*,char const*,int ) ;
 int FUNC_7 (int*,int *,char const*) ;

__attribute__((used)) static int FUNC_8(
 refdb_fs_backend *VAR_2,
 const char *VAR_3,
 const char* VAR_4,
 int VAR_5)
{
 size_t VAR_6;
 int VAR_7;

 if ((VAR_7 = FUNC_5(VAR_2)) < 0)
  return VAR_7;

 if (!VAR_5) {
  int VAR_8;

  if ((VAR_7 = FUNC_7(
   &VAR_8, (git_refdb_backend *)VAR_2, VAR_3)) < 0) {
   return VAR_7;
  }

  if (VAR_8) {
   FUNC_0(VAR_1,
    "failed to write reference '%s': a reference with "
    "that name already exists.", VAR_3);
   return VAR_0;
  }
 }

 FUNC_3(VAR_2->refcache);

 for (VAR_6 = 0; VAR_6 < FUNC_2(VAR_2->refcache); ++VAR_6) {
  struct packref *VAR_9 = FUNC_1(VAR_2->refcache, VAR_6);

  if (VAR_9 && !FUNC_6(VAR_4, VAR_3, VAR_9->name)) {
   FUNC_4(VAR_2->refcache);
   FUNC_0(VAR_1,
    "path to reference '%s' collides with existing one", VAR_3);
   return -1;
  }
 }

 FUNC_4(VAR_2->refcache);
 return 0;
}
