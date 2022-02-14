
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct TYPE_6__ {int head; int size; } ;
struct i40iw_qp_uk {int swqe_polarity; TYPE_2__* sq_base; TYPE_3__ sq_ring; TYPE_1__* sq_wrtrk_array; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_5__ {int* elem; } ;
struct TYPE_4__ {int wqe_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (TYPE_3__) ;
 int FUNC_1 (int,int ) ;
 int VAR_6 ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 () ;

__attribute__((used)) static enum i40iw_status_code FUNC_4(struct i40iw_qp_uk *VAR_7)
{
 u64 VAR_8, *VAR_9;
 u64 *VAR_10 = ((void*)0);
 u32 VAR_11, VAR_12;
 bool VAR_13 = 0;

 if (!VAR_7->sq_ring.head)
  return VAR_4;

 VAR_11 = FUNC_0(VAR_7->sq_ring);
 VAR_9 = VAR_7->sq_base[VAR_11].elem;

 VAR_7->sq_wrtrk_array[VAR_11].wqe_size = VAR_5;

 VAR_12 = (VAR_7->sq_ring.head + 1) % VAR_7->sq_ring.size;
 VAR_10 = VAR_7->sq_base[VAR_12].elem;
 if (VAR_12)
  VAR_10[3] = FUNC_1(!VAR_7->swqe_polarity, VAR_2);
 else
  VAR_10[3] = FUNC_1(VAR_7->swqe_polarity, VAR_2);

 FUNC_2(VAR_9, 0, 0);
 FUNC_2(VAR_9, 8, 0);
 FUNC_2(VAR_9, 16, 0);

 VAR_8 = FUNC_1(VAR_3, VAR_0) |
     FUNC_1(VAR_13, VAR_1) |
     FUNC_1(VAR_7->swqe_polarity, VAR_2) | VAR_6++;

 FUNC_3();

 FUNC_2(VAR_9, 24, VAR_8);
 return 0;
}
