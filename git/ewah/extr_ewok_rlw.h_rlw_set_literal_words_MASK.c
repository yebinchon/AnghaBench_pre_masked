
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int eword_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(eword_t *VAR_2, eword_t VAR_3)
{
 *VAR_2 |= ~VAR_1;
 *VAR_2 &= (VAR_3 << (VAR_0 + 1)) | VAR_1;
}
