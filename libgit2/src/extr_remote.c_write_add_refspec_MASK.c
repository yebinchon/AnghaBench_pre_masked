
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_refspec ;
typedef int git_config ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_7__ {scalar_t__ klass; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*,char const*) ;
 int FUNC_3 (int *,int ,char*,char const*) ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,int) ;
 int FUNC_7 (int **,int *) ;

__attribute__((used)) static int FUNC_8(git_repository *VAR_5, const char *VAR_6, const char *VAR_7, bool VAR_8)
{
 git_config *VAR_9;
 git_buf VAR_10 = VAR_2;
 git_refspec VAR_11;
 const char *VAR_12;
 int VAR_13;

 if ((VAR_13 = FUNC_7(&VAR_9, VAR_5)) < 0)
     return VAR_13;

 VAR_12 = VAR_8 ? VAR_0 : VAR_1;

 if ((VAR_13 = FUNC_0(VAR_6)) < 0)
  return VAR_13;

 if ((VAR_13 = FUNC_6(&VAR_11, VAR_7, VAR_8)) < 0) {
  if (FUNC_4()->klass != VAR_4)
   VAR_13 = VAR_3;

  return VAR_13;
 }

 FUNC_5(&VAR_11);

 if ((VAR_13 = FUNC_2(&VAR_10, VAR_12, VAR_6)) < 0)
  return VAR_13;






 if ((VAR_13 = FUNC_3(VAR_9, VAR_10.ptr, "$^", VAR_7)) < 0) {
  goto cleanup;
 }

cleanup:
 FUNC_1(&VAR_10);
 return 0;
}
