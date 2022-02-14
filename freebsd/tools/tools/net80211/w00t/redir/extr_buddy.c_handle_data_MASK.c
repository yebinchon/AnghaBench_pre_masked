
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int msg_iovlen; struct iovec* msg_iov; } ;
struct ip {scalar_t__ ip_p; int ip_hl; unsigned short ip_id; } ;
struct iovec {char* iov_base; int iov_len; } ;
typedef int mh ;
typedef int iov ;


 int FUNC_0 (char*,int) ;
 unsigned short FUNC_1 (int) ;
 int FUNC_2 (char*,unsigned short*,int) ;
 int FUNC_3 (struct msghdr*,int ,int) ;
 int FUNC_4 (unsigned short) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (int,struct msghdr*,int ) ;

int FUNC_7(int VAR_0, char *VAR_1, int VAR_2)
{
 struct ip *VAR_3;
 unsigned short VAR_4;
 char VAR_5[4];
 struct iovec VAR_6[2];
 struct msghdr VAR_7;

 VAR_3 = (struct ip*) VAR_1;




 if (VAR_3->ip_p != 0)
  return 0;

 if (VAR_3->ip_hl != 5)
  return 0;


 VAR_4 = VAR_3->ip_id;
 VAR_2 -= 20;
 VAR_1 += 20;
 FUNC_5("Got %d bytes [%d]\n", VAR_2, FUNC_4(VAR_4));





 FUNC_2(VAR_5, &VAR_4, 2);
 VAR_4 = FUNC_1(VAR_2);
 FUNC_2(&VAR_5[2], &VAR_4, 2);

 VAR_6[0].iov_base = VAR_5;
 VAR_6[0].iov_len = 4;
 VAR_6[1].iov_base = VAR_1;
 VAR_6[1].iov_len = VAR_2;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.msg_iov = VAR_6;
 VAR_7.msg_iovlen = sizeof(VAR_6)/sizeof(struct iovec);


 if (FUNC_6(VAR_0, &VAR_7, 0) != (4 + VAR_2))
  return -1;
 return 0;
}
