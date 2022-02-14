
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_host {int lock; } ;
typedef int irqreturn_t ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*) ;
 unsigned int FUNC_2 (struct ata_host*) ;
 unsigned int FUNC_3 (struct ata_host*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_0, void *VAR_1)
{
 struct ata_host *VAR_2 = VAR_1;
 unsigned int VAR_3 = 0;

 FUNC_1("ENTER\n");

 FUNC_4(&VAR_2->lock);
 VAR_3 = FUNC_3(VAR_2) | FUNC_2(VAR_2);
 FUNC_5(&VAR_2->lock);

 FUNC_1("EXIT\n");

 return FUNC_0(VAR_3);
}
