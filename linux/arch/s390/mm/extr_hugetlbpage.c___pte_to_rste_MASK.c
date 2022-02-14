
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned long FUNC_0 (unsigned long,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static inline unsigned long FUNC_3(pte_t VAR_18)
{
 unsigned long VAR_19;
 if (FUNC_1(VAR_18)) {
  VAR_19 = FUNC_2(VAR_18) & VAR_0;
  VAR_19 |= FUNC_0(FUNC_2(VAR_18), VAR_5,
         VAR_14);
  VAR_19 |= FUNC_0(FUNC_2(VAR_18), VAR_7,
         VAR_16);
  VAR_19 |= FUNC_0(FUNC_2(VAR_18), VAR_2,
         VAR_11);
  VAR_19 |= FUNC_0(FUNC_2(VAR_18), VAR_4,
         VAR_13);
  VAR_19 |= FUNC_0(FUNC_2(VAR_18), VAR_1,
         VAR_9);
  VAR_19 |= FUNC_0(FUNC_2(VAR_18), VAR_8,
         VAR_17);




  VAR_19 |= FUNC_0(FUNC_2(VAR_18), VAR_3,
         VAR_12);
 } else
  VAR_19 = VAR_10;
 return VAR_19;
}
