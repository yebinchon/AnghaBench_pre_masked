
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct nlmsghdr {int dummy; } ;
typedef int pid_t ;
struct TYPE_5__ {struct TYPE_5__* m_next; } ;
typedef TYPE_1__ NetlinkList ;


 int FUNC_0 (TYPE_1__*) ;
 struct nlmsghdr* FUNC_1 (int,int ,int*,int*) ;
 scalar_t__ FUNC_2 (int,int) ;
 TYPE_1__* FUNC_3 (struct nlmsghdr*,int) ;

__attribute__((used)) static NetlinkList *FUNC_4(int VAR_0, int VAR_1, pid_t VAR_2)
{
    int VAR_3;
    int VAR_4;
    NetlinkList *VAR_5;
    NetlinkList *VAR_6;

    if(FUNC_2(VAR_0, VAR_1) < 0)
    {
        return ((void*)0);
    }

    VAR_5 = ((void*)0);
    VAR_6 = ((void*)0);

    VAR_4 = 0;
    while(!VAR_4)
    {
        NetlinkList *VAR_7;

        struct nlmsghdr *VAR_8 = FUNC_1(VAR_0, VAR_2, &VAR_3, &VAR_4);

        if(!VAR_8)
        {
            FUNC_0(VAR_5);
            return ((void*)0);
        }

        VAR_7 = FUNC_3(VAR_8, VAR_3);
        if (!VAR_7)
        {
            FUNC_0(VAR_5);
            return ((void*)0);
        }
        if(!VAR_5)
        {
            VAR_5 = VAR_7;
        }
        else
        {
            VAR_6->m_next = VAR_7;
        }
        VAR_6 = VAR_7;
    }
    return VAR_5;
}
