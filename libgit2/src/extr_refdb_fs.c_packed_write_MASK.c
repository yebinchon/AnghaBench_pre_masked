
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct packref {int dummy; } ;
struct TYPE_5__ {scalar_t__ fsync; int * refcache; } ;
typedef TYPE_1__ refdb_fs_backend ;
typedef int git_sortedcache ;
typedef int git_filebuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct packref*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 struct packref* FUNC_5 (int *,size_t) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*,struct packref*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct packref*,int *) ;

__attribute__((used)) static int FUNC_14(refdb_fs_backend *VAR_4)
{
 git_sortedcache *VAR_5 = VAR_4->refcache;
 git_filebuf VAR_6 = VAR_1;
 int VAR_7, VAR_8 = 0;
 size_t VAR_9;


 if ((VAR_7 = FUNC_9(VAR_5)) < 0)
  return VAR_7;

 if (VAR_4->fsync)
  VAR_8 = VAR_0;


 if ((VAR_7 = FUNC_3(&VAR_6, FUNC_7(VAR_5), VAR_8, VAR_2)) < 0)
  goto fail;




 if ((VAR_7 = FUNC_4(&VAR_6, "%s\n", VAR_3)) < 0)
  goto fail;

 for (VAR_9 = 0; VAR_9 < FUNC_6(VAR_5); ++VAR_9) {
  struct packref *VAR_10 = FUNC_5(VAR_5, VAR_9);
  FUNC_0(VAR_10);

  if ((VAR_7 = FUNC_11(VAR_4, VAR_10)) < 0)
   goto fail;

  if ((VAR_7 = FUNC_13(VAR_10, &VAR_6)) < 0)
   goto fail;
 }



 if ((VAR_7 = FUNC_2(&VAR_6)) < 0)
  goto fail;



 if ((VAR_7 = FUNC_12(VAR_4)) < 0)
  goto fail;

 FUNC_8(VAR_5);
 FUNC_10(VAR_5);


 return 0;

fail:
 FUNC_1(&VAR_6);
 FUNC_10(VAR_5);

 return VAR_7;
}
