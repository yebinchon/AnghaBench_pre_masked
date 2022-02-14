
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* count; int * buffer; int state; } ;
typedef TYPE_1__ SHA1_CTX ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int *,unsigned int) ;

void
FUNC_2 (SHA1_CTX * VAR_0, uint8_t * VAR_1, unsigned int VAR_2)
{
  unsigned int VAR_3, VAR_4;

  VAR_4 = (VAR_0->count[0] >> 3) & 63;
  if ((VAR_0->count[0] += VAR_2 << 3) < (VAR_2 << 3))
    VAR_0->count[1]++;
  VAR_0->count[1] += (VAR_2 >> 29);
  if ((VAR_4 + VAR_2) > 63) {
    FUNC_1 (&VAR_0->buffer[VAR_4], VAR_1, (VAR_3 = 64 - VAR_4));
    FUNC_0 (VAR_0->state, VAR_0->buffer);
    for (; VAR_3 + 63 < VAR_2; VAR_3 += 64) {
      FUNC_0 (VAR_0->state, &VAR_1[VAR_3]);
    }
    VAR_4 = 0;
  } else
    VAR_3 = 0;
  FUNC_1 (&VAR_0->buffer[VAR_4], &VAR_1[VAR_3], VAR_2 - VAR_3);
}
