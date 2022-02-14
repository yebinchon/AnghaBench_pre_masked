
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2()
{
    FUNC_1(VAR_0, "usage: pppctl [-v] [-t n] [-p passwd] "
            "Port|LocalSock [command[;command]...]\n");
    FUNC_1(VAR_0, "              -v tells pppctl to output all"
            " conversation\n");
    FUNC_1(VAR_0, "              -t n specifies a timeout of n"
            " seconds when connecting (default 2)\n");
    FUNC_1(VAR_0, "              -p passwd specifies your password\n");
    FUNC_0(1);
}
