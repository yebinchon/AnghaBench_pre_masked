
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;



__attribute__((used)) static inline unsigned int FUNC_0(const u8 *VAR_0, size_t VAR_1)
{
 unsigned long VAR_2 = 0;
 size_t VAR_3;

 for (VAR_3 = VAR_1; VAR_3 > 0; VAR_3--)
  VAR_2 = (VAR_2 << 8) | VAR_0[VAR_3 - 1];

 return VAR_2;
}
