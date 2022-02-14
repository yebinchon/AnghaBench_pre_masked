
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr {int dummy; } ;
struct mld_hdr {int mld_type; int mld_addr; } ;
typedef int ntop_buf ;
typedef int from ;
typedef int buf ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 char* FUNC_1 (int ,int *,char*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,int *,int,int ,struct sockaddr*,int*) ;
 int VAR_1 ;

void
FUNC_4(int VAR_2)
{
 int VAR_3;
 struct mld_hdr *VAR_4;
 u_char VAR_5[1024];
 struct sockaddr_in6 VAR_6;
 int VAR_7 = sizeof(VAR_6);
 char VAR_8[256];

 if ((VAR_3 = FUNC_3(VAR_2, VAR_5, sizeof(VAR_5), 0,
     (struct sockaddr *)&VAR_6,
     &VAR_7)) < 0)
  return;

 if (VAR_3 < sizeof(struct mld_hdr)) {
  FUNC_2("too short!\n");
  return;
 }

 VAR_4 = (struct mld_hdr *)VAR_5;

 FUNC_2("from %s, ", FUNC_1(VAR_0, &VAR_6.sin6_addr,
          VAR_8, sizeof(VAR_8)));

 switch (VAR_4->mld_type) {
 case 130:
  FUNC_2("type=Multicast Listener Query, ");
  break;
 case 128:
  FUNC_2("type=Multicast Listener Report, ");
  break;
 case 129:
  FUNC_2("type=Multicast Listener Done, ");
  break;
 }
 FUNC_2("addr=%s\n", FUNC_1(VAR_0, &VAR_4->mld_addr,
        VAR_8, sizeof(VAR_8)));

 FUNC_0(VAR_1);
}
