
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_irq_map {int source; struct ipu_irq_bank* bank; } ;
struct ipu_irq_bank {int status; int ipu; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,int ) ;
 struct ipu_irq_map* FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

bool FUNC_4(unsigned int VAR_1)
{
 struct ipu_irq_map *VAR_2 = FUNC_1(VAR_1);
 struct ipu_irq_bank *VAR_3;
 unsigned long VAR_4;
 bool VAR_5;

 FUNC_2(&VAR_0, VAR_4);
 VAR_3 = VAR_2->bank;
 VAR_5 = VAR_3 && FUNC_0(VAR_3->ipu, VAR_3->status) &
  (1UL << (VAR_2->source & 31));
 FUNC_3(&VAR_0, VAR_4);

 return VAR_5;
}
