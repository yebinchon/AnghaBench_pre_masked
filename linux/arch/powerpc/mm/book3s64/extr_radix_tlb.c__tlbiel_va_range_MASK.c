
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned long,int ,int ) ;
 int FUNC_1 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(unsigned long VAR_1, unsigned long VAR_2,
        unsigned long VAR_3, unsigned long VAR_4,
        unsigned long VAR_5, bool VAR_6)
{
 asm volatile("ptesync": : :"memory");
 if (VAR_6)
  FUNC_0(VAR_3, 0, VAR_0);
 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 asm volatile("ptesync": : :"memory");
}
