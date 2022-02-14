
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_nl {int dummy; } ;
struct msghdr {int msg_namelen; int msg_iovlen; int msg_flags; scalar_t__ msg_controllen; int * msg_control; struct iovec* msg_iov; void* msg_name; } ;
struct iovec {size_t iov_len; void* iov_base; } ;
typedef int l_addr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,struct msghdr*,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_3, void *VAR_4, size_t VAR_5)
{
    struct sockaddr_nl VAR_6;
    struct msghdr VAR_7;

    struct iovec VAR_8;
    VAR_8.iov_base = VAR_4;
    VAR_8.iov_len = VAR_5;

    for(;;)
    {
        int VAR_9;
        VAR_7.msg_name = (void *)&VAR_6;
        VAR_7.msg_namelen = sizeof(VAR_6);
        VAR_7.msg_iov = &VAR_8;
        VAR_7.msg_iovlen = 1;
        VAR_7.msg_control = ((void*)0);
        VAR_7.msg_controllen = 0;
        VAR_7.msg_flags = 0;
        VAR_9 = FUNC_0(VAR_3, &VAR_7, 0);

        if(VAR_9 < 0)
        {
            if(VAR_2 == VAR_0)
            {
                continue;
            }
            return -2;
        }


        if(VAR_7.msg_flags & VAR_1)
        {
            return -1;
        }
        return VAR_9;
    }
}
