
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nlmsghdr {scalar_t__ nlmsg_type; scalar_t__ nlmsg_seq; scalar_t__ nlmsg_pid; } ;
struct ifaddrs {int dummy; } ;
typedef scalar_t__ pid_t ;
struct TYPE_3__ {unsigned int m_size; struct nlmsghdr* m_data; struct TYPE_3__* m_next; } ;
typedef TYPE_1__ NetlinkList ;


 scalar_t__ VAR_0 ;
 struct nlmsghdr* FUNC_0 (struct nlmsghdr*,unsigned int) ;
 scalar_t__ FUNC_1 (struct nlmsghdr*,unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct nlmsghdr*,struct ifaddrs**,int) ;

__attribute__((used)) static int FUNC_3(int VAR_2, pid_t VAR_3, NetlinkList *VAR_4, struct ifaddrs **VAR_5, int VAR_6)
{
    for(; VAR_4; VAR_4 = VAR_4->m_next)
    {
        unsigned int VAR_7 = VAR_4->m_size;
        struct nlmsghdr *VAR_8;
        for(VAR_8 = VAR_4->m_data; FUNC_1(VAR_8, VAR_7); VAR_8 = FUNC_0(VAR_8, VAR_7))
        {
            if((pid_t)VAR_8->nlmsg_pid != VAR_3 || (int)VAR_8->nlmsg_seq != VAR_2)
            {
                continue;
            }

            if(VAR_8->nlmsg_type == VAR_0)
            {
                break;
            }

            if(VAR_8->nlmsg_type == VAR_1)
            {
                if (FUNC_2(VAR_8, VAR_5, VAR_6) == -1)
                {
                    return -1;
                }
            }
        }
    }
    return 0;
}
