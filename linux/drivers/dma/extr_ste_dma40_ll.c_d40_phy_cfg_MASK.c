
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ flow_ctrl; int psize; scalar_t__ big_endian; int data_width; } ;
struct TYPE_3__ {scalar_t__ flow_ctrl; int psize; scalar_t__ big_endian; int data_width; } ;
struct stedma40_chan_cfg {scalar_t__ dir; TYPE_2__ dst_info; TYPE_1__ src_info; scalar_t__ high_priority; int dev_type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ) ;

void FUNC_3(struct stedma40_chan_cfg *VAR_14, u32 *VAR_15, u32 *VAR_16)
{
 u32 VAR_17 = 0;
 u32 VAR_18 = 0;

 if ((VAR_14->dir == VAR_10) ||
     (VAR_14->dir == VAR_9)) {

  VAR_17 |= FUNC_0(VAR_3);
  VAR_17 |= FUNC_1(VAR_14->dev_type);

  if (VAR_14->src_info.flow_ctrl == VAR_12)
   VAR_17 |= FUNC_0(VAR_5);
  else
   VAR_17 |= 3 << VAR_5;
 }
 if ((VAR_14->dir == VAR_11) ||
     (VAR_14->dir == VAR_9)) {

  VAR_18 |= FUNC_0(VAR_3);
  VAR_18 |= FUNC_1(VAR_14->dev_type);

  if (VAR_14->dst_info.flow_ctrl == VAR_12)
   VAR_18 |= FUNC_0(VAR_5);
  else
   VAR_18 |= 3 << VAR_5;
 }

 VAR_18 |= FUNC_0(VAR_8);


 VAR_17 |= FUNC_0(VAR_0);
 VAR_18 |= FUNC_0(VAR_0);


 if (VAR_14->src_info.psize != VAR_13) {
  VAR_17 |= FUNC_0(VAR_4);
  VAR_17 |= VAR_14->src_info.psize << VAR_7;
 }
 if (VAR_14->dst_info.psize != VAR_13) {
  VAR_18 |= FUNC_0(VAR_4);
  VAR_18 |= VAR_14->dst_info.psize << VAR_7;
 }


 VAR_17 |= FUNC_2(VAR_14->src_info.data_width)
  << VAR_1;
 VAR_18 |= FUNC_2(VAR_14->dst_info.data_width)
  << VAR_1;


 if (VAR_14->high_priority) {
  VAR_17 |= FUNC_0(VAR_6);
  VAR_18 |= FUNC_0(VAR_6);
 }

 if (VAR_14->src_info.big_endian)
  VAR_17 |= FUNC_0(VAR_2);
 if (VAR_14->dst_info.big_endian)
  VAR_18 |= FUNC_0(VAR_2);

 *VAR_15 = VAR_17;
 *VAR_16 = VAR_18;
}
