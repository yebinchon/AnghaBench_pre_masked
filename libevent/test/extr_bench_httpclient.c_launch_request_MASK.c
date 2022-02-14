
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct request_info {int started; scalar_t__ n_read; } ;
struct bufferevent {int dummy; } ;
typedef int sin ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bufferevent*,int) ;
 int FUNC_2 (struct bufferevent*) ;
 int FUNC_3 (struct bufferevent*,int ,int *,int ,struct request_info*) ;
 struct bufferevent* FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,struct sockaddr*,int) ;
 int VAR_6 ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 struct request_info* FUNC_14 (int) ;
 int FUNC_15 (struct sockaddr_in*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_16 (int ,int ,int ) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_17(void)
{
 evutil_socket_t VAR_10;
 struct sockaddr_in VAR_11;
 struct bufferevent *VAR_12;

 struct request_info *VAR_13;

 FUNC_15(&VAR_11, 0, sizeof(VAR_11));

 ++VAR_9;

 VAR_11.sin_family = VAR_0;
 VAR_11.sin_addr.s_addr = FUNC_12(0x7f000001);
 VAR_11.sin_port = FUNC_13(8080);
 if ((VAR_10 = FUNC_16(VAR_0, VAR_4, 0)) < 0)
  return -1;
 if (FUNC_9(VAR_10) < 0) {
  FUNC_7(VAR_10);
  return -1;
 }
 FUNC_11(VAR_10);
 if (FUNC_5(VAR_10, (struct sockaddr*)&VAR_11, sizeof(VAR_11)) < 0) {
  int VAR_14 = FUNC_10(VAR_10);
  if (! FUNC_0(VAR_14)) {
   FUNC_7(VAR_10);
   return -1;
  }
 }

 VAR_13 = FUNC_14(sizeof(*VAR_13));
 VAR_13->n_read = 0;
 FUNC_8(&VAR_13->started, ((void*)0));

 VAR_12 = FUNC_4(VAR_5, VAR_10, VAR_1);

 FUNC_3(VAR_12, VAR_7, ((void*)0), VAR_6, VAR_13);
 FUNC_1(VAR_12, VAR_2|VAR_3);

 FUNC_6(FUNC_2(VAR_12),
     "GET %s HTTP/1.0\r\n\r\n", VAR_8);

 return 0;
}
