
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* name; int repo; } ;
typedef TYPE_1__ git_remote ;
struct TYPE_8__ {scalar_t__ value; } ;
typedef TYPE_2__ git_config_entry ;
typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (scalar_t__) ;
 char* FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,scalar_t__*) ;
 int FUNC_8 (TYPE_2__**,int *,char*,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 () ;
 int FUNC_11 (int **,int ) ;

int FUNC_12(git_remote *VAR_2, bool VAR_3, char **VAR_4)
{
 git_config *VAR_5;
 git_config_entry *VAR_6 = ((void*)0);
 git_buf VAR_7 = VAR_0;
 int VAR_8;

 FUNC_1(VAR_2);

 if (!VAR_4 || !VAR_2->repo)
  return -1;

 *VAR_4 = ((void*)0);

 if ((VAR_8 = FUNC_11(&VAR_5, VAR_2->repo)) < 0)
  return VAR_8;





 if (VAR_2->name && VAR_2->name[0]) {
  git_buf VAR_9 = VAR_0;

  if ((VAR_8 = FUNC_7(&VAR_9, "remote.%s.proxy", VAR_2->name)) < 0)
   return VAR_8;

  VAR_8 = FUNC_8(&VAR_6, VAR_5, FUNC_4(&VAR_9), 0);
  FUNC_6(&VAR_9);

  if (VAR_8 < 0)
   return VAR_8;

  if (VAR_6 && VAR_6->value) {
   *VAR_4 = FUNC_3(VAR_6->value);
   goto found;
  }
 }


 if ((VAR_8 = FUNC_8(&VAR_6, VAR_5, "http.proxy", 0)) < 0)
  return VAR_8;

 if (VAR_6 && VAR_6->value) {
  *VAR_4 = FUNC_3(VAR_6->value);
  goto found;
 }


 VAR_8 = FUNC_2(&VAR_7, VAR_3 ? "https_proxy" : "http_proxy");


 if (VAR_8 == VAR_1)
  VAR_8 = FUNC_2(&VAR_7, VAR_3 ? "HTTPS_PROXY" : "HTTP_PROXY");

 if (VAR_8 < 0) {
  if (VAR_8 == VAR_1) {
   FUNC_10();
   VAR_8 = 0;
  }

  return VAR_8;
 }

 *VAR_4 = FUNC_5(&VAR_7);

found:
 FUNC_0(*VAR_4);
 FUNC_9(VAR_6);

 return 0;
}
