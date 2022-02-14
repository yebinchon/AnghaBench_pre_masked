
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * val8; scalar_t__ val64; } ;
struct pio_buf {unsigned int carry_bytes; TYPE_1__ carry; } ;


 int FUNC_0 (int *,void const*,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct pio_buf *VAR_0, const void *VAR_1,
      unsigned int VAR_2)
{
 VAR_0->carry.val64 = 0;
 FUNC_0(&VAR_0->carry.val8[0], VAR_1, VAR_2);
 VAR_0->carry_bytes = VAR_2;
}
