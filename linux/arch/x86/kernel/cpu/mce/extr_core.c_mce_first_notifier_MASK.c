
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct mce {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mce*) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct mce*) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_3, unsigned long VAR_4,
         void *VAR_5)
{
 struct mce *VAR_6 = (struct mce *)VAR_5;

 if (!VAR_6)
  return VAR_0;

 if (FUNC_0(VAR_6))
  return VAR_1;


 FUNC_3(VAR_6);

 FUNC_2(0, &VAR_2);

 FUNC_1();

 return VAR_0;
}
