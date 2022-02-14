
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int rmw_level; } ;
struct mddev {struct r5conf* private; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_1(struct mddev *VAR_0, char *VAR_1)
{
 struct r5conf *VAR_2 = VAR_0->private;
 if (VAR_2)
  return FUNC_0(VAR_1, "%d\n", VAR_2->rmw_level);
 else
  return 0;
}
