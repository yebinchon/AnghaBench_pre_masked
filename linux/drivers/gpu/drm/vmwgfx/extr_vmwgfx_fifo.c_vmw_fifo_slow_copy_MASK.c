
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u32 ;
struct vmw_fifo_state {scalar_t__* static_buffer; scalar_t__* dynamic_buffer; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_3(struct vmw_fifo_state *VAR_1,
          u32 *VAR_2,
          uint32_t VAR_3,
          uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 uint32_t *VAR_7 = (VAR_1->dynamic_buffer != ((void*)0)) ?
     VAR_1->dynamic_buffer : VAR_1->static_buffer;

 while (VAR_6 > 0) {
  FUNC_2(*VAR_7++, VAR_2 + (VAR_3 >> 2));
  VAR_3 += sizeof(uint32_t);
  if (FUNC_1(VAR_3 == VAR_4))
   VAR_3 = VAR_5;
  FUNC_0();
  FUNC_2(VAR_3, VAR_2 + VAR_0);
  FUNC_0();
  VAR_6 -= sizeof(uint32_t);
 }
}
