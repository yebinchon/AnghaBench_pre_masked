
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; } ;
struct ctx {int flags; scalar_t__ watchdog; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int,int,void (*) (int,void*),struct ctx*) ;

__attribute__((used)) static void
FUNC_5(int VAR_6, void *VAR_7)
{
 struct ctx *VAR_8 = VAR_7;
 pid_t VAR_9;
 struct timespec VAR_10;

 FUNC_4(&VAR_5, 1, 5, FUNC_5, VAR_8);

 if (!(VAR_8->flags & VAR_1))
  return;

 FUNC_0(VAR_0, &VAR_10);

 if (VAR_10.tv_sec >= VAR_8->watchdog) {



  VAR_8->flags |= VAR_2;
  VAR_9 = FUNC_2();
  FUNC_3(VAR_9, VAR_3);
 }
}
