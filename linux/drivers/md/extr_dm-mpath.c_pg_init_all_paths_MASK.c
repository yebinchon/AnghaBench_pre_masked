
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath {int lock; } ;


 int FUNC_0 (struct multipath*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct multipath *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;

 FUNC_1(&VAR_0->lock, VAR_2);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->lock, VAR_2);

 return VAR_1;
}
