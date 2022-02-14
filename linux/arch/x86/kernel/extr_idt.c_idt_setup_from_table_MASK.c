
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idt_data {int vector; } ;
typedef int gate_desc ;


 int FUNC_0 (int *,struct idt_data const*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int *) ;

__attribute__((used)) static void
FUNC_3(gate_desc *VAR_1, const struct idt_data *VAR_2, int VAR_3, bool VAR_4)
{
 gate_desc VAR_5;

 for (; VAR_3 > 0; VAR_2++, VAR_3--) {
  FUNC_0(&VAR_5, VAR_2);
  FUNC_2(VAR_1, VAR_2->vector, &VAR_5);
  if (VAR_4)
   FUNC_1(VAR_2->vector, VAR_0);
 }
}
