
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct device {int * type; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_2,
           unsigned long VAR_3, void *VAR_4)
{
 struct device *VAR_5 = VAR_4;

 switch (VAR_3) {
 case 129:
  if (VAR_5->type == &VAR_0)
   FUNC_0(FUNC_2(VAR_5));
  break;

 case 128:
  if (VAR_5->type == &VAR_1)
   FUNC_1(FUNC_3(VAR_5));
  break;
 }

 return 0;
}
