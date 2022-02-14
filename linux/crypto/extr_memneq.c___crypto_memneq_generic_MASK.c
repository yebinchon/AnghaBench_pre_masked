
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long) ;

__attribute__((used)) static inline unsigned long
FUNC_1(const void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 unsigned long VAR_3 = 0;
 while (VAR_2 > 0) {
  VAR_3 |= *(unsigned char *)VAR_0 ^ *(unsigned char *)VAR_1;
  FUNC_0(VAR_3);
  VAR_0 += 1;
  VAR_1 += 1;
  VAR_2 -= 1;
 }
 return VAR_3;
}
