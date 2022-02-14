
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int refcache; } ;
typedef TYPE_1__ refdb_fs_backend ;


 int VAR_0 ;
 int FUNC_0 (size_t*,int ,char const*) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(refdb_fs_backend *VAR_1, const char *VAR_2)
{
 size_t VAR_3;
 int VAR_4, VAR_5 = 0;

 if ((VAR_4 = FUNC_4(VAR_1)) < 0)
  goto cleanup;

 if ((VAR_4 = FUNC_2(VAR_1->refcache)) < 0)
  goto cleanup;


 VAR_4 = FUNC_0(&VAR_3, VAR_1->refcache, VAR_2);
 if (VAR_4 == 0) {
  VAR_4 = FUNC_1(VAR_1->refcache, VAR_3);
  VAR_5 = 1;
 }
 if (VAR_4 == VAR_0)
  VAR_4 = 0;

 FUNC_3(VAR_1->refcache);

 if (VAR_5)
  VAR_4 = FUNC_5(VAR_1);

cleanup:
 return VAR_4;
}
