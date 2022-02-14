
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct event_base {int dummy; } ;
struct event {int dummy; } ;
struct cond_wait {int lock; int cond; } ;
typedef int THREAD_FN ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (struct event_base*,int *) ;
 scalar_t__ FUNC_10 (struct event*,struct timeval*) ;
 int FUNC_11 (struct event*,struct event_base*,int ,struct cond_wait*) ;
 int FUNC_12 (struct timeval*) ;
 int VAR_4 ;

__attribute__((used)) static THREAD_FN
FUNC_13(void *VAR_5)
{
 struct cond_wait VAR_6;
 struct event_base *VAR_7 = VAR_5;
 struct event VAR_8;
 int VAR_9 = 0;

 FUNC_3(VAR_6.lock, 0);
 FUNC_2(VAR_6.cond);
 FUNC_8(VAR_6.lock);
 FUNC_8(VAR_6.cond);

 FUNC_11(&VAR_8, VAR_7, VAR_4, &VAR_6);
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  struct timeval VAR_10;
  FUNC_12(&VAR_10);
  VAR_10.tv_sec = 0;
  VAR_10.tv_usec = 3000;

  FUNC_0(VAR_6.lock, 0);


  FUNC_8(FUNC_10(&VAR_8, &VAR_10) == 0);

  FUNC_8(FUNC_4(VAR_6.cond, VAR_6.lock) == 0);
  FUNC_1(VAR_6.lock, 0);

  FUNC_0(VAR_3, 0);
  ++VAR_2;
  FUNC_1(VAR_3, 0);
 }


 FUNC_0(VAR_3, 0);
 if (VAR_2 >= VAR_1 * VAR_0)
  FUNC_9(VAR_7, ((void*)0));
 FUNC_1(VAR_3, 0);

 FUNC_6(VAR_6.lock, 0);
 FUNC_5(VAR_6.cond);

 FUNC_7();
}
