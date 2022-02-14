
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* resolve_url ) (int *,char const*,int,int ) ;int payload; } ;
typedef TYPE_1__ git_remote_callbacks ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int *,char const*,int,int ) ;

__attribute__((used)) static int FUNC_5(git_buf *VAR_1, const char *VAR_2, int VAR_3, const git_remote_callbacks *VAR_4)
{
 int VAR_5;

 if (VAR_4 && VAR_4->resolve_url) {
  FUNC_0(VAR_1);
  VAR_5 = VAR_4->resolve_url(VAR_1, VAR_2, VAR_3, VAR_4->payload);
  if (VAR_5 != VAR_0) {
   FUNC_3(VAR_5, "git_resolve_url_cb");
   FUNC_1(VAR_1);
   return VAR_5;
  }
 }

 return FUNC_2(VAR_1, VAR_2);
}
