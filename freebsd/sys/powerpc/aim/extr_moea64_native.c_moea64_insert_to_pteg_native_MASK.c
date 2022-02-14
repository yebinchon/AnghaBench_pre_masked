
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct lpte {void* pte_hi; void* pte_lo; } ;


 uintptr_t VAR_0 ;
 uintptr_t VAR_1 ;
 uintptr_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct lpte volatile*,int,int*) ;
 void* FUNC_6 (void*) ;
 int FUNC_7 () ;
 int VAR_8 ;
 int VAR_9 ;
 uintptr_t VAR_10 ;
 struct lpte* VAR_11 ;

__attribute__((used)) static uintptr_t
FUNC_8(struct lpte *VAR_12, uintptr_t VAR_13,
    uint64_t VAR_14)
{
 volatile struct lpte *VAR_15;
 uint64_t VAR_16, VAR_17;
 uintptr_t VAR_18;
 int VAR_19, VAR_20;


 VAR_19 = FUNC_7() % 8;
 for (VAR_20 = 0; VAR_20 < 8; VAR_20++) {
  VAR_18 = VAR_13 + (VAR_19 + VAR_20) % 8;
  VAR_15 = &VAR_11[VAR_18];

  if (FUNC_5(VAR_15, VAR_14, &VAR_16))
   break;
 }

 if (VAR_20 == 8)
  return (-1);

 if (VAR_16 & VAR_6) {
  FUNC_1(!(VAR_16 & VAR_7), ("Unmapped wired entry"));





  VAR_17 = VAR_16 >> (VAR_3 - VAR_0);
  if (VAR_16 & VAR_5)
   VAR_17 = (((VAR_18 >> 3) ^ VAR_10) ^ VAR_17) &
       (VAR_1 >> VAR_2);
  else
   VAR_17 = ((VAR_18 >> 3) ^ VAR_17) & (VAR_1 >> VAR_2);
  VAR_17 |= (VAR_16 & VAR_4) <<
      (VAR_0 - VAR_2);
  FUNC_2();
  FUNC_4(VAR_17);
  FUNC_3(VAR_9--);
  FUNC_3(VAR_8++);
 }





 VAR_15->pte_lo = FUNC_6(VAR_12->pte_lo);
 FUNC_0();
 VAR_15->pte_hi = FUNC_6(VAR_12->pte_hi);
 FUNC_2();


 FUNC_3(VAR_9++);

 return (VAR_18);
}
