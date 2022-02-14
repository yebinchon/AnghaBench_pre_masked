
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s64 ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static inline unsigned long FUNC_0(s64 VAR_3)
{
 unsigned long VAR_4, VAR_5 = VAR_3;

 if (VAR_0 == 32) {




  VAR_4 = VAR_1 | VAR_2;
  VAR_5 &= ~VAR_4;
  VAR_5 |= (VAR_3 >> 32) & VAR_4;
 }
 return VAR_5;
}
