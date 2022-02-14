
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1(VAR_0, "usage: rpcinfo [-m | -s] [host]\n");



 FUNC_1(VAR_0, "       rpcinfo -T netid host prognum [versnum]\n");
 FUNC_1(VAR_0, "       rpcinfo -l host prognum versnum\n");




 FUNC_1(VAR_0,
"       rpcinfo -a serv_address -T netid prognum [version]\n");
 FUNC_1(VAR_0, "       rpcinfo -b prognum versnum\n");
 FUNC_1(VAR_0, "       rpcinfo -d [-T netid] prognum versnum\n");
 FUNC_0(1);
}
