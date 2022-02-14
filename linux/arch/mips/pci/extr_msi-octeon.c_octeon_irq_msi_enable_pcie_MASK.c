
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct irq_data {int irq; } ;


 int VAR_0 ;
 unsigned long long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long long) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_3)
{
 u64 VAR_4;
 unsigned long VAR_5;
 int VAR_6 = VAR_3->irq - VAR_0;
 int VAR_7 = VAR_6 >> 6;
 int VAR_8 = VAR_6 & 0x3f;

 FUNC_2(&VAR_2, VAR_5);
 VAR_4 = FUNC_0(VAR_1[VAR_7]);
 VAR_4 |= 1ull << VAR_8;
 FUNC_1(VAR_1[VAR_7], VAR_4);
 FUNC_0(VAR_1[VAR_7]);
 FUNC_3(&VAR_2, VAR_5);
}
