
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddrs {struct ifaddrs* ifa_next; } ;



__attribute__((used)) static void FUNC_0(struct ifaddrs **VAR_0, struct ifaddrs *VAR_1)
{
    if(!*VAR_0)
    {
        *VAR_0 = VAR_1;
    }
    else
    {
        struct ifaddrs *VAR_2 = *VAR_0;
        while(VAR_2->ifa_next)
        {
            VAR_2 = VAR_2->ifa_next;
        }
        VAR_2->ifa_next = VAR_1;
    }
}
