
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpconf {struct mpconf* multipaths; int pool; } ;
struct mddev {int dummy; } ;


 int FUNC_0 (struct mpconf*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mddev *VAR_0, void *VAR_1)
{
 struct mpconf *VAR_2 = VAR_1;

 FUNC_1(&VAR_2->pool);
 FUNC_0(VAR_2->multipaths);
 FUNC_0(VAR_2);
}
