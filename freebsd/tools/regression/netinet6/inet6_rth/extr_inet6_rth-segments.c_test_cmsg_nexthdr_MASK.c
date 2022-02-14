
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int msg_controllen; int * msg_control; } ;
struct cmsghdr {int cmsg_len; } ;
typedef int magic ;
typedef int cmh ;
typedef int * caddr_t ;
typedef int ancbuf ;


 struct cmsghdr* FUNC_0 (struct msghdr*) ;
 void* FUNC_1 (int ) ;
 struct cmsghdr* FUNC_2 (struct msghdr*,struct cmsghdr*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*,void*,int) ;
 int FUNC_5 (int *,int *,char*) ;
 int FUNC_6 (char const*,char const*,int,char*) ;
 int FUNC_7 (struct msghdr*,struct cmsghdr*,char*,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,char const*,int) ;

void
FUNC_10()
{
 struct msghdr VAR_0;
 struct cmsghdr VAR_1;
 struct cmsghdr *VAR_2, *VAR_3;
 char VAR_4[10240];
 char VAR_5[] = "MAGIC";

 FUNC_8("test_cmsg_nexthdr", sizeof("test_cmsg_nexthdr"));




 FUNC_7(&VAR_0, &VAR_1, VAR_4, sizeof(VAR_4));
 VAR_0.msg_control = (caddr_t)VAR_4;
 VAR_0.msg_controllen = FUNC_3(0) * 2;
 VAR_1.cmsg_len = FUNC_1(0);





 FUNC_4((void *)&VAR_1, (void *)VAR_4, sizeof(VAR_1));
 FUNC_9((char *)&VAR_1, (const char *)&VAR_5, sizeof(VAR_5));
 FUNC_4((void *)&VAR_1,
     (void *)((caddr_t)VAR_4 + FUNC_3(0)),
     sizeof(VAR_1));
 VAR_2 = FUNC_0(&VAR_0);
 VAR_3 = FUNC_2(&VAR_0, VAR_2);
 FUNC_6((const char *)&VAR_5, (const char *)VAR_3, sizeof(VAR_5),
     "more than one cmsghdr\0");




 FUNC_7(&VAR_0, &VAR_1, VAR_4, sizeof(VAR_4));
 VAR_0.msg_control = (caddr_t)VAR_4;
 VAR_0.msg_controllen = FUNC_3(0);
 VAR_1.cmsg_len = FUNC_1(0);
 FUNC_4((void *)&VAR_1, (void *)VAR_4, sizeof(VAR_1));
 VAR_2 = FUNC_0(&VAR_0);
 VAR_3 = FUNC_2(&VAR_0, VAR_2);
 FUNC_5(((void*)0), (caddr_t)VAR_3, "only one cmsghdr\0");




 FUNC_7(&VAR_0, &VAR_1, VAR_4, sizeof(VAR_4));
 VAR_0.msg_control = (caddr_t)VAR_4;
 VAR_0.msg_controllen = sizeof(VAR_4);
 VAR_1.cmsg_len = sizeof(VAR_4);
 FUNC_4((void *)&VAR_1, (void *)VAR_4, sizeof(VAR_1));
 VAR_2 = FUNC_0(&VAR_0);
 VAR_3 = FUNC_2(&VAR_0, ((void*)0));
 FUNC_5((caddr_t)VAR_2, (caddr_t)VAR_3, "null second argument\0");
}
