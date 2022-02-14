
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int cred; TYPE_4__* auth_context; } ;
typedef TYPE_1__ http_server ;
struct TYPE_11__ {int ptr; } ;
typedef TYPE_2__ git_buf ;
struct TYPE_12__ {int (* next_token ) (TYPE_2__*,TYPE_4__*,int ) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*,char const*,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_3(
 git_buf *VAR_1,
 http_server *VAR_2,
 const char *VAR_3)
{
 git_buf VAR_4 = VAR_0;
 int VAR_5 = 0;

 if (!VAR_2->auth_context)
  goto done;

 if ((VAR_5 = VAR_2->auth_context->next_token(&VAR_4, VAR_2->auth_context, VAR_2->cred)) < 0)
  goto done;

 VAR_5 = FUNC_1(VAR_1, "%s: %s\r\n", VAR_3, VAR_4.ptr);

done:
 FUNC_0(&VAR_4);
 return VAR_5;
}
