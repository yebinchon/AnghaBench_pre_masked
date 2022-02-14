
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct packref {int flags; int oid; int name; } ;
struct TYPE_13__ {int refcache; } ;
typedef TYPE_1__ refdb_fs_backend ;
typedef int git_oid ;
struct TYPE_14__ {int path_original; } ;
typedef TYPE_2__ git_filebuf ;
struct TYPE_15__ {int ptr; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int *,int *) ;
 struct packref* FUNC_6 (int ,size_t) ;
 size_t FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_9 (int *,int ,TYPE_3__*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(refdb_fs_backend *VAR_7)
{
 size_t VAR_8;
 git_filebuf VAR_9 = VAR_4;
 git_buf VAR_10 = VAR_0;
 int VAR_11 = 0;



 for (VAR_8 = 0; VAR_8 < FUNC_7(VAR_7->refcache); ++VAR_8) {
  struct packref *VAR_12 = FUNC_6(VAR_7->refcache, VAR_8);
  git_oid VAR_13;

  if (!VAR_12 || !(VAR_12->flags & VAR_6))
   continue;

  FUNC_3(&VAR_9);


  VAR_11 = FUNC_8(&VAR_9, VAR_7, VAR_12->name);

  if (VAR_11 == VAR_1 || VAR_11 == VAR_2)
   continue;

  if (VAR_11 < 0) {
   FUNC_1(&VAR_10);
   FUNC_2(VAR_3, "failed to lock loose reference '%s'", VAR_12->name);
   return VAR_11;
  }

  VAR_11 = FUNC_4(&VAR_10, VAR_9.path_original);

  if (VAR_11 == VAR_2)
   continue;


  if (!FUNC_0(VAR_10.ptr, VAR_5))
   continue;


  if (FUNC_9(&VAR_13, VAR_9.path_original, &VAR_10) < 0)
   continue;


  if (!FUNC_5(&VAR_13, &VAR_12->oid))
   continue;







  FUNC_10(VAR_9.path_original);
 }

 FUNC_1(&VAR_10);
 FUNC_3(&VAR_9);
 return 0;
}
