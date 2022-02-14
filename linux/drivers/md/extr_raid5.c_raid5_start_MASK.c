
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int log; } ;
struct mddev {struct r5conf* private; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mddev *VAR_0)
{
 struct r5conf *VAR_1 = VAR_0->private;

 return FUNC_0(VAR_1->log);
}
