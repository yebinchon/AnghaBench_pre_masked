
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_pte {void* v; void* r; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,unsigned long,unsigned long,...) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 unsigned long FUNC_5 (unsigned long,int,int) ;
 unsigned long FUNC_6 (unsigned long,int,int,int) ;
 unsigned long FUNC_7 (unsigned long,unsigned long) ;
 unsigned long FUNC_8 (unsigned long) ;
 struct hash_pte* VAR_5 ;
 int FUNC_9 (struct hash_pte*) ;
 int FUNC_10 (struct hash_pte*) ;

__attribute__((used)) static long FUNC_11(unsigned long VAR_6, unsigned long VAR_7,
   unsigned long VAR_8, unsigned long VAR_9,
   unsigned long VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 struct hash_pte *VAR_14 = VAR_5 + VAR_6;
 unsigned long VAR_15, VAR_16;
 int VAR_17;

 if (!(VAR_10 & VAR_2)) {
  FUNC_0("    insert(group=%lx, vpn=%016lx, pa=%016lx,"
   " rflags=%lx, vflags=%lx, psize=%d)\n",
   VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
 }

 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
  if (! (FUNC_1(VAR_14->v) & VAR_4)) {

   FUNC_9(VAR_14);
   if (! (FUNC_1(VAR_14->v) & VAR_4))
    break;
   FUNC_10(VAR_14);
  }

  VAR_14++;
 }

 if (VAR_17 == VAR_1)
  return -1;

 VAR_15 = FUNC_6(VAR_7, VAR_11, VAR_12, VAR_13) | VAR_10 | VAR_4;
 VAR_16 = FUNC_5(VAR_8, VAR_11, VAR_12) | VAR_9;

 if (!(VAR_10 & VAR_2)) {
  FUNC_0(" i=%x hpte_v=%016lx, hpte_r=%016lx\n",
   VAR_17, VAR_15, VAR_16);
 }

 if (FUNC_2(VAR_0)) {
  VAR_16 = FUNC_7(VAR_15, VAR_16);
  VAR_15 = FUNC_8(VAR_15);
 }

 VAR_14->r = FUNC_3(VAR_16);

 FUNC_4();




 VAR_14->v = FUNC_3(VAR_15);

 __asm__ __volatile__ ("ptesync" : : : "memory");

 return VAR_17 | (!!(VAR_10 & VAR_3) << 3);
}
