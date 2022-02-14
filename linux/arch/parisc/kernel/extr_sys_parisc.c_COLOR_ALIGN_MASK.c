
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned int,unsigned long) ;

__attribute__((used)) static inline unsigned long FUNC_1(unsigned long VAR_2,
    unsigned int VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = (VAR_2+VAR_1-1) & ~(VAR_1-1);
 unsigned long VAR_6 = (VAR_1-1) &
  (FUNC_0(VAR_3, VAR_4) << VAR_0);

 return VAR_5 + VAR_6;
}
