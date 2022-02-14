
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int ptr; } ;
typedef TYPE_3__ git_buf ;
struct TYPE_9__ {int certificate_check; int type; } ;
struct TYPE_10__ {TYPE_1__ proxy_opts; } ;
struct TYPE_12__ {TYPE_2__ fetch_opts; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 TYPE_4__ VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,char*,char*,int ,int ,int ) ;
 int FUNC_6 (int *,char*,char*,TYPE_4__*) ;
 int VAR_11 ;

void FUNC_7(void)
{
 git_buf VAR_12 = VAR_0;

 if (!VAR_5 || !VAR_8 || !VAR_6)
  FUNC_3();

 VAR_2 = FUNC_0("HTTP_PROXY");
 VAR_3 = FUNC_0("HTTPS_PROXY");
 VAR_4 = 1;

 VAR_9.fetch_opts.proxy_opts.type = VAR_1;
 VAR_9.fetch_opts.proxy_opts.certificate_check = VAR_11;

 FUNC_1(FUNC_5(&VAR_12, "%s://%s:%s@%s/",
  VAR_7 ? VAR_7 : "http",
  VAR_8, VAR_6, VAR_5));

 FUNC_2("HTTP_PROXY", VAR_12.ptr);
 FUNC_2("HTTPS_PROXY", VAR_12.ptr);

 FUNC_1(FUNC_6(&VAR_10, "http://github.com/libgit2/TestGitRepository", "./foo", &VAR_9));

 FUNC_4(&VAR_12);
}
