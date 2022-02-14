
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* int_entry_ptr ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;
struct TYPE_3__ {int int_flags; int src_bus_irq; int src_bus_id; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static enum intr_polarity
FUNC_2(int_entry_ptr VAR_3)
{

 switch (VAR_3->int_flags & VAR_0) {
 case 128:
  return (FUNC_0(VAR_3->src_bus_id,
       VAR_3->src_bus_irq));
 case 130:
  return (VAR_1);
 case 129:
  return (VAR_2);
 default:
  FUNC_1("Bogus interrupt flags");
 }
}
