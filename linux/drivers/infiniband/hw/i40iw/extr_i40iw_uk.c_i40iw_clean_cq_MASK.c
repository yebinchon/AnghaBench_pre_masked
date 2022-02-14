
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct i40iw_extended_cqe {int dummy; } ;
struct TYPE_2__ {size_t head; size_t size; } ;
struct i40iw_cq_uk {int polarity; TYPE_1__ cq_ring; int * cq_base; scalar_t__ avoid_mem_cflct; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__*,int,scalar_t__*) ;
 int FUNC_2 (scalar_t__*,int,int ) ;

void FUNC_3(void *VAR_1, struct i40iw_cq_uk *VAR_2)
{
 u64 *VAR_3;
 u64 VAR_4, VAR_5;
 u32 VAR_6;
 u8 VAR_7, VAR_8;

 VAR_6 = VAR_2->cq_ring.head;
 VAR_8 = VAR_2->polarity;
 do {
  if (VAR_2->avoid_mem_cflct)
   VAR_3 = (u64 *)&(((struct i40iw_extended_cqe *)VAR_2->cq_base)[VAR_6]);
  else
   VAR_3 = (u64 *)&VAR_2->cq_base[VAR_6];
  FUNC_1(VAR_3, 24, &VAR_4);
  VAR_7 = (u8)FUNC_0(VAR_4, VAR_0);

  if (VAR_7 != VAR_8)
   break;

  FUNC_1(VAR_3, 8, &VAR_5);
  if ((void *)(unsigned long)VAR_5 == VAR_1)
   FUNC_2(VAR_3, 8, 0);

  VAR_6 = (VAR_6 + 1) % VAR_2->cq_ring.size;
  if (!VAR_6)
   VAR_8 ^= 1;
 } while (1);
}
