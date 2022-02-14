
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenisrc {int xi_pirq; } ;
struct physdev_eoi {int irq; } ;
struct intsrc {int dummy; } ;


 int FUNC_0 (int ,struct physdev_eoi*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct intsrc *VAR_2)
{
 struct xenisrc *VAR_3;
 int VAR_4;

 VAR_3 = (struct xenisrc *)VAR_2;

 if (FUNC_2(VAR_3->xi_pirq, VAR_1)) {
  struct physdev_eoi VAR_5 = { .irq = VAR_3->xi_pirq };

  VAR_4 = FUNC_0(VAR_0, &VAR_5);
  if (VAR_4 != 0)
   FUNC_1("Unable to EOI PIRQ#%d: %d\n",
       VAR_3->xi_pirq, VAR_4);
 }
}
