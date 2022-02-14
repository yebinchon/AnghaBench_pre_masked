
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stedma40_half_channel_info {int psize; int flow_ctrl; } ;
struct d40_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct d40_chan*) ;

__attribute__((used)) static int
FUNC_1(struct d40_chan *VAR_9,
       struct stedma40_half_channel_info *VAR_10,
       u32 VAR_11)
{
 int VAR_12;

 if (FUNC_0(VAR_9)) {
  if (VAR_11 >= 16)
   VAR_12 = VAR_2;
  else if (VAR_11 >= 8)
   VAR_12 = VAR_4;
  else if (VAR_11 >= 4)
   VAR_12 = VAR_3;
  else
   VAR_12 = VAR_1;
 } else {
  if (VAR_11 >= 16)
   VAR_12 = VAR_6;
  else if (VAR_11 >= 8)
   VAR_12 = VAR_8;
  else if (VAR_11 >= 4)
   VAR_12 = VAR_7;
  else
   VAR_12 = VAR_5;
 }

 VAR_10->psize = VAR_12;
 VAR_10->flow_ctrl = VAR_0;

 return 0;
}
