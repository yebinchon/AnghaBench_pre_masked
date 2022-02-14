
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_3, unsigned long VAR_4,
         void *VAR_5)
{
 const unsigned long VAR_6 = FUNC_1();

 if (FUNC_0(VAR_0) && VAR_6 > 0) {
  FUNC_2("Kernel Offset: 0x%lx from 0x%lx\n",
    VAR_6, VAR_1);
  FUNC_2("PHYS_OFFSET: 0x%llx\n", VAR_2);
 } else {
  FUNC_2("Kernel Offset: disabled\n");
 }
 return 0;
}
