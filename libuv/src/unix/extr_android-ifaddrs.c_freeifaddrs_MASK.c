
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddrs {struct ifaddrs* ifa_next; } ;


 int FUNC_0 (struct ifaddrs*) ;

void FUNC_1(struct ifaddrs *VAR_0)
{
    struct ifaddrs *VAR_1;
    while(VAR_0)
    {
        VAR_1 = VAR_0;
        VAR_0 = VAR_0->ifa_next;
        FUNC_0(VAR_1);
    }
}
