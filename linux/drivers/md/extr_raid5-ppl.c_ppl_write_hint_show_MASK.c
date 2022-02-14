
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {struct ppl_conf* log_private; } ;
struct ppl_conf {int write_hint; } ;
struct mddev {int lock; struct r5conf* private; } ;
typedef size_t ssize_t ;


 scalar_t__ FUNC_0 (struct r5conf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct mddev *VAR_0, char *VAR_1)
{
 size_t VAR_2 = 0;
 struct r5conf *VAR_3;
 struct ppl_conf *VAR_4 = ((void*)0);

 FUNC_1(&VAR_0->lock);
 VAR_3 = VAR_0->private;
 if (VAR_3 && FUNC_0(VAR_3))
  VAR_4 = VAR_3->log_private;
 VAR_2 = FUNC_3(VAR_1, "%d\n", VAR_4 ? VAR_4->write_hint : 0);
 FUNC_2(&VAR_0->lock);

 return VAR_2;
}
