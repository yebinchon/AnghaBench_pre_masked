
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

 FUNC_1(VAR_0, "usage: iscsictl -A -p portal -t target "
     "[-u user -s secret] [-w timeout] [-e on | off]\n");
 FUNC_1(VAR_0, "       iscsictl -A -d discovery-host "
     "[-u user -s secret] [-e on | off]\n");
 FUNC_1(VAR_0, "       iscsictl -A -a [-c path]\n");
 FUNC_1(VAR_0, "       iscsictl -A -n nickname [-c path]\n");
 FUNC_1(VAR_0, "       iscsictl -M -i session-id [-p portal] "
     "[-t target] [-u user] [-s secret] [-e on | off]\n");
 FUNC_1(VAR_0, "       iscsictl -M -i session-id -n nickname "
     "[-c path]\n");
 FUNC_1(VAR_0, "       iscsictl -R [-p portal] [-t target]\n");
 FUNC_1(VAR_0, "       iscsictl -R -a\n");
 FUNC_1(VAR_0, "       iscsictl -R -n nickname [-c path]\n");
 FUNC_1(VAR_0, "       iscsictl -L [-v] [-w timeout]\n");
 FUNC_0(1);
}
