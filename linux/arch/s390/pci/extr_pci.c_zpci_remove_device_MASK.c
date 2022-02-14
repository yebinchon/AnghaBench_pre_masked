
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int bus; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct zpci_dev *VAR_0)
{
 if (!VAR_0->bus)
  return;

 FUNC_1(VAR_0->bus);
 FUNC_0(VAR_0->bus);
}
