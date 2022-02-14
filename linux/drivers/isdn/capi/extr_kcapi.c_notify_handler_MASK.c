
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u32 ;
struct notifier_block {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (long) ;
 int FUNC_1 (long) ;

__attribute__((used)) static int
FUNC_2(struct notifier_block *VAR_1, unsigned long VAR_2, void *VAR_3)
{
 u32 VAR_4 = (long)VAR_3;

 switch (VAR_2) {
 case 128:
  FUNC_1(VAR_4);
  break;
 case 129:
  FUNC_0(VAR_4);
  break;
 }
 return VAR_0;
}
