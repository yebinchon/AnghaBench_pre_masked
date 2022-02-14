
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (unsigned long,int*) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static inline unsigned long FUNC_2(unsigned long VAR_2)
{
 pte_t *VAR_3;
 unsigned long VAR_4;
 int VAR_5;






 VAR_3 = FUNC_0(VAR_2, &VAR_5);
 if (!VAR_3)
  return VAR_2;

 VAR_4 = FUNC_1(*VAR_3);


 if (VAR_5) {
  VAR_4 <<= VAR_5;
  VAR_4 |= VAR_2 & ((1ul << VAR_5) - 1);
 } else {
  VAR_4 <<= VAR_0;
  VAR_4 |= VAR_2 & (VAR_1 - 1);
 }

 return VAR_4;
}
