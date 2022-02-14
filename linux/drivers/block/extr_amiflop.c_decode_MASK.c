
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long ulong ;



__attribute__((used)) static unsigned long FUNC_0 (unsigned long *VAR_0, unsigned long *VAR_1,
        int VAR_2)
{
 ulong *VAR_3, *VAR_4;


 VAR_2 >>= 2;
 VAR_3 = VAR_1;
 VAR_4 = VAR_3 + VAR_2;


 VAR_1 += VAR_2 * 2;

 do {
  *VAR_0++ = ((*VAR_3++ & 0x55555555) << 1) | (*VAR_4++ & 0x55555555);
 } while (--VAR_2 != 0);

 return (ulong)VAR_1;
}
