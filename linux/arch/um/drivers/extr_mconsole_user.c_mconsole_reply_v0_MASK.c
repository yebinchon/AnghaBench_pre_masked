
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int msg_iovlen; scalar_t__ msg_flags; scalar_t__ msg_controllen; int * msg_control; struct iovec* msg_iov; int msg_namelen; int * msg_name; } ;
struct mc_request {int originating_fd; int originlen; int origin; } ;
struct iovec {char* iov_base; int iov_len; } ;


 int FUNC_0 (int ,struct msghdr*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct mc_request *VAR_0, char *VAR_1)
{
 struct iovec VAR_2;
 struct msghdr VAR_3;

 VAR_2.iov_base = VAR_1;
 VAR_2.iov_len = FUNC_1(VAR_1);

 VAR_3.msg_name = &(VAR_0->origin);
 VAR_3.msg_namelen = VAR_0->originlen;
 VAR_3.msg_iov = &VAR_2;
 VAR_3.msg_iovlen = 1;
 VAR_3.msg_control = ((void*)0);
 VAR_3.msg_controllen = 0;
 VAR_3.msg_flags = 0;

 return FUNC_0(VAR_0->originating_fd, &VAR_3, 0);
}
