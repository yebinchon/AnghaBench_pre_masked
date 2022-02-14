
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct dc_link_settings {int link_rate; int lane_count; } ;
struct TYPE_4__ {scalar_t__ FEC_CAPABLE; } ;
struct TYPE_5__ {TYPE_1__ bits; } ;
struct TYPE_6__ {TYPE_2__ fec_cap; } ;
struct dc_link {TYPE_3__ dpcd_caps; } ;


 long long FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (long long,int,int) ;

uint32_t FUNC_2(
 const struct dc_link *VAR_1,
 const struct dc_link_settings *VAR_2)
{
 uint32_t VAR_3 =
  VAR_2->link_rate * VAR_0;

 VAR_3 *= 8;
 VAR_3 *= VAR_2->lane_count;
 return VAR_3;

}
