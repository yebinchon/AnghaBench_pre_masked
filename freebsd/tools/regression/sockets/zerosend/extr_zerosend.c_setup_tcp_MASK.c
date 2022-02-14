
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;
typedef int fd_set ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int,int *,int *) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int) ;
 int FUNC_5 (struct sockaddr_in*,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,struct sockaddr*,int) ;
 int FUNC_8 (int,char*,char const*,...) ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (int,char*,char const*) ;
 scalar_t__ FUNC_10 (int,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_1__) ;
 scalar_t__ FUNC_14 (int,int) ;
 int FUNC_15 (int,int *,int *,int *,struct timeval*) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_18(const char *VAR_9, int *VAR_10, int VAR_11)
{
 fd_set VAR_12, VAR_13;
 struct sockaddr_in VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;
 struct timeval VAR_19;

 FUNC_5(&VAR_14, sizeof(VAR_14));
 VAR_14.sin_len = sizeof(VAR_14);
 VAR_14.sin_family = VAR_0;
 VAR_14.sin_addr.s_addr = FUNC_11(VAR_3);




 VAR_14.sin_port = FUNC_12(VAR_11);
 VAR_16 = FUNC_17(VAR_5, VAR_7, 0);
 if (VAR_16 < 0)
  FUNC_8(1, "%s: setup_tcp: socket", VAR_9);
 if (FUNC_4(VAR_16, (struct sockaddr *)&VAR_14, sizeof(VAR_14)) < 0)
  FUNC_8(1, "%s: bind(%s, %d)", VAR_9, FUNC_13(VAR_14.sin_addr),
      VAR_6);
 if (FUNC_14(VAR_16, -1) < 0)
  FUNC_8(1, "%s: listen", VAR_9);





 VAR_17 = FUNC_17(VAR_5, VAR_7, 0);
 if (VAR_17 < 0)
  FUNC_8(1, "%s: setup_tcp: socket", VAR_9);
 if (FUNC_10(VAR_17, VAR_2, VAR_4) < 0)
  FUNC_8(1, "%s: setup_tcp: fcntl(O_NONBLOCK)", VAR_9);
 if (FUNC_7(VAR_17, (struct sockaddr *)&VAR_14, sizeof(VAR_14)) < 0 &&
     VAR_8 != VAR_1)
  FUNC_8(1, "%s: setup_tcp: connect(%s, %d)", VAR_9,
      FUNC_13(VAR_14.sin_addr), VAR_6);





 if (FUNC_16(1) != 0)
  FUNC_8(1, "%s: sleep(1)", VAR_9);
 VAR_18 = FUNC_3(VAR_16, ((void*)0), ((void*)0));
 if (VAR_18 < 0)
  FUNC_8(1, "%s: accept", VAR_9);
 if (FUNC_16(1) != 0)
  FUNC_8(1, "%s: sleep(1)", VAR_9);

 FUNC_2(&VAR_12);
 FUNC_1(VAR_17, &VAR_12);
 FUNC_2(&VAR_13);
 FUNC_1(VAR_17, &VAR_13);
 VAR_19.tv_sec = 1;
 VAR_19.tv_usec = 0;
 VAR_15 = FUNC_15(VAR_17 + 1, ((void*)0), &VAR_12, &VAR_13, &VAR_19);
 if (VAR_15 < 0)
  FUNC_8(1, "%s: setup_tcp: select", VAR_9);
 if (FUNC_0(VAR_17, &VAR_13))
  FUNC_9(1, "%s: setup_tcp: select: exception", VAR_9);
 if (!FUNC_0(VAR_17, &VAR_12))
  FUNC_9(1, "%s: setup_tcp: select: not writable", VAR_9);

 FUNC_6(VAR_16);
 VAR_10[0] = VAR_17;
 VAR_10[1] = VAR_18;
}
