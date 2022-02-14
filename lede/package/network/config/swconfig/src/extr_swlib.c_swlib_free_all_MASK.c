
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev {struct switch_dev* next; } ;


 int FUNC_0 (struct switch_dev*) ;

void
FUNC_1(struct switch_dev *VAR_0)
{
 struct switch_dev *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
