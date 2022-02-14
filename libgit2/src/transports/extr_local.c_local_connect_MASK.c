
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connected; int direction; int flags; int * repo; int url; int refs; } ;
typedef TYPE_1__ transport_local ;
typedef int git_transport ;
typedef int git_repository ;
typedef void git_proxy_options ;
typedef void const* git_cred_acquire_cb ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int **,char const*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(
 git_transport *VAR_1,
 const char *VAR_2,
 git_cred_acquire_cb VAR_3,
 void *VAR_4,
 const git_proxy_options *VAR_5,
 int VAR_6, int VAR_7)
{
 git_repository *VAR_8;
 int VAR_9;
 transport_local *VAR_10 = (transport_local *) VAR_1;
 const char *VAR_11;
 git_buf VAR_12 = VAR_0;

 FUNC_1(VAR_3);
 FUNC_1(VAR_4);
 FUNC_1(VAR_5);

 if (VAR_10->connected)
  return 0;

 FUNC_2(&VAR_10->refs);

 VAR_10->url = FUNC_3(VAR_2);
 FUNC_0(VAR_10->url);
 VAR_10->direction = VAR_6;
 VAR_10->flags = VAR_7;


 if ((VAR_9 = FUNC_6(&VAR_12, VAR_2)) < 0) {
  FUNC_5(&VAR_12);
  return VAR_9;
 }
 VAR_11 = FUNC_4(&VAR_12);

 VAR_9 = FUNC_7(&VAR_8, VAR_11);

 FUNC_5(&VAR_12);

 if (VAR_9 < 0)
  return -1;

 VAR_10->repo = VAR_8;

 if (FUNC_8(VAR_10) < 0)
  return -1;

 VAR_10->connected = 1;

 return 0;
}
