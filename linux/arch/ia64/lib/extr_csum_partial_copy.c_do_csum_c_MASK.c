
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long) ;

__attribute__((used)) static inline
unsigned long FUNC_1(const unsigned char * VAR_0, int VAR_1, unsigned int VAR_2)
{
 int VAR_3, VAR_4;
 unsigned long VAR_5 = (unsigned long)VAR_2;

 if (VAR_1 <= 0)
  goto out;
 VAR_3 = 1 & (unsigned long) VAR_0;
 if (VAR_3) {
  VAR_5 = *VAR_0 << 8;
  VAR_1--;
  VAR_0++;
 }
 VAR_4 = VAR_1 >> 1;
 if (VAR_4) {
  if (2 & (unsigned long) VAR_0) {
   VAR_5 += *(unsigned short *) VAR_0;
   VAR_4--;
   VAR_1 -= 2;
   VAR_0 += 2;
  }
  VAR_4 >>= 1;
  if (VAR_4) {
   if (4 & (unsigned long) VAR_0) {
    VAR_5 += *(unsigned int *) VAR_0;
    VAR_4--;
    VAR_1 -= 4;
    VAR_0 += 4;
   }
   VAR_4 >>= 1;
   if (VAR_4) {
    unsigned long VAR_6 = 0;
    do {
     unsigned long VAR_7 = *(unsigned long *) VAR_0;
     VAR_4--;
     VAR_0 += 8;
     VAR_5 += VAR_6;
     VAR_5 += VAR_7;
     VAR_6 = (VAR_7 > VAR_5);
    } while (VAR_4);
    VAR_5 += VAR_6;
    VAR_5 = (VAR_5 & 0xffffffff) + (VAR_5 >> 32);
   }
   if (VAR_1 & 4) {
    VAR_5 += *(unsigned int *) VAR_0;
    VAR_0 += 4;
   }
  }
  if (VAR_1 & 2) {
   VAR_5 += *(unsigned short *) VAR_0;
   VAR_0 += 2;
  }
 }
 if (VAR_1 & 1)
  VAR_5 += *VAR_0;

 VAR_5 = FUNC_0(VAR_5);

 if (VAR_3)
  VAR_5 = ((VAR_5 >> 8) & 0xff) | ((VAR_5 & 0xff) << 8);

out:
 return VAR_5;
}
