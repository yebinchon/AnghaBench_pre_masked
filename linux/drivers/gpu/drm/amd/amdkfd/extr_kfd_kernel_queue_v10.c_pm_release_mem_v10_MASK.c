
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_8__ {int address_lo_32b; } ;
struct TYPE_7__ {int int_sel; int data_sel; } ;
struct TYPE_6__ {int tcl1_action_ena; int tc_action_ena; int cache_policy; int event_index; int event_type; } ;
struct TYPE_5__ {int u32All; } ;
struct pm4_mec_release_mem {scalar_t__ data_lo; int address_hi; TYPE_4__ bitfields4; TYPE_3__ bitfields3; TYPE_2__ bitfields2; TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(uint64_t VAR_6, uint32_t *VAR_7)
{
 struct pm4_mec_release_mem *VAR_8;

 FUNC_0(!VAR_7);

 VAR_8 = (struct pm4_mec_release_mem *)VAR_7;
 FUNC_1(VAR_7, 0, sizeof(struct pm4_mec_release_mem));

 VAR_8->header.u32All = FUNC_2(VAR_1,
     sizeof(struct pm4_mec_release_mem));

 VAR_8->bitfields2.event_type = VAR_0;
 VAR_8->bitfields2.event_index = VAR_4;
 VAR_8->bitfields2.tcl1_action_ena = 1;
 VAR_8->bitfields2.tc_action_ena = 1;
 VAR_8->bitfields2.cache_policy = VAR_2;

 VAR_8->bitfields3.data_sel = VAR_3;
 VAR_8->bitfields3.int_sel =
  VAR_5;

 VAR_8->bitfields4.address_lo_32b = (VAR_6 & 0xffffffff) >> 2;
 VAR_8->address_hi = FUNC_3(VAR_6);

 VAR_8->data_lo = 0;

 return sizeof(struct pm4_mec_release_mem) / sizeof(unsigned int);
}
