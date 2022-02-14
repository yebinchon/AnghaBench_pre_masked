
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t uint64_t ;
struct lpte {int pte_hi; int pte_lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpte*,struct lpte*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,uintptr_t,int ,int ,int*,int*,uintptr_t*) ;

__attribute__((used)) static uintptr_t
FUNC_3(uintptr_t VAR_4, struct lpte *VAR_5)
{
 uint64_t VAR_6, VAR_7, VAR_8;
 struct lpte VAR_9;
 int VAR_10, VAR_11;


 VAR_10 = FUNC_1() % 8;
 VAR_8 = -1;
 for (VAR_11 = 0; VAR_11 < 8; VAR_11++) {
  VAR_6 = VAR_4 + (VAR_10 + VAR_11) % 8;
  FUNC_2(VAR_0, 0, VAR_6, 0, 0, &VAR_9.pte_hi,
      &VAR_9.pte_lo, &VAR_7);

  if (VAR_9.pte_hi & VAR_3)
   continue;


  VAR_8 = VAR_6;


  if (!(VAR_9.pte_hi & VAR_2) || !(VAR_9.pte_lo & VAR_1)) {
   FUNC_0(VAR_5, &VAR_9, sizeof(struct lpte));
   return (VAR_8);
  }
 }

 if (VAR_8 == -1)
  return (VAR_8);

 FUNC_2(VAR_0, 0, VAR_8, 0, 0, &VAR_5->pte_hi,
     &VAR_5->pte_lo, &VAR_7);
 return (VAR_8);
}
