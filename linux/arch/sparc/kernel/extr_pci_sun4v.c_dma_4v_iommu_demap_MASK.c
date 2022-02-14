
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (unsigned long,int ,unsigned long) ;
 unsigned long FUNC_5 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long*) ;
 int FUNC_6 (char*,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_1, unsigned long VAR_2,
          dma_addr_t VAR_3, unsigned long VAR_4,
          unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7, VAR_8;
 unsigned long VAR_9;

 FUNC_3(VAR_8);
 do {
  if (VAR_3 <= FUNC_0(32)) {
   VAR_7 = FUNC_4(VAR_2,
          FUNC_1(0, VAR_5),
          VAR_6);
  } else {
   VAR_9 = FUNC_5(VAR_2, VAR_4,
          VAR_5, VAR_6, &VAR_7);
   if (FUNC_7(VAR_9 != VAR_0)) {
    FUNC_6("pci_iotsb_demap() failed with error: %ld\n",
         VAR_9);
   }
  }
  VAR_5 += VAR_7;
  VAR_6 -= VAR_7;
 } while (VAR_6 != 0);
 FUNC_2(VAR_8);
}
