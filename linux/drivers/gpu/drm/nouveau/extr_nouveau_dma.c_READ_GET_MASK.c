
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int addr; } ;
struct TYPE_3__ {int max; } ;
struct nouveau_channel {TYPE_2__ push; TYPE_1__ dma; scalar_t__ user_get_hi; int user; scalar_t__ user_get; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int
FUNC_2(struct nouveau_channel *VAR_2, uint64_t *VAR_3, int *VAR_4)
{
 uint64_t VAR_5;

 VAR_5 = FUNC_0(&VAR_2->user, VAR_2->user_get);
        if (VAR_2->user_get_hi)
                VAR_5 |= (uint64_t)FUNC_0(&VAR_2->user, VAR_2->user_get_hi) << 32;





 if (VAR_5 != *VAR_3) {
  *VAR_3 = VAR_5;
  *VAR_4 = 0;
 }

 if ((++*VAR_4 & 0xff) == 0) {
  FUNC_1(1);
  if (*VAR_4 > 100000)
   return -VAR_0;
 }

 if (VAR_5 < VAR_2->push.addr ||
     VAR_5 > VAR_2->push.addr + (VAR_2->dma.max << 2))
  return -VAR_1;

 return (VAR_5 - VAR_2->push.addr) >> 2;
}
