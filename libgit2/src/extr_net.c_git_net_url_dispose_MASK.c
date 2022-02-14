
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * password; int * username; int * path; int * port; int * host; int * scheme; } ;
typedef TYPE_1__ git_net_url ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(git_net_url *VAR_0)
{
 if (VAR_0->username)
  FUNC_1(VAR_0->username, FUNC_2(VAR_0->username));

 if (VAR_0->password)
  FUNC_1(VAR_0->password, FUNC_2(VAR_0->password));

 FUNC_0(VAR_0->scheme); VAR_0->scheme = ((void*)0);
 FUNC_0(VAR_0->host); VAR_0->host = ((void*)0);
 FUNC_0(VAR_0->port); VAR_0->port = ((void*)0);
 FUNC_0(VAR_0->path); VAR_0->path = ((void*)0);
 FUNC_0(VAR_0->username); VAR_0->username = ((void*)0);
 FUNC_0(VAR_0->password); VAR_0->password = ((void*)0);
}
