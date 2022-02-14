
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_2, bool VAR_3)
{
 int VAR_4 = VAR_2->hwirq;
 u32 VAR_5, VAR_6;
 u32 VAR_7;

 VAR_5 = VAR_4 / 32;
 VAR_6 = VAR_4 % 32;

 FUNC_4(&VAR_1);
 VAR_7 = FUNC_2(VAR_0, VAR_5);
 VAR_7 = VAR_3 ? FUNC_1(VAR_7, VAR_6) : FUNC_0(VAR_7, VAR_6);
 FUNC_3(VAR_0, VAR_5, VAR_7);
 FUNC_5(&VAR_1);
}
