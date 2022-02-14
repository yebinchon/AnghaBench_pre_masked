
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigevent {int sigev_signo; int sigev_notify; } ;
struct mq_attr {int mq_maxmsg; int mq_msgsize; } ;
typedef scalar_t__ mqd_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,struct mq_attr*) ;
 int FUNC_4 (scalar_t__,struct sigevent*) ;
 scalar_t__ FUNC_5 (int ,int,int,struct mq_attr*) ;
 int FUNC_6 (int ) ;

int
FUNC_7(void)
{
 struct mq_attr VAR_8, VAR_9;
 struct sigevent VAR_10;
 mqd_t VAR_11;
 int VAR_12;

 FUNC_0("mqueuefs", 0);

 VAR_8.mq_maxmsg = 2;
 VAR_8.mq_msgsize = 100;
 VAR_11 = FUNC_5(VAR_1, VAR_2 | VAR_4 | VAR_3, 0666, &VAR_8);
 if (VAR_11 == (mqd_t)-1)
  FUNC_1(1, "mq_open");
 VAR_12 = FUNC_6(VAR_1);
 if (VAR_12)
  FUNC_1(1, "mq_unlink");
 VAR_12 = FUNC_3(VAR_11, &VAR_9);
 if (VAR_12)
  FUNC_1(1, "mq_getattr");
 if (VAR_8.mq_maxmsg != VAR_9)
  FUNC_1(1, "mq_maxmsg changed");
 if (VAR_8.mq_msgsize != VAR_9)
  FUNC_1(1, "mq_msgsize changed");

 VAR_10.sigev_notify = VAR_5;
 VAR_10.sigev_signo = VAR_6;
 VAR_12 = FUNC_4(VAR_11, &VAR_10);
 if (VAR_12)
  FUNC_1(1, "mq_notify");
 VAR_12 = FUNC_4(VAR_11, &VAR_10);
 if (VAR_12 == 0)
  FUNC_1(1, "mq_notify 2");
 else if (VAR_7 != VAR_0)
  FUNC_1(1, "mq_notify 3");
 VAR_12 = FUNC_4(VAR_11, ((void*)0));
 if (VAR_12)
  FUNC_1(1, "mq_notify 4");
 VAR_12 = FUNC_2(VAR_11);
 if (VAR_12)
  FUNC_1(1, "mq_close");
 return (0);
}
