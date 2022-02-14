
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int bypass_threshold; } ;
struct mddev {int lock; struct r5conf* private; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct mddev *VAR_0, char *VAR_1)
{
 struct r5conf *VAR_2;
 int VAR_3 = 0;
 FUNC_0(&VAR_0->lock);
 VAR_2 = VAR_0->private;
 if (VAR_2)
  VAR_3 = FUNC_2(VAR_1, "%d\n", VAR_2->bypass_threshold);
 FUNC_1(&VAR_0->lock);
 return VAR_3;
}
