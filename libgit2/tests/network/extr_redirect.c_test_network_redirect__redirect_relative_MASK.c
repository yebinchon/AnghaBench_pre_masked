
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int password; int username; int path; int port; int host; int scheme; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*,int *) ;

void FUNC_5(void)
{
 FUNC_2(FUNC_3(&VAR_0, "http://foo.com/bar/baz/biff"));
 FUNC_2(FUNC_4(&VAR_0,
    "/zap/baz/biff?bam", ((void*)0)));
 FUNC_1(VAR_0.scheme, "http");
 FUNC_1(VAR_0.host, "foo.com");
 FUNC_1(VAR_0.port, "80");
 FUNC_1(VAR_0.path, "/zap/baz/biff?bam");
 FUNC_0(VAR_0.username, ((void*)0));
 FUNC_0(VAR_0.password, ((void*)0));
}
