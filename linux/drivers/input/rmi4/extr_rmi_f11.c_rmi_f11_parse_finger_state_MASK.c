
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int const VAR_0 ;

__attribute__((used)) static inline u8 FUNC_0(const u8 *VAR_1, u8 VAR_2)
{
 return (VAR_1[VAR_2 / 4] >> (2 * (VAR_2 % 4))) &
       VAR_0;
}
