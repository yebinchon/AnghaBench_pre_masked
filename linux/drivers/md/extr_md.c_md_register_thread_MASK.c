
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int dummy; } ;
struct md_thread {void (* run ) (struct md_thread*) ;int tsk; struct mddev* mddev; int timeout; int wqueue; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct md_thread*) ;
 int FUNC_3 (int ,struct md_thread*,char*,int ,char const*) ;
 struct md_thread* FUNC_4 (int,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct mddev*) ;

struct md_thread *FUNC_6(void (*VAR_3) (struct md_thread *),
  struct mddev *VAR_4, const char *VAR_5)
{
 struct md_thread *VAR_6;

 VAR_6 = FUNC_4(sizeof(struct md_thread), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 FUNC_1(&VAR_6->wqueue);

 VAR_6->run = VAR_3;
 VAR_6->mddev = VAR_4;
 VAR_6->timeout = VAR_1;
 VAR_6->tsk = FUNC_3(VAR_2, VAR_6,
      "%s_%s",
      FUNC_5(VAR_6->mddev),
      VAR_5);
 if (FUNC_0(VAR_6->tsk)) {
  FUNC_2(VAR_6);
  return ((void*)0);
 }
 return VAR_6;
}
