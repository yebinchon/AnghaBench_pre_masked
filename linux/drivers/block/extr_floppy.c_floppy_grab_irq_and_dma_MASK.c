
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int address; int dor; } ;


 int FUNC_0 (char*,int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_10 (int ) ;
 int VAR_8 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_13(void)
{
 if (FUNC_2(&VAR_9) > 1)
  return 0;





 FUNC_10(VAR_7);

 if (FUNC_7()) {
  FUNC_0("Unable to grab IRQ%d for the floppy driver\n",
         VAR_3);
  FUNC_1(&VAR_9);
  return -1;
 }
 if (FUNC_6()) {
  FUNC_0("Unable to grab DMA%d for the floppy driver\n",
         VAR_2);
  if (VAR_5 & 2)
   VAR_10 = VAR_5 = 1;
  if (!(VAR_5 & 1)) {
   FUNC_4();
   FUNC_1(&VAR_9);
   return -1;
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  if (VAR_0->address != -1) {
   if (FUNC_9(VAR_6))
    goto cleanup;
  }
 }
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  if (VAR_0->address != -1) {
   FUNC_11(1);
   FUNC_5(VAR_0->dor, VAR_1);
  }
 }
 VAR_6 = 0;
 FUNC_12(0, ~0, 8);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  if (VAR_0->address != -1)
   FUNC_5(VAR_0->dor, VAR_1);




 VAR_6 = 0;
 VAR_8 = 1;
 return 0;
cleanup:
 FUNC_4();
 FUNC_3();
 while (--VAR_6 >= 0)
  FUNC_8(VAR_6);
 FUNC_1(&VAR_9);
 return -1;
}
