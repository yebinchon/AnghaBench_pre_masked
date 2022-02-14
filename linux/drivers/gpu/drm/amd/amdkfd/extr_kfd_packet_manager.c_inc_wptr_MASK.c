
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static inline void FUNC_1(unsigned int *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2)
{
 unsigned int VAR_3 = *VAR_0 + VAR_1 / sizeof(uint32_t);

 FUNC_0((VAR_3 * sizeof(uint32_t)) > VAR_2,
      "Runlist IB overflow");
 *VAR_0 = VAR_3;
}
