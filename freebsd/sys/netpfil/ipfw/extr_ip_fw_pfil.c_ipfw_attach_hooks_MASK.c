
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;

int
FUNC_4(void)
{
 int VAR_6 = 0;

 FUNC_1(VAR_0);
 FUNC_0("net.inet.ip.fw.enable", &VAR_4);
 if (VAR_4 && (VAR_6 = FUNC_2(VAR_0, 0)) != 0)
                FUNC_3("ipfw_hook() error\n");






 FUNC_1(VAR_2);
 FUNC_0("net.link.ether.ipfw", &VAR_5);
 if (VAR_5 && (VAR_6 = FUNC_2(VAR_2, 0)) != 0)
                FUNC_3("ipfw_link_hook() error\n");

 return (VAR_6);
}
