
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_pte {scalar_t__ v; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long,int,int,int) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct hash_pte*,unsigned long,int*,int*,int*,unsigned long*) ;
 struct hash_pte* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(void)
{
 unsigned long VAR_4 = 0;
 unsigned long VAR_5, VAR_6;
 struct hash_pte *VAR_7 = VAR_2;
 unsigned long VAR_8;
 unsigned long VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_9 = VAR_3 + 1;

 VAR_6 = VAR_9 * VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++, VAR_7++) {





  VAR_8 = FUNC_1(VAR_7->v);





  if (VAR_8 & VAR_1) {
   FUNC_2(VAR_7, VAR_5, &VAR_10, &VAR_11, &VAR_12, &VAR_4);
   VAR_7->v = 0;
   FUNC_0(VAR_4, VAR_10, VAR_11, VAR_12);
  }
 }

 asm volatile("eieio; tlbsync; ptesync":::"memory");
}
