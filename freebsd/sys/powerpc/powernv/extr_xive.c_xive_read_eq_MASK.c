
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xive_queue {size_t q_index; int q_toggle; int q_mask; int * q_page; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct xive_queue *VAR_0)
{
 uint32_t VAR_1 = FUNC_0(VAR_0->q_page[VAR_0->q_index]);


 if ((VAR_1 >> 31) == VAR_0->q_toggle)
  return (0);

 VAR_0->q_index = (VAR_0->q_index + 1) & VAR_0->q_mask;

 if (VAR_0->q_index == 0)
  VAR_0->q_toggle ^= 1;

 return (VAR_1 & 0x7fffffff);
}
