
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * a; } ;
struct TYPE_6__ {TYPE_1__ ctx; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
typedef TYPE_3__ vk_aes_ctx_t ;


 int FUNC_0 (unsigned char*,unsigned char*,unsigned char*) ;
 unsigned char* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2 (vk_aes_ctx_t *VAR_0, const unsigned char *VAR_1, unsigned char *VAR_2, int VAR_3, unsigned char VAR_4[16], unsigned long long VAR_5) {
  unsigned char *VAR_6 = FUNC_1 (&VAR_0->u.ctx.a[0]);
  unsigned long long *VAR_7 = (unsigned long long *) (VAR_4 + 8);
  const unsigned long long VAR_8 = *VAR_7;
  (*VAR_7) += VAR_5 >> 4;
  union {
    unsigned char c[16];
    unsigned long long d[2];
  } VAR_9;
  int VAR_10 = VAR_5 & 15, VAR_11;
  if (VAR_10) {
    FUNC_0 (VAR_6, VAR_4, VAR_9.c);
    (*VAR_7)++;
    VAR_11 = VAR_10 + VAR_3;
    if (VAR_11 > 16) {
      VAR_11 = 16;
    }
    VAR_3 -= VAR_11 - VAR_10;
    do {
      *VAR_2++ = (*VAR_1++) ^ VAR_9.c[VAR_10++];
    } while (VAR_10 < VAR_11);
  }
  const unsigned long long *VAR_12 = (const unsigned long long *) VAR_1;
  unsigned long long *VAR_13 = (unsigned long long *) VAR_2;
  int VAR_14 = VAR_3 >> 4;
  while (--VAR_14 >= 0) {
    FUNC_0 (VAR_6, VAR_4, (unsigned char *) VAR_9.d);
    (*VAR_7)++;
    *VAR_13++ = (*VAR_12++) ^ VAR_9.d[0];
    *VAR_13++ = (*VAR_12++) ^ VAR_9.d[1];
  }
  VAR_1 = (const unsigned char *) VAR_12;
  VAR_2 = (unsigned char *) VAR_13;
  VAR_11 = VAR_3 & 15;
  if (VAR_11) {
    FUNC_0 (VAR_6, VAR_4, VAR_9.c);
    VAR_10 = 0;
    do {
      *VAR_2++ = (*VAR_1++) ^ VAR_9.c[VAR_10++];
    } while (VAR_10 < VAR_11);
  }
  *VAR_7 = VAR_8;
}
