
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int psize; int data_width; } ;
struct TYPE_3__ {int psize; int data_width; } ;
struct stedma40_chan_cfg {scalar_t__ dir; TYPE_2__ src_info; TYPE_1__ dst_info; } ;


 int FUNC_0 (int ) ;
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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int ) ;

void FUNC_2(struct stedma40_chan_cfg *VAR_14,
   u32 *VAR_15, u32 *VAR_16)
{
 u32 VAR_17 = 0;
 u32 VAR_18 = 0;


 if (VAR_14->dir == VAR_12 ||
     VAR_14->dir == VAR_13)
  VAR_18 |= FUNC_0(VAR_2);


 if (VAR_14->dir == VAR_11 ||
     VAR_14->dir == VAR_13)
  VAR_17 |= FUNC_0(VAR_7);


 if (VAR_14->dir == VAR_11 ||
     VAR_14->dir == VAR_10)
  VAR_18 |= FUNC_0(VAR_3);


 if (VAR_14->dir == VAR_12 ||
     VAR_14->dir == VAR_10)
  VAR_17 |= FUNC_0(VAR_8);

 VAR_17 |= FUNC_0(VAR_5);
 VAR_17 |= VAR_14->dst_info.psize << VAR_9;
 VAR_17 |= FUNC_1(VAR_14->dst_info.data_width)
  << VAR_6;

 VAR_18 |= FUNC_0(VAR_0);
 VAR_18 |= VAR_14->src_info.psize << VAR_4;
 VAR_18 |= FUNC_1(VAR_14->src_info.data_width)
  << VAR_1;

 *VAR_15 = VAR_18;
 *VAR_16 = VAR_17;

}
