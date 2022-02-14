
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_4__ {scalar_t__ latest; } ;
struct TYPE_3__ {scalar_t__ latest; } ;
struct hfi1_pportdata {void* remote_link_down_reason; TYPE_2__ neigh_link_down_reason; TYPE_1__ local_link_down_reason; } ;



void FUNC_0(struct hfi1_pportdata *VAR_0, u8 VAR_1,
     u8 VAR_2, u8 VAR_3)
{
 if (VAR_0->local_link_down_reason.latest == 0 &&
     VAR_0->neigh_link_down_reason.latest == 0) {
  VAR_0->local_link_down_reason.latest = VAR_1;
  VAR_0->neigh_link_down_reason.latest = VAR_2;
  VAR_0->remote_link_down_reason = VAR_3;
 }
}
