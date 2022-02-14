
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int high_part; int low_part; } ;
union ULARGE_INTEGER {unsigned long long quad_part; TYPE_1__ u; } ;
struct TYPE_6__ {int mask; void* vmid; int mode; } ;
union TCP_WATCH_CNTL_BITS {TYPE_2__ bitfields; int u32All; } ;
struct TYPE_8__ {int addr; } ;
union TCP_WATCH_ADDR_L_BITS {TYPE_4__ bitfields; scalar_t__ u32All; } ;
struct TYPE_7__ {int addr; } ;
union TCP_WATCH_ADDR_H_BITS {TYPE_3__ bitfields; scalar_t__ u32All; } ;
typedef void* uint32_t ;
struct dbg_address_watch_info {int* watch_mask; int * watch_mode; scalar_t__* watch_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void FUNC_1(
   const struct dbg_address_watch_info *VAR_4,
   union TCP_WATCH_ADDR_H_BITS *VAR_5,
   union TCP_WATCH_ADDR_L_BITS *VAR_6,
   union TCP_WATCH_CNTL_BITS *VAR_7,
   unsigned int VAR_8, unsigned int VAR_9)
{
 union ULARGE_INTEGER VAR_10;

 VAR_10.quad_part = 0;
 VAR_5->u32All = 0;
 VAR_6->u32All = 0;
 VAR_7->u32All = 0;

 if (VAR_4->watch_mask)
  VAR_7->bitfields.mask =
   (uint32_t) (VAR_4->watch_mask[VAR_8] &
     VAR_3);
 else
  VAR_7->bitfields.mask = VAR_3;

 VAR_10.quad_part = (unsigned long long) VAR_4->watch_address[VAR_8];

 VAR_5->bitfields.addr = VAR_10.u.high_part &
     VAR_0;
 VAR_6->bitfields.addr =
   (VAR_10.u.low_part >> VAR_1);

 VAR_7->bitfields.mode = VAR_4->watch_mode[VAR_8];
 VAR_7->bitfields.vmid = (uint32_t) VAR_9;

 VAR_7->u32All |= VAR_2;

 FUNC_0("\t\t%20s %08x\n", "set reg mask :", VAR_7->bitfields.mask);
 FUNC_0("\t\t%20s %08x\n", "set reg add high :",
   VAR_5->bitfields.addr);
 FUNC_0("\t\t%20s %08x\n", "set reg add low :",
   VAR_6->bitfields.addr);
}
