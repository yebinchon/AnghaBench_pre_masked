
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int pgprot_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned long FUNC_1(pgprot_t VAR_5)
{
 unsigned long VAR_6 = 0;
 u64 VAR_7 = FUNC_0(VAR_5);

 if (VAR_7 & VAR_3)
  VAR_6 |= VAR_0;
 if (VAR_7 & VAR_4)
  VAR_6 |= VAR_2 | VAR_1;

 return VAR_6;
}
