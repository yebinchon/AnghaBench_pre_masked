
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioapic_intsrc {scalar_t__ io_vector; } ;
struct intsrc {int dummy; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct intsrc *VAR_0)
{
 struct ioapic_intsrc *VAR_1 = (struct ioapic_intsrc *)VAR_0;

 if (VAR_1->io_vector == 0)
  return 0;
 return (FUNC_0(VAR_1->io_vector));
}
