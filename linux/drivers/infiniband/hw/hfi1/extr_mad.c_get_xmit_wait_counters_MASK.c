
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u16 ;
struct hfi1_pportdata {scalar_t__* vl_xmit_flit_cnt; int prev_link_width; scalar_t__* port_vl_xmit_wait_last; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (struct hfi1_pportdata*,int ,int) ;

u64 FUNC_2(struct hfi1_pportdata *VAR_4,
      u16 VAR_5, u16 VAR_6, int VAR_7)
{
 u64 VAR_8;
 u64 VAR_9;
 u64 VAR_10;

 if (VAR_7 > VAR_3)
  return 0;
 if (VAR_7 < VAR_3)
  VAR_8 =
   FUNC_1(VAR_4, VAR_2, VAR_7);
 else
  VAR_8 =
   FUNC_1(VAR_4, VAR_1, VAR_0);

 VAR_10 =
  VAR_8 -
  VAR_4->port_vl_xmit_wait_last[VAR_7];
 VAR_9 =
  FUNC_0(VAR_10,
         VAR_4->prev_link_width,
         VAR_6);

 VAR_4->vl_xmit_flit_cnt[VAR_7] += VAR_9;
 VAR_4->port_vl_xmit_wait_last[VAR_7] = VAR_8;
 VAR_4->prev_link_width = VAR_5;

 return VAR_4->vl_xmit_flit_cnt[VAR_7];
}
