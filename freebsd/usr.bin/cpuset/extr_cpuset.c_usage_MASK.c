
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

 FUNC_1(VAR_0,
     "usage: cpuset [-l cpu-list] [-s setid] cmd ...\n");
 FUNC_1(VAR_0,
     "       cpuset [-l cpu-list] [-s setid] -p pid\n");
 FUNC_1(VAR_0,
     "       cpuset [-c] [-l cpu-list] -C -p pid\n");
 FUNC_1(VAR_0,
     "       cpuset [-c] [-l cpu-list] [-j jailid | -p pid | -t tid | -s setid | -x irq]\n");
 FUNC_1(VAR_0,
     "       cpuset -g [-cir] [-d domain | -j jailid | -p pid | -t tid | -s setid |\n"
     "              -x irq]\n");
 FUNC_0(1);
}
