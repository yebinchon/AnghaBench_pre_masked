
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct vmw_fifo_state {int* dynamic_buffer; int* static_buffer; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct vmw_fifo_state *VAR_1,
         u32 *VAR_2,
         uint32_t VAR_3,
         uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 uint32_t VAR_7 = VAR_4 - VAR_3;
 uint32_t VAR_8;
 uint32_t *VAR_9 = (VAR_1->dynamic_buffer != ((void*)0)) ?
     VAR_1->dynamic_buffer : VAR_1->static_buffer;

 if (VAR_6 < VAR_7)
  VAR_7 = VAR_6;

 FUNC_2(VAR_6, VAR_2 + VAR_0);
 FUNC_0();
 FUNC_1(VAR_2 + (VAR_3 >> 2), VAR_9, VAR_7);
 VAR_8 = VAR_6 - VAR_7;
 if (VAR_8)
  FUNC_1(VAR_2 + (VAR_5 >> 2), VAR_9 + (VAR_7 >> 2), VAR_8);
}
