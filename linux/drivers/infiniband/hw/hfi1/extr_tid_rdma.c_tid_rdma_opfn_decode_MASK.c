
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tid_rdma_params {int max_len; int jkey; int max_write; int max_read; int qp; int urg; int timeout; } ;


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

__attribute__((used)) static void FUNC_0(struct tid_rdma_params *VAR_17, u64 VAR_18)
{
 VAR_17->max_len = (((VAR_18 >> VAR_4) &
  VAR_3) + 1) << VAR_0;
 VAR_17->jkey = (VAR_18 >> VAR_2) & VAR_1;
 VAR_17->max_write = (VAR_18 >> VAR_8) &
  VAR_7;
 VAR_17->max_read = (VAR_18 >> VAR_6) &
  VAR_5;
 VAR_17->qp =
  ((((VAR_18 >> VAR_12) & VAR_11)
   << 16) |
  ((VAR_18 >> VAR_10) & VAR_9));
 VAR_17->urg = (VAR_18 >> VAR_16) & VAR_15;
 VAR_17->timeout = (VAR_18 >> VAR_14) & VAR_13;
}
