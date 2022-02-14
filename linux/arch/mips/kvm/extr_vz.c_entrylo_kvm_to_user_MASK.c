
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline s64 FUNC_0(unsigned long VAR_3)
{
 s64 VAR_4, VAR_5 = VAR_3;

 if (VAR_0 == 32) {




  VAR_4 = VAR_1 | VAR_2;
  VAR_5 &= ~VAR_4;
  VAR_5 |= ((s64)VAR_3 & VAR_4) << 32;
 }
 return VAR_5;
}
