
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_intsrc {int msi_irq; } ;
struct intsrc {int dummy; } ;



__attribute__((used)) static int
FUNC_0(struct intsrc *VAR_0)
{
 struct msi_intsrc *VAR_1 = (struct msi_intsrc *)VAR_0;

 return (VAR_1->msi_irq);
}
