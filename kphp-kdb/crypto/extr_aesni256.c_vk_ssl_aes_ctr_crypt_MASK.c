
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int key; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef TYPE_2__ vk_aes_ctx_t ;


 int FUNC_0 (unsigned char*,unsigned char*,int *) ;

void FUNC_1 (vk_aes_ctx_t *VAR_0, const unsigned char *VAR_1, unsigned char *VAR_2, int VAR_3, unsigned char VAR_4[16], unsigned long long VAR_5) {
  unsigned long long *VAR_6 = (unsigned long long *) (VAR_4 + 8);
  const unsigned long long VAR_7 = *VAR_6;
  (*VAR_6) += VAR_5 >> 4;
  union {
    unsigned char c[16];
    unsigned long long d[2];
  } VAR_8;
  int VAR_9 = VAR_5 & 15, VAR_10;
  if (VAR_9) {
    FUNC_0 (VAR_4, VAR_8.c, &VAR_0->u.key);
    (*VAR_6)++;
    VAR_10 = VAR_9 + VAR_3;
    if (VAR_10 > 16) {
      VAR_10 = 16;
    }
    VAR_3 -= VAR_10 - VAR_9;
    do {
      *VAR_2++ = (*VAR_1++) ^ VAR_8.c[VAR_9++];
    } while (VAR_9 < VAR_10);
  }
  const unsigned long long *VAR_11 = (const unsigned long long *) VAR_1;
  unsigned long long *VAR_12 = (unsigned long long *) VAR_2;
  int VAR_13 = VAR_3 >> 4;
  while (--VAR_13 >= 0) {
    FUNC_0 (VAR_4, (unsigned char *) VAR_8.d, &VAR_0->u.key);
    (*VAR_6)++;
    *VAR_12++ = (*VAR_11++) ^ VAR_8.d[0];
    *VAR_12++ = (*VAR_11++) ^ VAR_8.d[1];
  }
  VAR_1 = (const unsigned char *) VAR_11;
  VAR_2 = (unsigned char *) VAR_12;
  VAR_10 = VAR_3 & 15;
  if (VAR_10) {
    FUNC_0 (VAR_4, VAR_8.c, &VAR_0->u.key);
    VAR_9 = 0;
    do {
      *VAR_2++ = (*VAR_1++) ^ VAR_8.c[VAR_9++];
    } while (VAR_9 < VAR_10);
  }
  *VAR_6 = VAR_7;
}
