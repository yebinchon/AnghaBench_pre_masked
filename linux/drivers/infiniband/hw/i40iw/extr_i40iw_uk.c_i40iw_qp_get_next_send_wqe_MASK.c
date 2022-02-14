
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ wqe_ptr ;
typedef scalar_t__ u8 ;
typedef uintptr_t u64 ;
typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct i40iw_qp_uk {int swqe_polarity; TYPE_2__* sq_wrtrk_array; TYPE_1__* sq_base; int sq_ring; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_4__ {uintptr_t wrid; size_t wr_len; scalar_t__ wqe_size; } ;
struct TYPE_3__ {uintptr_t* elem; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 uintptr_t FUNC_3 (int,int ) ;
 int FUNC_4 (uintptr_t,int ) ;
 int FUNC_5 (struct i40iw_qp_uk*) ;

u64 *FUNC_6(struct i40iw_qp_uk *VAR_4,
    u32 *VAR_5,
    u8 VAR_6,
    u32 VAR_7,
    u64 VAR_8
    )
{
 u64 *VAR_9 = ((void*)0);
 u64 VAR_10;
 u32 VAR_11 = 0;
 u16 VAR_12;
 enum i40iw_status_code VAR_13 = 0;
 u8 VAR_14 = 0, VAR_15;
 u64 *VAR_16 = ((void*)0);

 *VAR_5 = FUNC_0(VAR_4->sq_ring);

 if (!*VAR_5)
  VAR_4->swqe_polarity = !VAR_4->swqe_polarity;
 VAR_10 = (uintptr_t)VAR_4->sq_base[*VAR_5].elem;
 VAR_12 = (u16)(VAR_10) & 0x7F;
 if ((VAR_12 + VAR_6) > VAR_1) {
  VAR_14 = (u8)(VAR_1 - VAR_12) / VAR_2;
  for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
   FUNC_5(VAR_4);
   FUNC_1(VAR_4->sq_ring, VAR_13);
   if (VAR_13)
    return ((void*)0);
  }

  *VAR_5 = FUNC_0(VAR_4->sq_ring);
  if (!*VAR_5)
   VAR_4->swqe_polarity = !VAR_4->swqe_polarity;
 }

 if (((*VAR_5 & 3) == 1) && (VAR_6 == VAR_3)) {
  FUNC_5(VAR_4);
  FUNC_1(VAR_4->sq_ring, VAR_13);
  if (VAR_13)
   return ((void*)0);
  *VAR_5 = FUNC_0(VAR_4->sq_ring);
  if (!*VAR_5)
   VAR_4->swqe_polarity = !VAR_4->swqe_polarity;
 }
 FUNC_2(VAR_4->sq_ring,
          VAR_6 / VAR_2, VAR_13);
 if (VAR_13)
  return ((void*)0);

 VAR_9 = VAR_4->sq_base[*VAR_5].elem;

 VAR_11 = FUNC_0(VAR_4->sq_ring);
 VAR_16 = VAR_4->sq_base[VAR_11].elem;

 if (((VAR_11 & 3) == 1) || ((VAR_11 & 3) == 3)) {
  if (FUNC_4(VAR_16[3], VAR_0) != !VAR_4->swqe_polarity)
   VAR_16[3] = FUNC_3(!VAR_4->swqe_polarity, VAR_0);
 }

 VAR_4->sq_wrtrk_array[*VAR_5].wrid = VAR_8;
 VAR_4->sq_wrtrk_array[*VAR_5].wr_len = VAR_7;
 VAR_4->sq_wrtrk_array[*VAR_5].wqe_size = VAR_6;
 return VAR_9;
}
