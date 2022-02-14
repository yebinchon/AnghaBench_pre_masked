
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int jobids; int users; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct request *VAR_0)
{
 static struct request VAR_1;

 *VAR_0 = VAR_1;
 FUNC_0(&VAR_0->users);
 FUNC_0(&VAR_0->jobids);
}
