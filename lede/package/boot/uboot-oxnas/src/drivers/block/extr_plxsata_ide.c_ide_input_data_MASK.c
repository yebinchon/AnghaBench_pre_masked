
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,int) ;

void FUNC_7(int VAR_2, ulong *VAR_3, int VAR_4)
{

 if (!VAR_1[VAR_2]) {
  return;
 }


 FUNC_0(VAR_2);


 FUNC_1(VAR_3, VAR_4 << 2);


 if (FUNC_6(VAR_2, 30)) {
  FUNC_2("Timed out of wait for SATA device %d to have BUSY clear\n",
   VAR_2);
 }
 if (!FUNC_5(VAR_2)) {
  FUNC_2("oxnas_sata_output_data() Wait for ATA no-error timed-out\n");
 }


 if (!FUNC_4(VAR_2)) {
  FUNC_2("Timed out of wait for DMA channel for SATA device %d to have in-progress clear\n",
   VAR_2);
 }

 if (VAR_4 == VAR_0)
  FUNC_3(VAR_2, VAR_3 + VAR_4 - 2);
}
