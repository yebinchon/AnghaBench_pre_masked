
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int password; int username; int path; int port; int host; int scheme; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;

void FUNC_6(void)
{
 FUNC_3(FUNC_5(&VAR_0, "http://example.com:42"));
 FUNC_2(VAR_0.scheme, "http");
 FUNC_2(VAR_0.host, "example.com");
 FUNC_2(VAR_0.port, "42");
 FUNC_2(VAR_0.path, "/");
 FUNC_1(VAR_0.username, ((void*)0));
 FUNC_1(VAR_0.password, ((void*)0));
 FUNC_0(FUNC_4(&VAR_0), 0);
}
