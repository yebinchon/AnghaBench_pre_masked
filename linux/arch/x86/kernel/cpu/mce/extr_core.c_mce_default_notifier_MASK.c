
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct mce {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mce*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_3, unsigned long VAR_4,
    void *VAR_5)
{
 struct mce *VAR_6 = (struct mce *)VAR_5;

 if (!VAR_6)
  return VAR_0;

 if (FUNC_1(&VAR_2) > VAR_1)
  return VAR_0;

 FUNC_0(VAR_6);

 return VAR_0;
}
