
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int msg_controllen; int * msg_control; } ;
struct cmsghdr {int dummy; } ;
typedef int magic ;
typedef int cmh ;
typedef void* caddr_t ;
typedef int ancbuf ;


 struct cmsghdr* FUNC_0 (struct msghdr*) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (int *,void*,char*) ;
 int FUNC_3 (char const*,char const*,int,char*) ;
 int FUNC_4 (struct msghdr*,struct cmsghdr*,char*,int) ;
 int FUNC_5 (void*,int ,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,char const*,int) ;

void
FUNC_8()
{
 struct msghdr VAR_0;
 struct cmsghdr VAR_1;
 struct cmsghdr *VAR_2;
 char VAR_3[1024];
 char VAR_4[] = "MAGIC";

 FUNC_6("test_cmsg_firsthdr", sizeof("test_cmsg_firsthdr"));


 FUNC_4(&VAR_0, ((void*)0), ((void*)0), 0);
 VAR_0.msg_control = ((void*)0);
 VAR_2 = FUNC_0(&VAR_0);
 FUNC_2(((void*)0), (caddr_t)VAR_2,
     "msg_control is NULL\0");


 FUNC_4(&VAR_0, ((void*)0), ((void*)0), 0);
 VAR_0.msg_control = (caddr_t)&VAR_1;
 VAR_0.msg_controllen = sizeof(VAR_1) - 1;
 VAR_2 = FUNC_0(&VAR_0);
 FUNC_2(((void*)0), (caddr_t)VAR_2,
     "msg_controllen < sizeof cmsghdr\0");


 FUNC_4(&VAR_0, ((void*)0), ((void*)0), 0);
 VAR_0.msg_control = (caddr_t)&VAR_1;
 VAR_0.msg_controllen = 0;
 VAR_2 = FUNC_0(&VAR_0);
 FUNC_2(((void*)0), (caddr_t)VAR_2,
     "msg_controllen == 0\0");


 FUNC_4(&VAR_0, &VAR_1, VAR_3, sizeof(VAR_3));
 FUNC_5((void *)VAR_3, 0, sizeof(VAR_3));
 VAR_0.msg_control = (caddr_t)VAR_3;
 VAR_0.msg_controllen = sizeof(VAR_3);
 FUNC_7((char *)&VAR_1, (const char *)&VAR_4, sizeof(VAR_4));
 FUNC_1((void *)&VAR_1, (void *)VAR_3, sizeof(VAR_1));
 VAR_2 = FUNC_0(&VAR_0);
 FUNC_3((const char *)&VAR_4, (const char *)VAR_2, sizeof(VAR_4),
     "with payload\0");
}
