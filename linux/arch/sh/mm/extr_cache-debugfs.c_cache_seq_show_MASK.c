
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct cache_info {unsigned int sets; unsigned int entry_shift; unsigned int ways; scalar_t__ way_incr; scalar_t__ linesz; } ;
struct TYPE_2__ {struct cache_info icache; struct cache_info dcache; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_7, void *VAR_8)
{
 unsigned int VAR_9 = (unsigned int)VAR_7->private;
 struct cache_info *VAR_10;
 unsigned int VAR_11, VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14 = 0;





 FUNC_2();

 VAR_13 = FUNC_0(VAR_5);
 if ((VAR_13 & VAR_3) == 0) {
  FUNC_1();

  FUNC_3(VAR_7, "disabled\n");
  return 0;
 }

 if (VAR_9 == VAR_2) {
  VAR_14 = VAR_1;
  VAR_10 = &VAR_6.dcache;
 } else {
  VAR_14 = VAR_0;
  VAR_10 = &VAR_6.icache;
 }

 VAR_11 = VAR_10->sets;





 if ((VAR_13 & VAR_4) && VAR_9 == VAR_2)
  VAR_11 >>= 1;

 VAR_11 <<= VAR_10->entry_shift;

 for (VAR_12 = 0; VAR_12 < VAR_10->ways; VAR_12++) {
  unsigned long VAR_15;
  unsigned int VAR_16;

  FUNC_3(VAR_7, "-----------------------------------------\n");
  FUNC_3(VAR_7, "Way %d\n", VAR_12);
  FUNC_3(VAR_7, "-----------------------------------------\n");

  for (VAR_15 = VAR_14, VAR_16 = 0;
       VAR_15 < VAR_14 + VAR_11;
       VAR_15 += VAR_10->linesz, VAR_16++) {
   unsigned long VAR_17 = FUNC_0(VAR_15);


   if ((VAR_17 & 1) == 0)
    continue;


   FUNC_3(VAR_7, "%3d: %c 0x%lx\n",
       VAR_16, VAR_17 & 2 ? 'U' : ' ',
       VAR_17 & 0x1ffffc00);
  }

  VAR_14 += VAR_10->way_incr;
 }

 FUNC_1();

 return 0;
}
