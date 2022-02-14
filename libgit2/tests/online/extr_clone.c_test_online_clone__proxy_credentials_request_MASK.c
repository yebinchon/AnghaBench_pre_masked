
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
struct TYPE_9__ {int certificate_check; int credentials; int url; int type; } ;
struct TYPE_10__ {TYPE_1__ proxy_opts; } ;
struct TYPE_12__ {TYPE_2__ fetch_opts; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_4__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,char*,char*,int ) ;
 int FUNC_5 (int *,char*,char*,TYPE_4__*) ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_6(void)
{
 git_buf VAR_11 = VAR_0;

 if (!VAR_2 || !VAR_5 || !VAR_3)
  FUNC_2();

 FUNC_1(FUNC_4(&VAR_11, "%s://%s/",
  VAR_4 ? VAR_4 : "http",
  VAR_2));

 VAR_7.fetch_opts.proxy_opts.type = VAR_1;
 VAR_7.fetch_opts.proxy_opts.url = VAR_11.ptr;
 VAR_7.fetch_opts.proxy_opts.credentials = VAR_10;
 VAR_7.fetch_opts.proxy_opts.certificate_check = VAR_9;
 VAR_6 = 0;
 FUNC_1(FUNC_5(&VAR_8, "http://github.com/libgit2/TestGitRepository", "./foo", &VAR_7));
 FUNC_0(VAR_6);

 FUNC_3(&VAR_11);
}
