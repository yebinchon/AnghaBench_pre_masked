
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigevent {int dummy; } ;
struct rusage {scalar_t__ ru_msgsnd; scalar_t__ ru_msgrcv; } ;
struct aio_context {int dummy; } ;
typedef int completion ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct aio_context*,int,int,int ) ;
 int FUNC_4 (struct aio_context*,int ,struct sigevent*) ;
 int FUNC_5 (struct aio_context*,int ,struct sigevent*) ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (int ,struct rusage*) ;
 int FUNC_8 (int ,int ,int ,int*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(completion VAR_5, struct sigevent *VAR_6)
{
 struct aio_context VAR_7;
 struct rusage VAR_8, VAR_9;
 int VAR_10[2];

 FUNC_1("aio");

 FUNC_2(FUNC_8(VAR_0, VAR_2, 0, VAR_10) != -1,
     "socketpair failed: %s", FUNC_9(VAR_4));

 FUNC_3(&VAR_7, VAR_10[0], VAR_10[1], VAR_3);
 FUNC_2(FUNC_7(VAR_1, &VAR_8) != -1,
     "getrusage failed: %s", FUNC_9(VAR_4));
 FUNC_5(&VAR_7, VAR_5, VAR_6);
 FUNC_2(FUNC_7(VAR_1, &VAR_9) != -1,
     "getrusage failed: %s", FUNC_9(VAR_4));
 FUNC_0(VAR_9.ru_msgsnd == VAR_8.ru_msgsnd + 1);
 VAR_8 = VAR_9;
 FUNC_4(&VAR_7, VAR_5, VAR_6);
 FUNC_2(FUNC_7(VAR_1, &VAR_9) != -1,
     "getrusage failed: %s", FUNC_9(VAR_4));
 FUNC_0(VAR_9.ru_msgrcv == VAR_8.ru_msgrcv + 1);

 FUNC_6(VAR_10[0]);
 FUNC_6(VAR_10[1]);
}
