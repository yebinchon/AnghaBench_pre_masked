
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int TRAINIG_AUX_RD_INTERVAL; } ;
union training_aux_rd_interval {TYPE_3__ bits; } ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int training_rd_interval ;
struct TYPE_4__ {scalar_t__ raw; } ;
struct TYPE_5__ {TYPE_1__ dpcd_rev; } ;
struct dc_link {TYPE_2__ dpcd_caps; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dc_link*,int ,int *,int) ;
 int FUNC_1 (union training_aux_rd_interval*,int ,int) ;

__attribute__((used)) static uint32_t FUNC_2(
 struct dc_link *VAR_2,
 uint32_t VAR_3)
{
 union training_aux_rd_interval VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));


 if (VAR_2->dpcd_caps.dpcd_rev.raw >= VAR_0) {


  FUNC_0(
   VAR_2,
   VAR_1,
   (uint8_t *)&VAR_4,
   sizeof(VAR_4));

  if (VAR_4.bits.TRAINIG_AUX_RD_INTERVAL)
   VAR_3 = VAR_4.bits.TRAINIG_AUX_RD_INTERVAL * 4000;
 }

 return VAR_3;
}
