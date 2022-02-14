
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned long FUNC_0(const unsigned char **VAR_0,
            const unsigned char *VAR_1)
{
 const unsigned char *VAR_2 = *VAR_0;
 unsigned long VAR_3, VAR_4 = 0;
 int VAR_5 = 0;
 do {
  VAR_3 = *VAR_2++;
  VAR_4 |= (VAR_3 & 0x7f) << VAR_5;
  VAR_5 += 7;
 } while (VAR_3 & 0x80 && VAR_2 < VAR_1);
 *VAR_0 = VAR_2;
 return VAR_4;
}
