
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int * VAR_0 ;

__attribute__((used)) static inline u8 FUNC_0(long VAR_1)
{
 return VAR_0[VAR_1 <= -50000 ? 0 : VAR_1 >= 110000 ? 160 :
        (VAR_1 < 0 ? VAR_1 - 500 : VAR_1 + 500) / 1000 + 50];
}
