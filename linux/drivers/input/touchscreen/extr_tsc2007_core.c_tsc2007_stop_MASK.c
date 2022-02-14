
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsc2007 {int stopped; int irq; int wait; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct tsc2007 *VAR_0)
{
 VAR_0->stopped = 1;
 FUNC_1();
 FUNC_2(&VAR_0->wait);

 FUNC_0(VAR_0->irq);
}
