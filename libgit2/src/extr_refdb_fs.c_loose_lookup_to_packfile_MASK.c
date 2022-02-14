
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct packref {int flags; int oid; } ;
struct TYPE_3__ {int refcache; int gitpath; } ;
typedef TYPE_1__ refdb_fs_backend ;
typedef int git_oid ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (void**,int ,char const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,char const*,int *) ;
 scalar_t__ FUNC_9 (int *,int ,char const*) ;

__attribute__((used)) static int FUNC_10(refdb_fs_backend *VAR_3, const char *VAR_4)
{
 int VAR_5 = 0;
 git_buf VAR_6 = VAR_0;
 struct packref *VAR_7 = ((void*)0);
 git_oid VAR_8;




 if (FUNC_9(&VAR_6, VAR_3->gitpath, VAR_4) < 0) {
  FUNC_3();
  goto done;
 }


 if (!FUNC_0(FUNC_1(&VAR_6), VAR_1))
  goto done;


 if ((VAR_5 = FUNC_8(&VAR_8, VAR_4, &VAR_6)) < 0)
  goto done;

 FUNC_6(VAR_3->refcache);

 if (!(VAR_5 = FUNC_5(
   (void **)&VAR_7, VAR_3->refcache, VAR_4))) {

  FUNC_4(&VAR_7->oid, &VAR_8);
  VAR_7->flags = VAR_2;
 }

 FUNC_7(VAR_3->refcache);

done:
 FUNC_2(&VAR_6);
 return VAR_5;
}
