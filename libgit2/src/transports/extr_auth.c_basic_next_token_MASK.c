
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int git_http_auth_context ;
struct TYPE_13__ {int password; int username; } ;
typedef TYPE_1__ git_cred_userpass_plaintext ;
struct TYPE_14__ {scalar_t__ credtype; } ;
typedef TYPE_2__ git_cred ;
struct TYPE_15__ {scalar_t__ size; int ptr; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,char*,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(
 git_buf *VAR_3,
 git_http_auth_context *VAR_4,
 git_cred *VAR_5)
{
 git_cred_userpass_plaintext *VAR_6;
 git_buf VAR_7 = VAR_0;
 int VAR_8 = -1;

 FUNC_0(VAR_4);

 if (VAR_5->credtype != VAR_1) {
  FUNC_8(VAR_2, "invalid credential type for basic auth");
  goto on_error;
 }

 VAR_6 = (git_cred_userpass_plaintext *)VAR_5;

 FUNC_6(&VAR_7, "%s:%s", VAR_6->username, VAR_6->password);

 if (FUNC_5(&VAR_7) ||
  FUNC_7(VAR_3, "Basic ") < 0 ||
  FUNC_4(VAR_3, FUNC_2(&VAR_7), VAR_7.size) < 0)
  goto on_error;

 VAR_8 = 0;

on_error:
 if (VAR_7.size)
  FUNC_1(VAR_7.ptr, VAR_7.size);

 FUNC_3(&VAR_7);
 return VAR_8;
}
