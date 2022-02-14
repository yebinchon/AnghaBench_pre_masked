
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct mce {scalar_t__ severity; unsigned long addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (struct mce*) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_4, unsigned long VAR_5,
    void *VAR_6)
{
 struct mce *VAR_7 = (struct mce *)VAR_6;
 unsigned long VAR_8;

 if (!VAR_7)
  return VAR_1;

 if (FUNC_0(VAR_7) && (VAR_7->severity == VAR_0)) {
  VAR_8 = VAR_7->addr >> VAR_3;
  if (!FUNC_1(VAR_8, 0))
   FUNC_2(VAR_8);
 }

 return VAR_2;
}
