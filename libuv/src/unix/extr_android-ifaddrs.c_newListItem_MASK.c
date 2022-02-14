
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct nlmsghdr {int dummy; } ;
struct TYPE_4__ {unsigned int m_size; struct nlmsghdr* m_data; int * m_next; } ;
typedef TYPE_1__ NetlinkList ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static NetlinkList *FUNC_1(struct nlmsghdr *VAR_0, unsigned int VAR_1)
{
    NetlinkList *VAR_2 = FUNC_0(sizeof(NetlinkList));
    if (VAR_2 == ((void*)0))
    {
        return ((void*)0);
    }

    VAR_2->m_next = ((void*)0);
    VAR_2->m_data = VAR_0;
    VAR_2->m_size = VAR_1;
    return VAR_2;
}
