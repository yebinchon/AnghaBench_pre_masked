
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int password; int username; int path; int port; int host; int scheme; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;

void FUNC_5(void)
{
 FUNC_2(FUNC_4(&VAR_0,
    "https://user:pass%2fis%40bad@hostname.com:1234/"));
 FUNC_1(VAR_0.scheme, "https");
 FUNC_1(VAR_0.host, "hostname.com");
 FUNC_1(VAR_0.port, "1234");
 FUNC_1(VAR_0.path, "/");
 FUNC_1(VAR_0.username, "user");
 FUNC_1(VAR_0.password, "pass/is@bad");
 FUNC_0(FUNC_3(&VAR_0), 0);
}
