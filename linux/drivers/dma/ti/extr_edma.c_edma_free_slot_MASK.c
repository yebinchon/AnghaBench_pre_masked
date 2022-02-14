
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edma_cc {unsigned int num_slots; int slot_inuse; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct edma_cc*,unsigned int,int *) ;

__attribute__((used)) static void FUNC_3(struct edma_cc *VAR_1, unsigned VAR_2)
{
 VAR_2 = FUNC_0(VAR_2);
 if (VAR_2 >= VAR_1->num_slots)
  return;

 FUNC_2(VAR_1, VAR_2, &VAR_0);
 FUNC_1(VAR_2, VAR_1->slot_inuse);
}
