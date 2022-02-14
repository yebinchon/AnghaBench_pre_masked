
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long owner; int frame; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_6 ;
 int VAR_7 ;

unsigned long FUNC_5(unsigned long VAR_8, unsigned long VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 unsigned long VAR_15, VAR_16;



 if (VAR_8 > 0x1fffffff) {
  if (VAR_6)
   FUNC_1("vdma_alloc: Invalid physical address: %08lx\n",
          VAR_8);
  return VAR_0;
 }
 if (VAR_9 > 0x400000 || VAR_9 == 0) {
  if (VAR_6)
   FUNC_1("vdma_alloc: Invalid size: %08lx\n", VAR_9);
  return VAR_0;
 }

 FUNC_3(&VAR_7, VAR_16);



 VAR_12 = FUNC_0(VAR_8 + VAR_9) - FUNC_0(VAR_8) + 1;
 VAR_10 = 0;
 while (1) {
  while (VAR_5[VAR_10].owner != VAR_3 &&
         VAR_10 < VAR_4) VAR_10++;
  if (VAR_10 + VAR_12 > VAR_4) {
   FUNC_4(&VAR_7, VAR_16);
   return VAR_0;
  }

  VAR_11 = VAR_10 + 1;
  while (VAR_5[VAR_11].owner == VAR_3
         && VAR_11 - VAR_10 < VAR_12)
   VAR_11++;

  if (VAR_11 - VAR_10 == VAR_12)
   break;
  VAR_10 = VAR_11 + 1;
 }




 VAR_15 = (VAR_10 << 12) + (VAR_8 & (VAR_2 - 1));
 VAR_13 = VAR_8 & ~(VAR_2 - 1);

 for (VAR_14 = VAR_10; VAR_14 < VAR_11; VAR_14++) {
  VAR_5[VAR_14].frame = VAR_13;
  VAR_5[VAR_14].owner = VAR_15;
  VAR_13 += VAR_2;
 }




 FUNC_2(VAR_1, 0);

 if (VAR_6 > 1)
  FUNC_1("vdma_alloc: Allocated %d pages starting from %08lx\n",
       VAR_12, VAR_15);

 if (VAR_6 > 2) {
  FUNC_1("LADDR: ");
  for (VAR_14 = VAR_10; VAR_14 < VAR_11; VAR_14++)
   FUNC_1("%08x ", VAR_14 << 12);
  FUNC_1("\nPADDR: ");
  for (VAR_14 = VAR_10; VAR_14 < VAR_11; VAR_14++)
   FUNC_1("%08x ", VAR_5[VAR_14].frame);
  FUNC_1("\nOWNER: ");
  for (VAR_14 = VAR_10; VAR_14 < VAR_11; VAR_14++)
   FUNC_1("%08x ", VAR_5[VAR_14].owner);
  FUNC_1("\n");
 }

 FUNC_4(&VAR_7, VAR_16);

 return VAR_15;
}
