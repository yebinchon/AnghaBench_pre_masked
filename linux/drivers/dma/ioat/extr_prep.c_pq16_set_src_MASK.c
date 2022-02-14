
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef scalar_t__ u32 ;
struct ioat_raw_descriptor {scalar_t__* field; } ;
struct ioat_pq_descriptor {void** coef; } ;
struct ioat_pq16a_descriptor {void** coef; } ;
typedef scalar_t__ dma_addr_t ;


 size_t* VAR_0 ;
 size_t* VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ioat_raw_descriptor *VAR_2[3],
   dma_addr_t VAR_3, u32 VAR_4, u8 VAR_5, unsigned VAR_6)
{
 struct ioat_pq_descriptor *VAR_7 = (struct ioat_pq_descriptor *)VAR_2[0];
 struct ioat_pq16a_descriptor *VAR_8 =
  (struct ioat_pq16a_descriptor *)VAR_2[1];
 struct ioat_raw_descriptor *VAR_9 = VAR_2[VAR_0[VAR_6]];

 VAR_9->field[VAR_1[VAR_6]] = VAR_3 + VAR_4;

 if (VAR_6 < 8)
  VAR_7->coef[VAR_6] = VAR_5;
 else
  VAR_8->coef[VAR_6 - 8] = VAR_5;
}
