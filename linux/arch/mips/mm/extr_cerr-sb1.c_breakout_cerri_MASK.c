
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static inline void FUNC_1(unsigned int VAR_3)
{
 if (VAR_3 & VAR_2)
  FUNC_0(" tag-parity");
 if (VAR_3 & VAR_0)
  FUNC_0(" data-parity");
 if (VAR_3 & VAR_1)
  FUNC_0(" external");
 FUNC_0("\n");
}
