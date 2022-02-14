
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 (unsigned long long*,unsigned char*,int) ;

__attribute__((used)) static unsigned long long FUNC_1 (unsigned char *VAR_1) {
  unsigned char VAR_2[9];
  unsigned long long VAR_3;
  unsigned char *VAR_4 = &VAR_2[0];
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
    int VAR_6 = VAR_0[*VAR_1++];
    VAR_6 <<= 6;
    VAR_6 |= VAR_0[*VAR_1++];
    VAR_6 <<= 6;
    VAR_6 |= VAR_0[*VAR_1++];
    VAR_6 <<= 6;
    VAR_6 |= VAR_0[*VAR_1++];
    VAR_4[2] = VAR_6 & 255;
    VAR_6 >>= 8;
    VAR_4[1] = VAR_6 & 255;
    VAR_4[0] = VAR_6 >> 8;
    VAR_4 += 3;
  }
  FUNC_0 (&VAR_3, VAR_2, 8);
  return VAR_3;
}
