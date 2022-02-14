
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tid_rdma_params {int max_len; scalar_t__ max_write; scalar_t__ max_read; scalar_t__ jkey; scalar_t__ urg; scalar_t__ timeout; scalar_t__ qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static u64 FUNC_0(struct tid_rdma_params *VAR_17)
{
 return
  (((u64)VAR_17->qp & VAR_9) <<
   VAR_10) |
  ((((u64)VAR_17->qp >> 16) & VAR_11) <<
   VAR_12) |
  (((u64)((VAR_17->max_len >> VAR_0) - 1) &
   VAR_3) << VAR_4) |
  (((u64)VAR_17->timeout & VAR_13) <<
   VAR_14) |
  (((u64)VAR_17->urg & VAR_15) << VAR_16) |
  (((u64)VAR_17->jkey & VAR_1) << VAR_2) |
  (((u64)VAR_17->max_read & VAR_5) <<
   VAR_6) |
  (((u64)VAR_17->max_write & VAR_7) <<
   VAR_8);
}
