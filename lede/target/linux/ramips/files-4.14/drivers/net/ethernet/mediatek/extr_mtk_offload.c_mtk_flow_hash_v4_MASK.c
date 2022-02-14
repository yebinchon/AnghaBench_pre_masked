
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int s_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct flow_offload_tuple {TYPE_2__ src_v4; TYPE_1__ dst_v4; int dst_port; int src_port; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32
FUNC_2(struct flow_offload_tuple *VAR_0)
{
 u32 VAR_1 = FUNC_1(VAR_0->src_port) << 16 | FUNC_1(VAR_0->dst_port);
 u32 VAR_2 = FUNC_0(VAR_0->dst_v4.s_addr);
 u32 VAR_3 = FUNC_0(VAR_0->src_v4.s_addr);
 u32 VAR_4 = (VAR_1 & VAR_2) | ((~VAR_1) & VAR_3);
 u32 VAR_5 = VAR_4 & 0xffffff;
 u32 VAR_6 = VAR_4 & 0xff000000;

 VAR_4 = VAR_1 ^ VAR_2 ^ VAR_3 ^ ((VAR_5 << 8) | (VAR_6 >> 24));
 VAR_4 = ((VAR_4 & 0xffff0000) >> 16 ) ^ (VAR_4 & 0xfffff);
 VAR_4 &= 0x7ff;
 VAR_4 *= 2;;

 return VAR_4;
}
