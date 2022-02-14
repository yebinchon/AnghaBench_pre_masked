
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5l_log {int dummy; } ;
struct r5conf {struct r5l_log* log; } ;
struct mddev {struct r5conf* private; } ;
struct md_thread {struct mddev* mddev; } ;


 int FUNC_0 (struct r5conf*) ;
 int FUNC_1 (struct r5l_log*) ;

__attribute__((used)) static void FUNC_2(struct md_thread *VAR_0)
{
 struct mddev *VAR_1 = VAR_0->mddev;
 struct r5conf *VAR_2 = VAR_1->private;
 struct r5l_log *VAR_3 = VAR_2->log;

 if (!VAR_3)
  return;
 FUNC_0(VAR_2);
 FUNC_1(VAR_3);
}
