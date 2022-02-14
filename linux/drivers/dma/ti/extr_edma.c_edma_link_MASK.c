
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edma_cc {unsigned int num_slots; int dev; } ;


 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct edma_cc*,int ,unsigned int,int,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct edma_cc *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 if (FUNC_5(FUNC_1(VAR_2) != FUNC_1(VAR_3)))
  FUNC_3(VAR_1->dev, "Ignoring eDMA instance for linking\n");

 VAR_2 = FUNC_0(VAR_2);
 VAR_3 = FUNC_0(VAR_3);
 if (VAR_2 >= VAR_1->num_slots || VAR_3 >= VAR_1->num_slots)
  return;

 FUNC_4(VAR_1, VAR_0, VAR_2, 0xffff0000,
     FUNC_2(VAR_3));
}
