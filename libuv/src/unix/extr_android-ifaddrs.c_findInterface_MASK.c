
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddrs {struct ifaddrs* ifa_next; } ;


 int FUNC_0 (int*,char*,int) ;

__attribute__((used)) static struct ifaddrs *FUNC_1(int VAR_0, struct ifaddrs **VAR_1, int VAR_2)
{
    int VAR_3 = 0;
    struct ifaddrs *VAR_4 = *VAR_1;
    while(VAR_4 && VAR_3 < VAR_2)
    {
        char *VAR_5 = ((char *)VAR_4) + sizeof(struct ifaddrs);
        int VAR_6;
        FUNC_0(&VAR_6, VAR_5, sizeof(int));
        if(VAR_6 == VAR_0)
        {
            return VAR_4;
        }

        VAR_4 = VAR_4->ifa_next;
        ++VAR_3;
    }
    return ((void*)0);
}
