
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pic32_sys_pll {unsigned long idiv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,unsigned long,unsigned long,int,int,unsigned long) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static unsigned long FUNC_4(struct pic32_sys_pll *VAR_3,
     unsigned long VAR_4,
     unsigned long VAR_5,
     u32 *VAR_6, u32 *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10 = 1, VAR_11 = 1;
 unsigned long VAR_12, VAR_13 = VAR_4;
 unsigned int VAR_14 = -1, VAR_15, VAR_16 = 0;
 u64 VAR_17;

 VAR_5 /= VAR_3->idiv;

 for (VAR_8 = 1; VAR_8 <= VAR_0; VAR_8++) {
  for (VAR_9 = VAR_2; VAR_9 <= VAR_1; VAR_9++) {
   VAR_17 = VAR_5;
   VAR_17 *= VAR_8;
   FUNC_1(VAR_17, 1 << VAR_9);
   VAR_12 = VAR_17;
   VAR_15 = FUNC_0(VAR_4 - VAR_12);
   if ((VAR_12 >= VAR_4) && (VAR_15 < VAR_14)) {
    VAR_14 = VAR_15;
    VAR_13 = VAR_12;
    VAR_10 = VAR_8;
    VAR_11 = VAR_9;
    VAR_16 = 1;
   }
  }
 }

 if (!VAR_16) {
  FUNC_3("spll: no match found\n");
  return 0;
 }

 FUNC_2("rate %lu, par_rate %lu/mult %u, div %u, best_rate %lu\n",
   VAR_4, VAR_5, VAR_10, VAR_11, VAR_13);

 if (VAR_6)
  *VAR_6 = VAR_10 - 1;

 if (VAR_7)
  *VAR_7 = VAR_11;

 return VAR_13;
}
